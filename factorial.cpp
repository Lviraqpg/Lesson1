#include <iostream>
#include <cmath>

int  factorial (int num);
int factorialForArr(int arr[5], int copy[5]);
void print (int arr[5]);
int main() {
    int num = 6;
    int arr[5] = {4, 5, 6, 7, 8};
    int copy[5];
    factorialForArr(arr,copy);
    print(copy);
    return 0;
}

int factorial (int num){
     int result = 1;
     for (int i=result; i<=num; i++){
         result=result*i;  // mo]no zapisat- kak *=
     }
    return result;
}
int factorialForArr(int arr[5], int copy[5]) {
    for (int i = 0; i < 5; i++) {
        int result = factorial(arr[i]);
        copy[i]=result;
        std::cout<<result;
    }

return 0;
}

void print(int arr[5]){
    for(int i=0; i<5;i++) {
        std::cout << arr[i] << std::endl;
    }
    }

