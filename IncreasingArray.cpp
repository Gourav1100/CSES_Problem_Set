#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    long long int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i != 0 && arr[i] < arr[i - 1]) {
            count += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    cout << count << endl;
    return 0;
}
