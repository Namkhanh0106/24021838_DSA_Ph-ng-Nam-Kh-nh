#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long giaithua = 1;
    for (int i = 1; i <= n; i++) {
        giaithua *= i;
    }
    cout << giaithua << endl;
    return 0;
}
// Độ phức tạp thời gian: O(n)
// Độ phức tạp bộ nhớ: O(1)
