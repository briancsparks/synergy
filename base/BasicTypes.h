#ifndef BASICTYPES_H
#define BASICTYPES_H

#include "common.h"

//
// pick types of particular sizes
//

#if !defined(TYPE_OF_SIZE_1)
#	if SIZEOF_CHAR == 1
#		define TYPE_OF_SIZE_1 char
#	endif
#endif

#if !defined(TYPE_OF_SIZE_2)
#	if SIZEOF_INT == 2
#		define TYPE_OF_SIZE_2 int
#	else
#		define TYPE_OF_SIZE_2 short
#	endif
#endif

#if !defined(TYPE_OF_SIZE_4)
#	if SIZEOF_INT == 4
#		define TYPE_OF_SIZE_4 int
#	else
#		define TYPE_OF_SIZE_4 long
#	endif
#endif

//
// verify existence of required types
//

#if !defined(TYPE_OF_SIZE_1)
#	error No 1 byte integer type
#endif
#if !defined(TYPE_OF_SIZE_2)
#	error No 2 byte integer type
#endif
#if !defined(TYPE_OF_SIZE_4)
#	error No 4 byte integer type
#endif


//
// make typedefs
//
// except for SInt8 and UInt8 these types are only guaranteed to be
// at least as big as indicated (in bits).  that is, they may be
// larger than indicated.
//

typedef signed TYPE_OF_SIZE_1	SInt8;
typedef signed TYPE_OF_SIZE_2	SInt16;
typedef signed TYPE_OF_SIZE_4	SInt32;

typedef unsigned TYPE_OF_SIZE_1	UInt8;
typedef unsigned TYPE_OF_SIZE_2	UInt16;
typedef unsigned TYPE_OF_SIZE_4	UInt32;

//
// clean up
//

#undef TYPE_OF_SIZE_1
#undef TYPE_OF_SIZE_2
#undef TYPE_OF_SIZE_4

#endif


