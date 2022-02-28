#include <iostream>

using namespace std;

int change_val(int &p) {
    p = 3;
    return 0;
}


int main(){
    int number = 5;
    int num;

    while (true){
        cin >> num;
        if (num != 3){
            break;
        }else{
        cout << num << "해당 숫자는 존재 합니다" << endl;
        cin.clear();
        }
    }
    cout << number << endl;
    change_val(num);
    cout << number << endl;
}