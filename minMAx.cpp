#include <iostream>
#include <cmath>

int  minNumber (int n1,int n2,int n3, int n4);
int  maxNumber (int n1,int n2,int n3, int n4);
int minArr (int arr[10]);
int maxArr (int arr[10]);

int main() {
    int result_1 = minNumber(7,5,3,1);
    std::cout<<result_1<<std::endl;
    int result_2 = maxNumber(7,5,3,1);
    std::cout<<result_2<<std::endl;
    int arr[10]={5,6,7,3,4,50,2,876,30,98};
    int result_3=minArr(arr);
    std::cout<<result_3<<std::endl;
    int result_4=maxArr(arr);
    std::cout<<result_4<<std::endl;
    return 0;
}

int  minNumber (int n1,int n2,int n3,int n4){
    int min = n1;
    if(min>n2){
        min=n2;
    }
    if (min>n3){
        min=n3;
    }
    if (min>n4){
        min=n4;
    }
    return min;
}

int  maxNumber (int n1,int n2,int n3, int n4) {
    int max = n1;
    if(max<n2){
        max=n2;
    }
    if (max<n3){
        max=n3;
    }
    if (max<n4){
        max=n4;
    }
        return max;
    }

int minArr(int arr[10]){
    int min= arr[0];
    for (int i=min; i<10; i++){
        if (i<=min){
            min=arr[i];
        }
    }
        return min;
}

int maxArr(int arr[10]){
    int max= arr[0];
    for (int i=max+1; i<10; i++){  ///почему когда for(i=arr[0] или arr=max...) max= 50?
        if (i>=max){
            max=arr[i];
        }
    }
    return max;
}


