// Copyright (C) 2004 Arkadiy Vertleyb
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_TYPEOF_REGISTER_INTEGRAL_HPP_INCLUDED
#define BOOST_TYPEOF_REGISTER_INTEGRAL_HPP_INCLUDED

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/seq.hpp>
#include <boost/preprocessor/repetition/enum_trailing.hpp>

// The template parameter description, entered by the user,
// is converted into a polymorphic "object" 
// that is used to generate the code responsible for
// encoding/decoding the parameter, etc.
// See also compliant/template_encoding.hpp and 
// vintage/template_encoding.hpp.

#define BOOST_TYPEOF_MAKE_OBJ(elem) BOOST_PP_SEQ_CAT(\
    (BOOST_TYPEOF_MAKE_OBJ_) BOOST_TYPEOF_TO_SEQ(elem))

#define BOOST_TYPEOF_TO_SEQ(tokens) BOOST_TYPEOF_ ## tokens ## _BOOST_TYPEOF 

#define BOOST_TYPEOF_unsigned (unsigned)
#define BOOST_TYPEOF_signed (signed)

#define char_BOOST_TYPEOF (char)
#define short_BOOST_TYPEOF (short)
#define int_BOOST_TYPEOF (int)
#define long_BOOST_TYPEOF (long)

#define BOOST_TYPEOF_char_BOOST_TYPEOF (char)
#define BOOST_TYPEOF_short_BOOST_TYPEOF (short)
#define BOOST_TYPEOF_int_BOOST_TYPEOF (int)
#define BOOST_TYPEOF_long_BOOST_TYPEOF (long)
#define BOOST_TYPEOF_bool_BOOST_TYPEOF (bool)
#define BOOST_TYPEOF_class_BOOST_TYPEOF (class)
#define BOOST_TYPEOF_typename_BOOST_TYPEOF (typename)
#define BOOST_TYPEOF_unsigned_BOOST_TYPEOF (unsigned)
#define BOOST_TYPEOF_size_t_BOOST_TYPEOF (size_t)

#define BOOST_TYPEOF_MAKE_OBJ_class         BOOST_TYPEOF_TYPE_PARAM
#define BOOST_TYPEOF_MAKE_OBJ_typename      BOOST_TYPEOF_TYPE_PARAM
#define BOOST_TYPEOF_MAKE_OBJ_char          BOOST_TYPEOF_INTEGRAL_PARAM(char)
#define BOOST_TYPEOF_MAKE_OBJ_short         BOOST_TYPEOF_INTEGRAL_PARAM(short)
#define BOOST_TYPEOF_MAKE_OBJ_int           BOOST_TYPEOF_INTEGRAL_PARAM(int)
#define BOOST_TYPEOF_MAKE_OBJ_long          BOOST_TYPEOF_INTEGRAL_PARAM(long)
#define BOOST_TYPEOF_MAKE_OBJ_bool          BOOST_TYPEOF_INTEGRAL_PARAM(bool)
#define BOOST_TYPEOF_MAKE_OBJ_unsigned      BOOST_TYPEOF_INTEGRAL_PARAM(unsigned)
#define BOOST_TYPEOF_MAKE_OBJ_size_t        BOOST_TYPEOF_INTEGRAL_PARAM(size_t)
#define BOOST_TYPEOF_MAKE_OBJ_unsignedchar  BOOST_TYPEOF_INTEGRAL_PARAM(unsigned char)
#define BOOST_TYPEOF_MAKE_OBJ_unsignedshort BOOST_TYPEOF_INTEGRAL_PARAM(unsigned short)
#define BOOST_TYPEOF_MAKE_OBJ_unsignedint   BOOST_TYPEOF_INTEGRAL_PARAM(unsigned int)
#define BOOST_TYPEOF_MAKE_OBJ_unsignedlong  BOOST_TYPEOF_INTEGRAL_PARAM(unsigned long)
#define BOOST_TYPEOF_MAKE_OBJ_signedchar    BOOST_TYPEOF_INTEGRAL_PARAM(signed char)
#define BOOST_TYPEOF_MAKE_OBJ_signedshort   BOOST_TYPEOF_INTEGRAL_PARAM(signed short)
#define BOOST_TYPEOF_MAKE_OBJ_signedint     BOOST_TYPEOF_INTEGRAL_PARAM(signed int)
#define BOOST_TYPEOF_MAKE_OBJ_signedlong    BOOST_TYPEOF_INTEGRAL_PARAM(signed long)
#define BOOST_TYPEOF_MAKE_OBJ_integral(x)   BOOST_TYPEOF_INTEGRAL_PARAM(x)

#define BOOST_TYPEOF_INTEGRAL(X) integral(X) BOOST_TYPEOF_EAT
#define BOOST_TYPEOF_EAT_BOOST_TYPEOF
#define BOOST_TYPEOF_integral(X) (integral(X))

// "interface"

#define BOOST_TYPEOF_PARAM_ENCODE(Param)\
    BOOST_PP_CAT(BOOST_TYPEOF_ENCODE_, BOOST_PP_SEQ_ELEM(0, Param))

#define BOOST_TYPEOF_PARAM_DECODE(Param)\
    BOOST_PP_CAT(BOOST_TYPEOF_DECODE_, BOOST_PP_SEQ_ELEM(0, Param))

#define BOOST_TYPEOF_PARAM_GETTYPE(Param)\
    BOOST_PP_SEQ_ELEM(1, Param)

// "constructors"

#define BOOST_TYPEOF_TYPE_PARAM\
    (TYPE_PARAM)\
    (class)

#define BOOST_TYPEOF_INTEGRAL_PARAM(Type)\
    (INTEGRAL_PARAM)\
    (Type)

#endif//BOOST_TYPEOF_COMPLIANT_TEMPLATE_ENCODING_HPP_INCLUDED
