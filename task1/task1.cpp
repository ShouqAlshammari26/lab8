#include <iostream>
using namespace std;
int main() {
    int size; cout << "Enter Number Size: "; cin >> size;
    if (size <= 0) return 0;

    int* arr = new int[size];
    int sum = 0;

    cout << "Enter [" << size << "] numbers:" << endl;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 0; i < size; i++) {
        sum += arr[i];

        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "The number of values is " << size << ":" << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "The Sum is: " << sum << endl;
    cout << "The Average is: " << (double)sum / size << endl;
    cout << "The Largest is: " << largest << endl;
    cout << "The Smallest is: " << smallest << endl;

    delete[] arr;
    return 0;
}
