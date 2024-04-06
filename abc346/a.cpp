#include <iostream>
#include <vector>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)

int main()
{
    int n;
    int i = 0, ans = 0;
    cin >> n;
    vector<int> A(n);
    
    rep(i, 0, n){
        cin >> A[i];
    }

    rep(i, 0, n-1){
        ans = A[i] * A[i+1];
        cout << ans << " ";
    }

    cout << "\n";

    return 0;
}