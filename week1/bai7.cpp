#include <iostream>

using namespace std;

int tinhTong(int a[][100], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}

void xoaDong(int a[][100], int &n, int m, int r) {
    if (r < 0 || r >= n) return;
    for (int i = r; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = a[i + 1][j];
        }
    }
    n--;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << tinhTong(a, n, m) << endl;

    int r;
    cin >> r;
    xoaDong(a, n, m, r);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//Độ phức tạp thời gian ý a,b: O(N x M)
//Độ phức tạp bộ nhớ ý a,b: O(1)
