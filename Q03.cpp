// Program 3: Sort an array using bubble sort
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& values) {
    for (size_t end = values.size(); end > 1; --end) {
        bool swapped = false;
        for (size_t i = 1; i < end; ++i) {
            if (values[i - 1] > values[i]) {
                swap(values[i - 1], values[i]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int n;
    cout << "Number of elements: "; cin >> n;
    if (n < 0) return 1;
    vector<int> values(n);
    cout << "Enter elements: ";
    for (int& x : values) cin >> x;
    bubbleSort(values);
    cout << "Sorted: ";
    for (int x : values) cout << x << ' ';
    cout << '\n';
}
