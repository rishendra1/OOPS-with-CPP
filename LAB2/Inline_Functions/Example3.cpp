#include<iostream>
#include<cmath>
using namespace std;

inline int square_root(int n){
    return sqrt(n);
}
int main(){
    int a = 100;
    cout<<"Square root of "<<a<<" is: "<<square_root(a);
}
