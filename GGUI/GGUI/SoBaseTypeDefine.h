//-----------------------------------------------------------------------------
// 对变量的基本类型做重新定义。
// (C) oil
// 2012-09-08
//-----------------------------------------------------------------------------
#ifndef _SoBaseTypeDefine_h_
#define _SoBaseTypeDefine_h_
//-----------------------------------------------------------------------------
#include <string>
//-----------------------------------------------------------------------------
namespace GGUI
{
	typedef __int8  SoInt8;
	typedef __int16 SoInt16;
	typedef __int32 SoInt32;
	typedef __int64 SoInt64;
	typedef __int32 SoInt;
	//
	typedef unsigned __int8  SoUInt8;
	typedef unsigned __int16 SoUInt16;
	typedef unsigned __int32 SoUInt32;
	typedef unsigned __int64 SoUInt64;
	typedef unsigned __int32 SoUInt;
	//
	typedef float SoFloat; //32位的浮点数，精确到6位有效数字。
	typedef double SoDouble; //64位的浮点数，精确到16位有效数字。
	//
	//四个字节的bool类型。便于字节对齐。
	//SoBool有三种取值，SoTrue，SoFalse，SoNone。
	//SoNone表示尚未赋值，尚未作出判断，没有有效值。
	//如果一个SoBool类型的变量只有SoTrue和SoFalse两种状态，则可以使用if(SoBool类型)来做分支判断；
	//如果一个SoBool类型的变量有三种状态的话，则必须使用if(SoBool类型==SoTrue)来做分支判断。
	typedef __int32 SoBool;
	#define SoTrue 1
	#define SoFalse 0
	#define SoNone -1

	//指针的无效值。
	#define SoNULL 0

	//-----------------------------------------------------------------------------
#if defined(_UNICODE) || defined(UNICODE)
	typedef wchar_t tchar;
	typedef std::wstring tstring;
#else
	typedef char tchar;
	typedef std::string tstring;
#endif

	//-----------------------------------------------------------------------------
	//安全的删除一个对象。
	#define SAFE_DELETE(p);  { if(p) { delete (p); (p)=0; } }
	//安全的删除一个对象数组。
	#define SAFE_DELETE_ARRAY(p);  { if(p) { delete [] (p); (p)=0; } }

} //namespace GGUI
//-----------------------------------------------------------------------------
#endif //_SoBaseTypeDefine_h_
//-----------------------------------------------------------------------------
