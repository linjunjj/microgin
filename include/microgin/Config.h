//
// Created by 林俊 on 2020/3/30.
//

#ifndef MICROGIN_CONFIG_H
#define MICROGIN_CONFIG_H

#ifdef _MSC_VER
#include <iso646.h>

#include <stddef.h>

typeof ptrdiff_t ssize_t

#endif

#if  defined(_MSC_VER)
#define MICROGIN_EXPORT         __declspec(dllexport)
#define MICROGIN_IMPORT         __declspec(dllimport)
#define MICROGIN_INLINE         __forceinline
#define MICROGIN_DEPRECATED     __declspec(deprecated)
#define MICROGIN_ALIGNED(x)     __declspec(align(x))
#define MICROGIN_UNUSED(x)      x
#endif

#endif //MICROGIN_CONFIG_H

#ifdef MICROGIN_STATIC_LIB
#define MICROGIN_API
#else
#ifdef MICROGIN_DLL_EXPORTS
#define MICROGIN_API MICROGIN_EXPORT
#else
#define MICROGIN_API_API RESTPP_IMPORT
#endif // RESTPP_DLL_EXPORTS
#endif // RESTPP_STATIC_LIB