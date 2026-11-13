// Program 6: Search using binary search
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& values, int target) {
    int left = 0, right = static_cast<int>(values.size()) - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (values[mid] == target) return mid;
        if (values[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Number of sorted elements: "; cin >> n;
    if (n < 0) return 1;
    vector<int> values(n);
    cout << "Enter elements in ascending order: ";
    for (int& x : values) cin >> x;
    int target; cout << "Value to find: "; cin >> target;
    int index = binarySearch(values, target);
    if (index < 0) cout << "Not found.\n";
    else cout << "Found at zero-based index " << index << ".\n";
}
