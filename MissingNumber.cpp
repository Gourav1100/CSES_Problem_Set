#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    long long int sum = 0, temp;
    for(int i = 0; i < n - 1; i++) {
        cin >> temp;
        sum += temp;
    }

    cout << ((n * (n + 1)) >> 1) - sum << endl;

    return 0;
}
