#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)
using ll = long long;

int main()
{
    int i = 0, ans = 0;
    string s;

    cin >> s;

    rep(i, 0, s.length()){
        if((s[i] - '0') == 1)
            ans++;
    }

    cout << ans << "\n";

    return 0;
}