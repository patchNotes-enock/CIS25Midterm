#include <iostream>
using namespace std;


int main(){
    float val1, val2;
    char operate;
    cout << "COOL CALCULATOR, MY GUY\n\n";
    cin >> val1 >> operate >> val2;

    switch(operate) {
        case '+': cout << val1 << " " << operate << " " << val2 << " = " << val1 + val2; break;
        case '-': cout << val1 << " " << operate << " " << val2 << " = " << val1 - val2; break;
        case '*': cout << val1 << " " << operate << " " << val2 << " = " << val1 * val2; break;
        case '/': cout << val1 << " " << operate << " " << val2 << " = " << val1 / val2; break;
    }
    return 0;
}