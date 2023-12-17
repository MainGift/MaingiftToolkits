#pragma once

#pragma warning(disable:4251)
#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <typeinfo>
#include "../../boost/intrusive_ptr.hpp"
#include "ReferenceCounter.h"

typedef const wchar_t* LPCWSTR_S;

using namespace boost;

namespace Spire {
#ifdef _SPIRE_XLS
namespace Xls{
#elif defined(_SPIRE_DOC)
namespace Doc{
#elif defined(_SPIRE_PDF)
namespace Pdf{
#elif defined(_SPIRE_PPT)
namespace Presentation{
#else
namespace Xls{
#endif
        void FreePtr(void* ptr);
        class EXPORTS Object : public ReferenceCounter
        {
        public:
            Object* GetParent();
            //intrusive_ptr<Object*> GetParentPtr();
            int* GetIntPtr();
            LPCWSTR_S GetInstanceTypeName()
            {
                return typeName;
            }
            template<typename T>
            static T* Create(int* pInstance, Object* pParent)
            {
                if (pInstance == nullptr)
                    return nullptr;
                T* t = new T();
                Object* p = (Object*)t;
                p->instance = pInstance;
                p->parent = pParent;
                wchar_t* const nm_w = new wchar_t[100];
                swprintf(nm_w, 100, L"%hs", typeid(T).name());
                p->typeName = nm_w;
                return t;
            }
            template<typename T>
            static T* CreatePtr(int* pInstance, intrusive_ptr<Object> pParent)
            {
                if (pInstance == nullptr)
                    return nullptr;
                T* t = new T();
                intrusive_ptr<Object> p = (Object*)t;
                p->instance = pInstance;
                p->parent = pParent;
                wchar_t* const nm_w = new wchar_t[100];
                swprintf(nm_w, 100, L"%hs", typeid(T).name());
                p->typeName = nm_w;
                return t;
            }

            template<typename T>
            static bool CheckType(intrusive_ptr<Object> pObj)
            {
                if (pObj == nullptr)
                    return false;

                intrusive_ptr<T> ret = boost::dynamic_pointer_cast<T>(pObj);
                return ret != nullptr ? true : false;
            }

            template<typename T>
            static intrusive_ptr<T> Dynamic_cast(intrusive_ptr<Object> pObj)
            {
                if (pObj == nullptr)
                    return nullptr;

                intrusive_ptr<T> ret = boost::dynamic_pointer_cast<T>(pObj);
                if (ret == nullptr)
                    return Convert<T>(pObj);
                else
                    return ret;
            }
            template<typename T>
            static intrusive_ptr<T> Convert(intrusive_ptr<Object> pObj)
            {
                if (pObj == nullptr)
                    return nullptr;
                intrusive_ptr<T> t = new T();
                intrusive_ptr<Object> p = (intrusive_ptr<Object>)t;
                p->instance = pObj.get()->instance;
                p->parent = pObj.get()->parent;
                p->relationPtr = pObj;
                wchar_t* const nm_w = new wchar_t[100];
                swprintf(nm_w, 100, L"%hs", typeid(T).name());
                p->typeName = nm_w;
                return t;
            }
            static wchar_t c2wc(LPCSTR str)
            {
                wchar_t* const nm_w = new wchar_t[100];
                swprintf(nm_w, 100, L"%hs", str);
                return *nm_w;
            }
        protected:
            int* instance = nullptr;
            intrusive_ptr<Object> relationPtr = nullptr;
            Object* parent = nullptr;
            LPCWSTR_S netName = nullptr;
            LPCWSTR_S typeName = nullptr;
            Object();
            ~Object();
        private:
        };
    }
}