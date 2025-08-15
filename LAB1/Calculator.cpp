#include<iostream>

using namespace std;
class Calculator
{   
public:
    double a;
    double b;
    char c;
    void calculator(){
        switch(c){
            case '+':
                cout<<a<<" + "<<b<<" = "<<a + b;
                break;
            case '-':
                cout<<a<<" - "<<b<<" = "<<a - b;  
                break;
            case '*':
                cout<<a<<" * "<<b<<" = "<<a * b; 
                break;     
            case '/':
                if (b == 0){
                    cout<<"Operation invalid";
                }
                else{
                    double div;
                    div = double(a/b);
                    cout<<a<<" / "<<b<<" = "<<div;  
                }    
                break;
            default:
                cout<<"Invalid Operation";   
                break; 
    }
}
};

int main(){
    Calculator c1;
    cout<<"Enter number 1: ";
    cin>>c1.a;
    cout<<"Enter number 2: ";
    cin>>c1.b;
    cout<<"Enter operand: ";
    cin>>c1.c;
    c1.calculator();
}

