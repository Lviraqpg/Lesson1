#include <iostream>
#include <cmath>

//Напишите программу, которая выводит
// квадраты нечетных целых чисел от
// 1 до предела который вводит пользователь.

int main() {
    int a;
    std::cout<<"Please, input number:"<<std::endl;
    std::cin>>a;
    for(int i=0; i<=a; i++){
        if (i%2==1){
            //std::cout<<i<<std::endl;
            std::cout<<sqrt(i)<<std::endl;
        }
    }
    return 0;
}
