#include<iostream>

using namespace std;

int main(){
    int i,n,m,count=0;
    cout<<"Enter small number: ";
    cin>>n;
    cout<<"Enter big number: ";
    cin>>m;
    if(n <= 1){
        n = 2;
    }
     while(n <= m){
        count = 0;
        for(i = 2 ; i < n/2 ; i++){
            if(n % i == 0){
                count += 1;
            }
        }
        if (count == 0){
            cout<<n<<" ";
        }
        n++;
    }
}
