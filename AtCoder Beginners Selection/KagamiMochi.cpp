#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)
using ll = long long;

int main()
{
    int i = 0, ans = 0, n = 0, installed = 0;
    cin >> n;
    vector<int> d(n);

    rep(i, 0, n){
        cin >> d[i];
    }

    sort(d.rbegin(), d.rend());
    installed = d[0];
    ans++;

    rep(i, 1, n){
        if(installed > d[i]){
            installed = d[i];
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}