#include <iostream>

using namespace std;

class Animal {
    private:
        int food;
        int weight;
        
    public:
        void set_animal(int _food, int _wight){
            food = _food;
            weight = _wight;
        }
        
        void increase_food(int inc){
            food += inc;
            weight += (inc / 3);
        }
        void view_stat() {
            cout << "이 동물 food :" << food << endl;
            cout << "이 동물의 weight :" << weight<< endl;
        }
};

int main(){
    Animal animal;
    animal.set_animal(100, 100);
    animal.increase_food(30);
    
    animal.view_stat();
    
    return 0;
};