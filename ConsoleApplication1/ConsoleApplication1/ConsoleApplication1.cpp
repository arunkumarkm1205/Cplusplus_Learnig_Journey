#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter the array in ascending order: ";

    
    for (int& x : A) {
        cin >> x;

    }

    int l = 0, h = n - 1, m, key;

    cout << "Enter the key to search: ";
    cin >> key;

    while (l <= h) {
        m = (l + h) / 2;
        if (A[m] == key) {
            cout << "Key is found at index " << m << endl;
            return 0;
        }
        else if (A[m] > key) {
            h = m - 1;
        }
        else {
            l = m + 1;
        }
    }

    cout << "Key not found" << endl;
    return 0;
}
