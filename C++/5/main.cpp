#include <iostream>

using namespace std;
// 함수 오버로딩


void print(int x)  {cout<<"int   : "<<x<<endl;}
void print(char x) {cout<<"chat  : "<<x<<endl;}
void print(double x) {cout<<"double: "<<x<<endl;}

int main(){
    int a = 1;
    char b = 'c';
    double c = 3.2f;

    print(a);
    print(b);
    print(c);
    
    return 0;
}