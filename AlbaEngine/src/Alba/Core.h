#pragma once

#ifdef AB_PLATFORM_WINDOWS
	#ifdef AB_BUILD_DLL
		#define ALBA_API __declspec(dllexport)
	#else
		#define ALBA_API __declspec(dllimport)
	#endif
#else
	#error Alba only supports Windows!
#endif

