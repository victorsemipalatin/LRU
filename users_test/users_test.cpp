#include <iostream>
#include <cassert>
#include "cache.hpp"


void cache_func(void) {
    long long int size_of_cache, N;
    long long int value, count = 0;
    cache_t Cache_table;
    cin >> size_of_cache >> N;
    Cache_table.size_of_cache = size_of_cache;
    for (int i = 0; i < N; i++) {
        cin >> value;
        count += Cache_table.find_value(value);
    }
    cout << count << endl;
}

int main(void){
    cache_func();
    return 0;
} 

