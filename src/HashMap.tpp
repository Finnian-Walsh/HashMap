#pragma once

#include "../include/HashMap.hpp"

template<typename KeyType, typename ValueType, typename Hash>
HashMap<KeyType, ValueType, Hash>::HashMap() = default;

template<typename KeyType, typename ValueType, typename Hash>
HashMap<KeyType, ValueType, Hash>::HashMap(const std::initializer_list<std::pair<KeyType, ValueType>> &initializerList) {

}
