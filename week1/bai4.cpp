#include <iostream>

using namespace std;

void rutGon(int &a, int &b) {
    int ucln = 1;
    
    int absA = (a < 0) ? -a : a;
    int absB = (b < 0) ? -b : b;
    int minVal = (absA < absB) ? absA : absB;

    for (int i = 1; i <= minVal; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }

    a /= ucln;
    b /= ucln;
}

int main() {
    int a, b;
    cin >> a >> b;
    rutGon(a, b);
    cout << a << "/" << b << endl;
    return 0;
}
// độ phức tạp thời gian O(min(|a|, |b|))
// độ phức tạp bộ nhớ:O(1)
