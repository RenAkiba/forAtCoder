#include <iostream>
#include <vector>
using namespace std;

#define rep(i, a, b) for(i = a; i < b; i++)

int main()
{
    int i;
    int n, x, sum = 0;

    cin >> n >> x;

    vector<int> s(n);

    rep(i, 0, n){
        cin >> s[i];

        if(s[i] <= x){
            sum += s[i];
        }
    }

    cout << sum << "\n";
}