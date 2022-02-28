#include <iostream>
#include <limits>
using namespace std;

int test1(){
    int arr[3] = {1, 2, 3};
    cout << &arr << endl;
    int(&ref)[3] = arr;
    cout << &ref << endl;
    
    ref[0] = 2;
    ref[1] = 3;
    ref[2] = 1;
    
    cout << arr[0] << arr[1] << arr[2] << endl;
    
    return 0;
}

int test2(){
    int* p = new int;
    *p = 10;
    
    cout << *p << endl;
    cout << p << endl;
    cout << &p << endl;

    int a = 10;
    int &t = a;
    cout << &a << endl;
    cout << &t << endl;
    delete p;
    return 0;
}

int test3(){
    int arr_size;
    cout << "arr_size : ";
    cin >> arr_size;
    int *list = new int[arr_size];
    for (int i = 0; i < arr_size; i++){
        cin >> list[i];
    }
    for (int i = 0; i < arr_size; i++){
        cout << i << "the element of list : " << list[i] << endl;
    }
    // 위에서 new []를 이용해서 할당 하였으면 아래에서는 delete[]를 통해서 해제하면 됩니다.
    // 즉 new , delete가 짝을 이루고 new [] 와 delete []가 짝을 이룹니다
    delete[] list;
    return 0;
}

typedef struct Animal {
    char name[30];
    int age;
    
    int health;
    int food;
    int clean;
} Animal;

void create_animal(Animal *animal) {
    cout << "동물의 이름?:" << endl;
    cin >> animal-> name;
    
    cout << "동믈의 나이?:" << endl;
    cin >> animal-> age;

    animal -> health = 100;
    animal -> food = 100;
    animal -> clean = 100;
}

void play(Animal *animal) {
    animal -> health -= 10;
    animal -> food -= 30;
    animal -> clean -= 20;
}

void one_day_pass(Animal *animal){
    animal -> health -= 10;
    animal -> food -= 30;
    animal -> clean -= 20;   
}

void show_stat(Animal *animal) {
    cout << animal -> name << "의 상태" << endl;
    cout << "체력: " << animal -> health << endl;
    cout << "배부름:" << animal -> food << endl;
    cout << "청결:" << animal -> clean << endl;
}

int test3_my_pet(){
    Animal *list[10];
    int animal_num = 0;

    while (true) {
        cout << "1.동물 추가하기" << endl;
        cout << "2.놀기" << endl;
        cout << "3.상태 보가" << endl;

        int input;
        bool error = true;
        std::cin >> input;
        switch (input) {
            int paly_with;
            case 1:
                list[animal_num] = new Animal;
                create_animal(list[animal_num]);
                animal_num++;
                break;
            case 2:
                cout << "누구랑 놀게?:" << endl;
                cin >> paly_with;

                if (paly_with < animal_num) play(list[paly_with]);

                break;
            
            case 3:
                cout << "누구껄 보게?:" << endl;
                cin >> paly_with;
                
                if (paly_with< animal_num) show_stat(list[paly_with]);
                
                break;
            default:{
                error = false;
                break;
            }
        } 
        if (error){
            for (int i = 0; i != animal_num; i++){
                one_day_pass(list[i]);
            };
        };
        cin.clear();
        //cin.ignore();
    };
    for (int i = 0; i != animal_num; i++){
        delete list[i];
    };
};



int main() {
    //test1();
    //test2();
    //test3();
    test3_my_pet();
};