#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Object {
private:
    static int count;
    static vector<string> Names_list;
    string name;

public:
    Object(string n) : name(n) {
        count++;
        Names_list.push_back(name);
    }

    ~Object() {
        if (count > 0) count--;

        auto it = find(Names_list.begin(), Names_list.end(), name);
        if (it != Names_list.end()) {
            Names_list.erase(it);
        }

        cout << "Object deleted: " << name << "\n";
    }

    static void show_count() {
        cout << "No. of objects - " << count << "\n";
    }

    static void display() {
        cout << "Names in list: ";
        for (const string &n : Names_list) {
            cout << n << " ";
        }
        cout << "\n";
    }
};

int Object::count = 0;
vector<string> Object::Names_list;

int main() {
    vector<Object> objects; 
    string k;
    int n;

    while (true) {
        cout << "\nWhat do you choose?\n"
             << "1. Create an object\n"
             << "2. Delete last object\n"
             << "3. Show count\n"
             << "4. Display\n"
             << "5. Exit\n";
        cin >> n;

        switch (n) {
            case 1:
                cout << "Enter name of object: ";
                cin >> k;
                objects.emplace_back(k); 
                break;

            case 2:
                if (!objects.empty()) {
                    objects.pop_back(); 
                } else {
                    cout << "No objects to delete!\n";
                }
                break;

            case 3:
                Object::show_count();
                break;

            case 4:
                Object::display();
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
}
