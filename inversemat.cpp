#include <iostream>
using namespace std;

int main() {
    int a[10][10], n, d;
    float determinant = 0, invA[10][10];

    cout << "Enter the size of the matrix: ";
    cin >> n;

    if (n == 2) {
        int A[2][2], adjA[2][2];

        cout << "Enter the elements for a 2x2 matrix:" << endl;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> A[i][j];

        d = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

        if (d == 0) {
            cout << "Determinant cannot be zero" << endl;
            return 0;
        }

        adjA[0][0] = A[1][1];
        adjA[1][1] = A[0][0];
        adjA[0][1] = -A[0][1];
        adjA[1][0] = -A[1][0];

        cout << "Inverse of Matrix is:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                invA[i][j] = adjA[i][j] / (float)d;
                cout << "\t" << invA[i][j];
            }
            cout << endl;
        }
    } else {
        cout << "Enter elements of the matrix: ";
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        cout << endl << "The matrix is:" << endl;
        for (int i = 0; i < n; i++) {
            cout << endl;
            for (int j = 0; j < n; j++)
                cout << "\t" << a[i][j];
        }

        for (int i = 0; i < n; i++)
            determinant += (a[0][i] * (a[1][(i + 1) % n] * a[2][(i + 2) % n] - a[1][(i + 2) % n] * a[2][(i + 1) % n]));

        cout << endl << "Inverse of the matrix is:" << endl << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << "\t" << ((a[(i + 1) % n][(j + 1) % n] * a[(i + 2) % n][(j + 2) % n]) - (a[(i + 1) % n][(j + 2) % n] * a[(i + 2) % n][(j + 1) % n])) / determinant;
            cout << endl;
        }
    }

    return 0;
}

