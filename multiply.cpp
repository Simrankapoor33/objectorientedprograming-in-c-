#include<iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> m >> n;
    int first[m][n];
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> first[i][j];
        }
    }

    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> p >> q;
    if (n != p) {
        cout << "Matrix multiplication is not possible.\n";
        return 0;
    }
    int second[p][q];
    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> second[i][j];
        }
    }

    int result[m][q];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    cout << "Resultant matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}