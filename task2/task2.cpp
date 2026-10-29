#include <iostream> 
using namespace std;
int main() {
    int arrA[5], arrB[5], arrC[10];
    cout << "Please enter array 1: ";
    for (int i = 0; i < 5; i++) {
        cin >> arrA[i];
    }

    cout << "Please enter array 2: ";
    for (int i = 0; i < 5; i++) {
        cin >> arrB[i];
    }

    for (int i = 0; i < 5; i++) {
        arrC[i] = arrA[i];
        arrC[i + 5] = arrB[i];
    }

    cout << "The value of arrC ";

    for (int i = 0; i < 10; i++) {
        cout << arrC[i] << ", ";
    }

    cout << endl;

    return 0;
}
