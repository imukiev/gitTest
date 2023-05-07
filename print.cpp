#include <iostream>
#include "inout.h"

void print(const std::vector<int> &vec){
    for(auto &elem : vec){
        std::cout << elem << std::endl;
    }
}