// Program 8: Sum the diagonal elements of a matrix
#include <iostream>
#include <vector>
using namespace std;

long long diagonalSum(const vector<vector<long long>>& matrix) {
    long long sum = 0;
    for (size_t i = 0; i < matrix.size(); ++i) {
        sum += matrix[i][i];
        size_t j = matrix.size() - 1 - i;
        if (j != i) sum += matrix[i][j]; // avoid counting center twice
    }
    return sum;
}

int main() {
    int n; cout << "Order of square matrix: "; cin >> n;
    if (n <= 0) return 1;
    vector<vector<long long>> matrix(n, vector<long long>(n));
    cout << "Enter matrix values:\n";
    for (auto& row : matrix) for (auto& x : row) cin >> x;
    cout << "Sum of both diagonals: " << diagonalSum(matrix) << '\n';
}
