#include<iostream>

using namespace std;

inline int sqr(int x){
    return x * x;
}
int main(){
    int a = 5;
    cout<<"Square is : "<<sqr(a);
}
