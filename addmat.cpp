#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], d[10][10], r, c, i, j;
    
    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;
    
    cout << "Enter elements of matrix A:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    
    cout << "Enter elements of matrix B:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }
    
    cout << "Sum:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            d[i][j] = a[i][j] + b[i][j];
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

