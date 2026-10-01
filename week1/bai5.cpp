#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[10000];
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    double tb = sum / n;
    for (int i = 0; i < n; i++) {
        if (a[i] >= tb) {
            cout << a[i] << " ";
        }
    }
    return 0;
}
// Độ phức tạp thời gian: O(N)
// Độ phức tạp bộ nhớ: O(N)
