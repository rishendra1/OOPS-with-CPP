#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Item{
public:
    int code_no;
    int price;
    Item(int c , int p){
        code_no = c;
        price = p;
    }
};
class Shop{
private:
    vector<Item>items;
public:
    void add_item(int code, int price){
        items.push_back(Item(code,price));
        cout<<"Item Pushed successfully.\n";
    }    
    void delete_item(int code){
        int found = 0;
        for(auto it = items.begin() ; it != items.end() ; ++it){
            if(it->code_no == code){
                items.erase(it);
                found = 1;
                break;
            }
        }
        if(found == 1)cout<<"Item - "<<code<<" deleted successfully.\n";
        else cout<<"Item not found.\n";
    }
    void total(){
        int total = 0;
        for(auto &i : items){
            total += i.price;
        }
        cout<<"Total : "<<total<<"\n";
    }
    void display(){
        for(auto &i : items){
            cout<<i.code_no << " - "<<i.price<<"\n";
        }
    }
    
};
int main(){
    Shop shop;
    int c,p,f;
    while (true) {
        cout<<"\nWhat do you choose?\n1. Create an item\n2. Delete item\n3. show total\n4. Display\n5. Exit\n";
        cin>>f;
        switch (f) {
            case 1:
                cout<<"Enter code of object: ";
                cin>>c;
                cout<<"Enter price of object: ";
                cin>>p;
                shop.add_item(c,p);
                break;
            case 2:
                cout<<"Enter code of object: ";
                cin>>c;
                shop.delete_item(c);
                break;
            case 3:
                shop.total();
                break;
            case 4:
                shop.display();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
    
}
