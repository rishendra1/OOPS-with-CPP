#include<iostream>

using namespace std;

inline int addition(int a, int b){
    return a + b;
}
inline int subtraction(int a,int b){
    return a - b;
}
inline int multiplication(int a,int b){
    return a * b;
}
inline int division(int a,int b){
    return a/b;
}
int main(){
    int x = 10,y = 5;
    cout<<"Given x = "<<x<<" and y = "<<y;
    cout<<"\n1.Addition is : "<<addition(x,y);
    cout<<"\n1.Subtraction is : "<<subtraction(x,y);
    cout<<"\n1.Multiplication is : "<<multiplication(x,y);
    cout<<"\n1.Divison is : "<<division(x,y);
}
