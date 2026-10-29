#include <iostream> 
using namespace std;
int main() {
    int size;
    cout << "Please, Enter array size: ";
    cin >> size;

    if (size <= 0) return 0;

    int* arr = new int[size];

    cout << "Enter [" << size << "] numbers:" << endl;

    for (int i = 0; i < size; i++) {
        cout << "Enter value - [" << i + 1 << "]: ";
        cin >> arr[i];
    }

    cout << "Result is:" << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    delete[] arr;
    return 0;
}