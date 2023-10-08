#include <iostream>
#include <cassert>
#include "cache.hpp"


long long int cache_func(long long int *test_case, int l) {
    long long int size_of_cache;
    long long int value, count = 0;
    cache_t Cache_table;
    size_of_cache = test_case[0];
    Cache_table.size_of_cache = size_of_cache;
    for (int i = 2; i < l; i++) {
        value = test_case[i];
        count += Cache_table.find_value(value);
    }
    return count;
}


int main(void){
    long long int test_case_1[7] = {2, 5, 1, 2, 3, 2, 1};
    long long int test_case_2[8] = {3, 6, 1, 1, 1, 1, 1, 1};
    long long int test_case_3[7] = {2, 5, 1, 3, 2, 4, 2};
    long long int test_case_4[8] = {4, 6, 1, 3, 4, 5, 3, 5};
    long long int test_case_5[10] = {5, 8, 1, 2, 3, 4, 5, 5, 3, 1};

    assert(cache_func(test_case_1, 7) == 1);
    assert(cache_func(test_case_2, 8) == 5);
    assert(cache_func(test_case_3, 7) == 1);
    assert(cache_func(test_case_4, 8) == 2);
    assert(cache_func(test_case_5, 10) == 3);

    std::cout << "All tests passed" << std::endl;

    return 0;    
}

