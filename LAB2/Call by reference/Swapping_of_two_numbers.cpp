#include<iostream>

using namespace std;
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 10, b = 20; 
    cout<<"Before Swapping: a - "<<a<<" and b - "<<b;
    swap(&a,&b);
    cout<<"\nAfter Swapping: a - "<<a<<" and b - "<<b;

}
