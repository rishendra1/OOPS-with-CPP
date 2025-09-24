#include<iostream>
using namespace std;

class RR {
public:
    int a;
    int b;
    RR(int p, int q) {
        a = p;
        b = q;
    }
    ~RR() {
        cout<<"Object deleted\n";
    }
};

int main() {
    RR* rishi = new RR(101, 102);
    cout<<rishi->a<<endl;
    delete rishi;
}
