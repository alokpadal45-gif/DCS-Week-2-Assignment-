#include <iostream>
using namespace std;

int globalVar = 5; 

void demo() {
    int localVar = 10;        
    static int staticVar = 15; 
    
    localVar++;
    staticVar++;
    globalVar++;
    
    cout << "Local: " << localVar << ", Static: " << staticVar << ", Global: " << globalVar << endl;
}

int main() {
    demo(); 
    demo(); 
    return 0;
}
