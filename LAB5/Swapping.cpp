#include<iostream>

using namespace std;
class B;
class A{
private:
    int data;
public:
    void set_val(int a){
        data = a;
    }
    friend void swaping(A, B);
};
class B{
private:
    int value;
public:
    void set_val(int b){
        value = b;
    }
    friend void swaping(A, B);
};
void swaping(A a,B b){
    cout<<"Before Swapping --> a = "<<a.data<<" and b = "<<b.value<<"\n";
    int temp;
    temp = a.data;
    a.data = b.value;
    b.value = temp;
    cout<<"Before Swapping --> a = "<<a.data<<" and b = "<<b.value<<"\n";
}
int main(){
    int a,b;
    A a1;
    B b1;
    b1.set_val(10);
    a1.set_val(100);
    swaping(a1, b1);
}
