#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nAll Subarrays are:\n";

    // Generate all subarrays
    for (int i = 0; i < n; i++) {          // start index
        for (int j = i; j < n; j++) {      // end index
            cout << "[ ";
            for (int k = i; k <= j; k++) { // print elements from i to j
                cout << arr[k] << " ";
            }
            cout << "]\n";
        }
    }

    return 0;
}

/* output-
Enter size of array: 5
Enter array elements: 1
2
3
4
5

All Subarrays are:
[ 1 ]
[ 1 2 ]
[ 1 2 3 ]
[ 1 2 3 4 ]
[ 1 2 3 4 5 ]
[ 2 ]
[ 2 3 ]
[ 2 3 4 ]
[ 2 3 4 5 ]
[ 3 ]
[ 3 4 ]
[ 3 4 5 ]
[ 4 ]
[ 4 5 ]
[ 5 ]
*/
