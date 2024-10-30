#pragma once

#include <utility>
#include <cstddef>

template<typename KeyType, typename ValueType, typename Hash>
class HashMap {
  private:
    static constexpr Hash Hasher = Hash();
    
    size_t capacity{};
    
  public:
    HashMap();
    
    HashMap(const std::initializer_list<std::pair<KeyType, ValueType>> &initializerList);
};

#include "../src/HashMap.tpp"
