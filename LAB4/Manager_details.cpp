#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Manager{
public:
    int age;
    string Name;
    string branch;
    Manager(int a,string b, string c){
        age = a;
        Name = b;
        branch = c;
    }
    void display(){
        cout<<"Name - "<<Name<<"\nBranch - "<<branch<<"\nAge - "<<age<<endl;
    }
};

int main(){
    vector<Manager>m;
    int n,i;
    string a,b;
    int c;
    cout<<"No. of details you want to add: ";
    cin>>n;
    for(i = 0 ; i < n ; i++){
        cout<<"Enter "<<i + 1<<" person Name: ";
        cin>>a;
        cout<<"Enter "<<i + 1<<" person Age: ";
        cin>>c;
        cout<<"Enter "<<i + 1<<" person Branch: ";
        cin>>b;
        m.emplace_back(c,a,b);
    }
    for(auto &k : m){
        k.display();
    }
    
}
