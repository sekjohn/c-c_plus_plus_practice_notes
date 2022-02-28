#include <iostream>

/*
포인터 쓰는 형식은 c 랑 똑같다
int arr[10];
int *parr = arr;

int i;
int *pi = &i;
*/
int test() {
    int i;
    char c;
    double d;
    float f;

    return 0;
}

int test2(){
    int i;
    bool result = true;

    for (i = 0; i <= 10; i++){
        std::cout << i << std::endl;
    }
    
    return result;
}

int test3() {
    int i, sum = 0;
    for (i=1; i <= 10; i++){
        sum +=i;
    }
    std::cout << sum <<std::endl;
    return 0;
}

int main() {
    //main1()
    bool a = test2();
    std::cout << a <<std::endl;
    test3();
    return 0;
}