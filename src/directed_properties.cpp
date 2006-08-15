// Copyright 2005 The Trustees of Indiana University.

// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

//  Authors: Douglas Gregor
//           Andrew Lumsdaine

// This file instantiates everything for property maps on directed graphs.
// It is a separate translation unit from properties.cpp to avoid crashing
// Visual C++ 7.1.

#define DIRECTED_PROPERTIES_ONLY
#include "properties.cpp"
