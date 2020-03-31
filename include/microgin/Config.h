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
#define RESTPP_EXPORT         __declspec(dllexport)
#define RESTPP_IMPORT         __declspec(dllimport)
#define RESTPP_INLINE         __forceinline
#define RESTPP_DEPRECATED     __declspec(deprecated)
#define RESTPP_ALIGNED(x)     __declspec(align(x))
#define RESTPP_UNUSED(x)      x
#endif

#endif //MICROGIN_CONFIG_H

#ifdef RESTPP_STATIC_LIB
#define RESTPP_API
#else
#ifdef RESTPP_DLL_EXPORTS
#define RESTPP_API RESTPP_EXPORT
#else
#define RESTPP_API RESTPP_IMPORT
#endif // RESTPP_DLL_EXPORTS
#endif // RESTPP_STATIC_LIB