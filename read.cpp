#include <iostream>
#include "inout.h"

using namespace std;

void read(std::vector<int> &vec){
    int n;
    std::cout << "Введите размер вектора: ";
    std::cin >> n;
    for(int i = 0; i<n; i++){
        cout << "Введите " << i << " элемент :";
        int a;
        std::cin >> a;
        vec.push_back(a);
    }
}