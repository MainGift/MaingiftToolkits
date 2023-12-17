#ifndef REFERENCE_COUNTER_H
#define REFERENCE_COUNTER_H

#include <assert.h>
#include <iostream>

#pragma once

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(disable:4251)
#pragma warning(disable:4100)
#pragma warning(pop)
#ifdef _WIN32
#include "windows.h"
#define symLoad GetProcAddress
#define EXPORTS __declspec(dllexport)
#else
#include "dlfcn.h"
#include <unistd.h>
#define symLoad dlsym
#define EXPORTS
typedef unsigned long long ULONG64;
typedef unsigned char       BYTE;
typedef unsigned char       byte;
typedef const char* LPCSTR;
#endif

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

        class EXPORTS ReferenceCounter
        {
        public:
            friend void intrusive_ptr_add_ref(ReferenceCounter* p)
            {
                ++p->ref_count;
            }

            friend void intrusive_ptr_release(ReferenceCounter* p)
            {
                if (--p->ref_count == 0)
                {
                    delete p;
                }
            }

            ReferenceCounter() :ref_count(0)
            {
            }

            ReferenceCounter(const ReferenceCounter&)
            {
            }

            ReferenceCounter& operator=(const ReferenceCounter&)
            {
                return *this;
            }

            virtual ~ReferenceCounter()
            {
            };

            virtual void add_ref() 
            {
                ++ref_count;
            }

            virtual int release_ref() 
            {
                return --ref_count;
            }

            virtual int RefCount()
            {
                return ref_count;
            }

        private:
            int ref_count;
        };
	}
}
#endif
