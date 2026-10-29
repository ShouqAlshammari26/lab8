#include <iostream>
using namespace std;
int main() {
    int arr[10]; int distinct[10]; int count = 0;
    cout << "Enter Number Size: 10" << endl;
    cout << "Enter [10] numbers:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        bool found = false;

        for (int j = 0; j < count; j++) {
            if (arr[i] == distinct[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            distinct[count] = arr[i];
            count++;
        }
    }

    cout << "The number of distinct values is " << count << "." << endl;
    cout << "The distinct numbers are:" << endl;

    for (int i = 0; i < count; i++) {
        cout << distinct[i];

        if (i < count - 1)
            cout << " ";
    }

    cout << endl;

    return 0;
}
