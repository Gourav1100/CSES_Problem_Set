#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size(), ans = 0, curr = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i - 1]) {
            ans = max(curr, ans);
            curr = 1;
        } else {
            curr++;
        }
    }
    ans = max(ans, curr);
    cout << ans << endl;
    return 0;
}
