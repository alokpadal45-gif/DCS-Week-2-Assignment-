#include <iostream>
using namespace std;

void display(const string &msg) {
    cout << msg << endl;
}

int main() {
    string message = "C++ functions are fun!";
    display(message); 
    return 0;
}
