#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    for(long long int i = 0; i < n; i++) {
        long long int x, y;
        cin >> x >> y;
        long long int m = max(x, y);
        long long int num = m * m;
        if(((m >> 1) << 1) == m) {
            num -= (m - x) + (y - 1);
        } else {
            num -= (x - 1) + (m - y);
        }
        cout << num << endl;
    }
    return 0;
}
