#include <iostream>

using namespace std;

class student {
    public:
        char name[30], clas[10];
        int rol, age;

        void enter() {
            cout << "Enter studnet name: " << endl;
            cin.getline(name, 30);
            cout << "Enter studnet age: " << endl;
            cin >> age;
            cout << "Enter studnet roll number: " << endl;
            cin >> rol;
            cout << "Enter student class" << endl;
            cin.getline(clas, 10);
        }

        void display() {
            cout << "\nAge\tName\tRoll number\tClass";
            cout << "\n" << age << "\t" << name << "\t" << rol << "\t" << clas << endl;
        }
};


int main() {
    student andy;
    andy.enter();

    // student Maria;
    // Maria.enter();

    // student Stuart;
    // Stuart.enter();
}