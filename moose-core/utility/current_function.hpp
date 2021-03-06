#ifndef SIMPLE_CURRENT_FUNCTION_HPP_INCLUDED
#define SIMPLE_CURRENT_FUNCTION_HPP_INCLUDED

// MS compatible compilers support #pragma once

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

//
//  Modified boost/current_function.hpp
//
//  SIMPLE_CURRENT_FUNCTION
//
//  Copyright (c) 2002 Peter Dimov and Multi Media Ltd.
//  Copyright (c) 2013 Dilawar Singh
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
//  http://www.boost.org/libs/utility/current_function.html
//
// LOG: Orginal from boost libraries.
// Modified by Dilawar Singh. It's part of moose now.

namespace moose
{

namespace detail
{

inline void current_function_helper()
{

#if defined(__GNUC__) || (defined(__MWERKS__) && (__MWERKS__ >= 0x3000)) || (defined(__ICC) && (__ICC >= 600)) || defined(__ghs__)

# define SIMPLE_CURRENT_FUNCTION __PRETTY_FUNCTION__

#elif defined(__DMC__) && (__DMC__ >= 0x810)

# define SIMPLE_CURRENT_FUNCTION __PRETTY_FUNCTION__

#elif defined(__FUNCSIG__)

# define SIMPLE_CURRENT_FUNCTION __FUNCSIG__

#elif (defined(__INTEL_COMPILER) && (__INTEL_COMPILER >= 600)) || (defined(__IBMCPP__) && (__IBMCPP__ >= 500))

# define SIMPLE_CURRENT_FUNCTION __FUNCTION__

#elif defined(__BORLANDC__) && (__BORLANDC__ >= 0x550)

# define SIMPLE_CURRENT_FUNCTION __FUNC__

#elif defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901)

# define SIMPLE_CURRENT_FUNCTION __func__

#else

# define SIMPLE_CURRENT_FUNCTION "(unknown)"

#endif

}

} // namespace detail

} // namespace moose

#endif // #ifndef SIMPLE_CURRENT_FUNCTION_HPP_INCLUDED

