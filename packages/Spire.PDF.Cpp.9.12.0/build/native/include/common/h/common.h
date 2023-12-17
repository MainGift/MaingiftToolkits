#pragma once

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头


//#ifdef _WIN32
//#include "windows.h"
//#define symLoad GetProcAddress
//#define EXPORTS __declspec(dllexport)
//#else
//#include "dlfcn.h"
//#include <unistd.h>
//#define symLoad dlsym
//#define EXPORTS
//#endif

#include <vector>
#endif //PCH_H

#ifdef GetNumberFormat//WinNIs.h
#undef GetNumberFormat
#endif
#ifdef CreateFont//wingdi.h
#undef CreateFont
#endif
#ifdef GetForm
#undef GetForm
#endif
#ifdef FindText
#undef FindText
#endif
#ifdef ReplaceText
#undef ReplaceText
#endif
#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容

#include "Object.h"

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
		enum class EmfType;
		enum class FontStyle;
		enum class GraphicsUnit;
		enum class RegexOptions;
		class Object;
		class CultureInfo;
		class Color;
		class Font;
		class Bitmap;
		class Stream;
		class Encoding;
		class Image;
		class ImageFormat;
		class Point;
		class PointF;
		class Size;
		class SizeF;
		class Rectangle;
		class RectangleF;
		class DateTime;
#ifdef _WIN32
		HINSTANCE EXPORTS GetStaticHandle();
#ifdef _SPIRE_XLS
		HINSTANCE GetStaticHandleXls();
#elif defined(_SPIRE_DOC)
		HINSTANCE GetStaticHandleDoc();
#elif defined(_SPIRE_PDF)
		HINSTANCE GetStaticHandlePdf();
#elif defined(_SPIRE_PPT)
		HINSTANCE GetStaticHandlePpt();
#else
		HINSTANCE GetStaticHandleXls();
#endif
#else
		void* EXPORTS GetStaticHandle();
#ifdef _SPIRE_XLS
		void* GetStaticHandleXls();
#elif defined(_SPIRE_DOC)
		void* GetStaticHandleDoc();
#elif defined(_SPIRE_PDF)
		void* GetStaticHandlePdf();
#elif defined(_SPIRE_PPT)
		void* GetStaticHandlePpt();
#else
		void* GetStaticHandleXls();
#endif
#endif
		struct IntPtrArray
		{
			int size;
			char data[80];
		};
		struct IntPtrWithTypeName
		{
			byte intPtr[8];
			wchar_t* typeName;
		};

		template <typename T>
		T* GetArrayFromVector(std::vector<T> vect)
		{
			int count = (int)vect.size();
			T* arrs = new T[count];
			for (int i = 0; i < count; i++)
			{
				arrs[i] = vect[i];
			}
			return arrs;
		}

		template <typename T>
		int** GetObjIntPtrArrayFromVector(std::vector<intrusive_ptr<T>> vect)
		{
			int count = (int)vect.size();
			int** arrs = new int* [count];
			for (int i = 0; i < count; i++)
			{
				Object* obj = dynamic_cast<Object*>(vect[i].get());
				arrs[i] = obj->GetIntPtr();
			}
			return arrs;
		}
		ULONG64* GetIntPtrArray(IntPtrArray intPtrArr);
		char* GetByteArray(IntPtrArray intPtrArr);
		void WriteArryToStream(IntPtrArray intPtrArr, std::ostream& stream);
		void FreeHGlobal(void* ptr);
		void FreeAllAllocated();
		int* CreateStreamIntPtr(std::istream& stream);

		template <typename T>
		std::vector<T> GetVectorFromArray(IntPtrArray intPtrArr)
		{
			char* intPtr = GetByteArray(intPtrArr);
			T* arr = (T*)(intPtr);
			std::vector<T> vector = std::vector<T>();
			for (int i = 0; i < intPtrArr.size; i++)
			{
				vector.push_back(arr[i]);
			}
			return vector;
		}

		template <typename T>
		std::vector<intrusive_ptr<T>> GetObjVectorFromArray(IntPtrArray intPtrArr)
		{
			ULONG64* arr = GetIntPtrArray(intPtrArr);
			std::vector<intrusive_ptr<T>> objs = std::vector<intrusive_ptr<T>>();
			for (int i = 0; i < intPtrArr.size; i++)
			{
				int* pObj = (int*)(arr[i]);
				T* range = Object::Create<T>(pObj, NULL);
				objs.push_back(range);
			}
			return objs;
		}

		int* GetObjIntPtr(int* object, LPCWSTR_S subName, LPCWSTR_S paraValues);
		int GetIntValue(int* object, LPCWSTR_S valueName, LPCWSTR_S paraValues);
		double GetDoubleValue(int* object, LPCWSTR_S valueName, LPCWSTR_S paraValues);
		LPCWSTR_S GetStringValue(int* object, LPCWSTR_S valueName, LPCWSTR_S paraValues);
		bool GetBoolValue(int* object, LPCWSTR_S valueName, LPCWSTR_S paraValues);
		intrusive_ptr<DateTime> GetDateTimeValue(int* object, LPCWSTR_S valueName, LPCWSTR_S paraValues);
		void SetIntPtr(int* object, LPCWSTR_S valueName, int* value);
		void SetIntValue(int* object, LPCWSTR_S valueName, int value);
		void SetDoubleValue(int* object, LPCWSTR_S valueName, double value);
		void SetStringValue(int* object, LPCWSTR_S valueName, LPCWSTR_S value);
		void SetBoolValue(int* object, LPCWSTR_S valueName, bool value);
		void SetDateTimeValue(int* object, LPCWSTR_S valueName, tm value);
		void CallMethod(int* object, LPCWSTR_S methodName, LPCWSTR_S paraValues);
		void ReleasePtr(const char* ptr);

	}
}