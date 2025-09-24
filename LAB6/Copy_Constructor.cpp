#include<iostream> 
using namespace std; 

class Rishi{ 
public:
    int A; 
    int B; 
    Rishi(int a,int b){ 
        A = a; 
        B = b; 
    } 
    Rishi(const Rishi& R){
        A = R.A; 
        B = R.B; 
        cout<<"Copy constructor called.\n"; 
    } 
}; 

int main(){ 
    Rishi R1(12,23); 
    Rishi R2 = R1;
    cout<<R2.A << " - " <<R2.B; 
    return 0;
}
