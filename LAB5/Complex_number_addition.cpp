#include<iostream>

using namespace std;

class A{
private:
    float x;
    float y;
public:
    void set_val(float a,float b){
        x = a;
        y = b;
    }
    void display(){
       cout<<"Complex Number - "<<x<<" + i("<<y<<")\n"; 
    }
    friend void addition(A, A);
};

void addition(A a,A b){
    int s1 = a.x + b.x;
    int s2 = a.y + b.y;
    cout<<"Addition - "<<s1<<" + i("<<s2<<")\n";
}
int main(){
    int a,b;
    A a1, b1;
    b1.set_val(10,11);
    b1.display();
    a1.set_val(11,10);
    a1.display();
    addition(a1, b1);
}
