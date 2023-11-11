#ifndef DEF_H
#define DEF_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef signed char i8;
typedef signed short i16;
typedef signed int i32;
typedef signed long long i64;

typedef float f32;
typedef double f64;

typedef unsigned char b8;

#define U8_MAX ((u8) -1)
#define U16_MAX ((u16) -1)
#define U32_MAX ((u32) -1)
#define U64_MAX ((u64) -1)

#define NX_TRUE 1
#define NX_FALSE 0
#define NX_NULL ((void*)0)

#ifdef NXEXPORT
#ifdef _MSC_VER
#define NXAPI __declspec(dllexport)
#else
#define NXAPI __attribute__((visibility("default")))
#endif
#else
#ifdef _MSC_VER
#define NXAPI __declspec(dllimport)
#else
#define NXAPI
#endif
#endif

#endif