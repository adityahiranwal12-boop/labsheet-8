// Program 7: Add two matrices
#include <iostream>
#include <vector>
using namespace std;

using Matrix = vector<vector<long long>>;
Matrix readMatrix(int rows, int cols) {
    Matrix m(rows, vector<long long>(cols));
    for (auto& row : m) for (auto& x : row) cin >> x;
    return m;
}
void printMatrix(const Matrix& m) {
    for (const auto& row : m) {
        for (long long x : row) cout << x << ' ';
        cout << '\n';
    }
}
int main() {
    int rows, cols;
    cout << "Rows and columns: "; cin >> rows >> cols;
    if (rows <= 0 || cols <= 0) return 1;
    cout << "Enter first matrix:\n"; Matrix a = readMatrix(rows, cols);
    cout << "Enter second matrix:\n"; Matrix b = readMatrix(rows, cols);
    Matrix sum(rows, vector<long long>(cols));
    for (int i=0; i<rows; ++i) for (int j=0; j<cols; ++j) sum[i][j] = a[i][j] + b[i][j];
    cout << "Sum:\n"; printMatrix(sum);
}
