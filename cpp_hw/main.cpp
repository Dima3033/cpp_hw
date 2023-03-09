#include <iostream>
#include <algorithm>

using namespace std;

const int max_size = 100;

void initMatrix(int n, int matrix[max_size][max_size]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int n, int matrix[max_size][max_size]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void findMinMaxDiagonal(int n, int matrix[max_size][max_size], int& minElem, int& maxElem) {
    minElem = matrix[0][0];
    maxElem = matrix[0][0];
    for (int i = 0; i < n; i++) {
        if (matrix[i][i] < minElem) {
            minElem = matrix[i][i];
        }
        if (matrix[i][i] > maxElem) {
            maxElem = matrix[i][i];
        }
    }
}

void sortMatrixRows(int n, int matrix[max_size][max_size]) {
    for (int i = 0; i < n; i++) {
        sort(matrix[i], matrix[i] + n);
    }
}

int main() {
    int n;
    int matrix[max_size][max_size];

    cout << "Enter matrix size -> ";
    cin >> n;

    initMatrix(n, matrix);
    cout << "Matrix ->" << endl;
    printMatrix(n, matrix);

    int minElem, maxElem;
    findMinMaxDiagonal(n, matrix, minElem, maxElem);
    cout << "Minimum element -> " << minElem << endl;
    cout << "Maximum element -> " << maxElem << endl;

    sortMatrixRows(n, matrix);
    cout << "Matrix ->" << endl;
    printMatrix(n, matrix);

    return 0;
}
