#include <iostream>

using namespace std;

int main(){
    int *num;
    int* ptr  = &*num;
    int** dptr = &ptr;
    cout << ptr << endl;
    cout << dptr << endl;


    return 0;
};

int main_1(){
    int arr[3] = {1, 2, 3};

    int& ref1 = arr[0];
    int& ref2 = arr[1];
    int& ref3 = arr[2];

    int* ptr1 = &arr[0];
    int* ptr2 = &arr[1];
    int* ptr3 = &arr[2];

    cout << ref1 << endl;
    cout << ref2 << endl;
    cout << ref3 << endl;

    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr3 << endl;

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    cout << *ptr3 << endl;

    return 0;
}