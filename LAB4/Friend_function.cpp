#include <iostream>
using namespace std;

class B; 

class A {
    int num1;
public:
    void setData(int x) {
        num1 = x;
    }
    friend void findMax(A, B);
};

class B {
    int num2;
public:
    void setData(int y) {
        num2 = y;
    }
    friend void findMax(A, B);
};

void findMax(A a, B b) {
    cout << "Maximum = " << ((a.num1 > b.num2) ? a.num1 : b.num2) << endl;
}

int main() {
    A obj1;
    B obj2;

    obj1.setData(35);   
    obj2.setData(22);   

    findMax(obj1, obj2);

    return 0;
}
