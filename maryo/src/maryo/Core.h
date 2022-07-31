#pragma once

#ifdef MO_PLATFORM_WINDOWS
	#ifdef MO_BUILD_DLL
		#define MARYO_API __declspec(dllexport)
	#else
		#define MARYO_API __declspec(dllimport)
	#endif
#else
	#error maryo only supports Windows!
#endif
