#include <iostream>
#include <vector>
using namespace std;

#define rep(i, a, b) for(i = a; i < b; i++)

int main()
{
    int n = 0, s = 0, k = 0;

    cin >> n >> s >> k;

    vector<int> p(n);
    vector<int> q(n);

    int i = 0;

    rep(i, 0, n){
        cin >> p[i] >> q[i];
    }

    int sum = 0;

    rep(i, 0, n){
        p[i] = p[i] * q[i];
        sum += p[i];
    }

    int ans = 0;

    if(sum >= s){
        k = 0;
    }

    ans = sum + k;

    cout << ans << "\n";

    return 0;
}