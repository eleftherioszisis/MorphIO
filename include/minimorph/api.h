// generated by CommonLibrary.cmake, do not edit.

/**
 * @file include/api.h
 * Defines export visibility macros for library Brain.
 */

#pragma once

#if defined(_MSC_VER) || defined(__declspec)
#define BRAIN_DLLEXPORT __declspec(dllexport)
#define BRAIN_DLLIMPORT __declspec(dllimport)
#else // _MSC_VER
#define BRAIN_DLLEXPORT
#define BRAIN_DLLIMPORT
#endif // _MSC_VER

#if defined(BRAIN_STATIC)
#define BRAIN_API
#elif defined(BRAIN_SHARED)
#define BRAIN_API BRAIN_DLLEXPORT
#else
#define BRAIN_API BRAIN_DLLIMPORT
#endif

#if defined(BRAIN_SHARED_INL)
#define BRAIN_INL BRAIN_DLLEXPORT
#else
#define BRAIN_INL BRAIN_DLLIMPORT
#endif