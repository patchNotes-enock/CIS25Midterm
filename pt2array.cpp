#include <iostream>
using namespace std;

int tenNumbers[10];

int main() {
    int tenNumbers[10];
    int i = 0;
    while (i < 10) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> tenNumbers[i];
        i++;
    }
    for (int q; q < 10; q++) {
        cout << "Number " << q + 1 << " is " << tenNumbers[q] << "\n";
    }
    return 0;
}

 //   while(int i = 0; i < 10; i++){
 //      cout << "Enter number " << i + 1 << ": ";
        
