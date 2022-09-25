#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n == 4) {
        cout << "2 4 1 3" << endl;
        return 0;
    }
    int arr[n], counter = 1;
    for(int i = 0; i < n; i += 2) {
        arr[i] = counter++;
    }
    for(int i = 1; i < n; i += 2) {
        arr[i] = counter++;
        if(i != 0 && abs(arr[i - 1] - arr[i]) == 1) {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
        if(i != n - 1 && abs(arr[i] - arr[i + 1]) == 1) {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
