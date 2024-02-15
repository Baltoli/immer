//
// immer: immutable data structures for C++
// Copyright (C) 2016, 2017, 2018 Juan Pedro Bolivar Puente
//
// This software is distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://boost.org/LICENSE_1_0.txt
//

#include <immer/map.hpp>
#include <immer/map_transient.hpp>

template <typename K,
          typename T,
          typename Hash = std::hash<K>,
          typename Eq   = std::equal_to<K>>
using test_map_t = immer::map<K, T, Hash, Eq, immer::default_memory_policy, 6u>;

template <typename K,
          typename T,
          typename Hash = std::hash<K>,
          typename Eq   = std::equal_to<K>>
using test_map_transient_t =
    immer::map_transient<K, T, Hash, Eq, immer::default_memory_policy, 6u>;

#define MAP_T test_map_t
#define MAP_TRANSIENT_T test_map_transient_t

#include "generic.ipp"
