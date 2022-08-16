#include <iostream>

using namespace std;

class phone {
    public:
        float cost = 224.99;
        string colour = "blue";

};

int main() {
    phone samsung;

    cout << "The samsung costs " << samsung.cost << endl;
    cout << "The samsung's colour is " << samsung.colour << endl;
}