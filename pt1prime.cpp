#include <iostream>
using namespace std;

void isPrime() {
    int entry;
    cout << "Is My Number Prime?\n" "\n" "Enter an integer: ";
    cin >> entry;
    bool primeNumber = true;
    for (int i = 2; i < entry; i++) {
        if (entry % i == 0) {
            primeNumber = false;
            break;
        }
    }
    if(primeNumber) {
        cout << "Your Number is Prime!";
    } else {
        cout << "Womp Womp...Your Number is NOT Prime =(";
    }
}

int main() {

    isPrime();

    return 0;
}