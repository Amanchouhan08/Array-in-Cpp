#include <iostream>
#include <array>       // for std::array
#include <algorithm>   // for sort, reverse, count, find, etc.
#include <numeric>     // for accumulate
using namespace std;

int main() {
    // 1️⃣ Create and initialize array
    array<int, 5> arr = {5, 2, 8, 1, 3};

    cout << "1. Original Array: ";
    for (int i : arr) cout << i << " ";
    cout << endl;
    // Output: 1. Original Array: 5 2 8 1 3

    // 2️⃣ Size and elements access
    cout << "2. Size: " << arr.size() << endl;
    cout << "   First element: " << arr.front() << endl;
    cout << "   Last element: " << arr.back() << endl;
    cout << "   Element at index 2: " << arr.at(2) << endl;
    // Output: Size: 5, First: 5, Last: 3, At(2): 8

    // 3️⃣ Sort array (ascending)
    sort(arr.begin(), arr.end());
    cout << "3. Sorted Array (asc): ";
    for (int i : arr) cout << i << " ";
    cout << endl;
    // Output: 3. Sorted Array (asc): 1 2 3 5 8

    // 4️⃣ Reverse array
    reverse(arr.begin(), arr.end());
    cout << "4. Reversed Array: ";
    for (int i : arr) cout << i << " ";
    cout << endl;
    // Output: 4. Reversed Array: 8 5 3 2 1

    // 5️⃣ Find an element
    int key = 3;
    auto it = find(arr.begin(), arr.end(), key);
    if (it != arr.end())
        cout << "5. Element " << key << " found at index: " << it - arr.begin() << endl;
    else
        cout << "5. Element not found" << endl;
    // Output: 5. Element 3 found at index: 2

    // 6️⃣ Count occurrence of an element
    int countVal = count(arr.begin(), arr.end(), 2);
    cout << "6. Count of 2: " << countVal << endl;
    // Output: 6. Count of 2: 1

    // 7️⃣ Accumulate (Sum of elements)
    int total = accumulate(arr.begin(), arr.end(), 0);
    cout << "7. Sum of all elements: " << total << endl;
    // Output: 7. Sum of all elements: 19

    // 8️⃣ Min and Max element
    cout << "8. Min element: " << *min_element(arr.begin(), arr.end()) << endl;
    cout << "   Max element: " << *max_element(arr.begin(), arr.end()) << endl;
    // Output: Min: 1, Max: 8

    // 9️⃣ Swap arrays
    array<int, 5> arr2 = {9, 9, 9, 9, 9};
    arr.swap(arr2);
    cout << "9. After swap, arr: ";
    for (int i : arr) cout << i << " ";
    cout << endl;
    // Output: 9. After swap, arr: 9 9 9 9 9

    // 🔟 Fill array with value
    arr.fill(0);
    cout << "10. After fill(0): ";
    for (int i : arr) cout << i << " ";
    cout << endl;
    // Output: 10. After fill(0): 0 0 0 0 0

    return 0;
}
