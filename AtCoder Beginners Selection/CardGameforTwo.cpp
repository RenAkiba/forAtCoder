#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)
using ll = long long;

int main()
{
    int i = 0, ans = 0;
    int n = 0, alice = 0, bob = 0, total = 0;

    cin >> n;

    vector<int> a(n);

    rep(i, 0, n){
        cin >> a[i];
        total += a[i];
    }

    sort(a.rbegin(), a.rend());

    rep(i, 0, n){
        alice += a[i];
        i++;
    }

    bob = total - alice;
    ans = alice - bob;

    cout << ans << "\n";

    return 0;
}