#include <iostream>
using namespace std;
#include <vector>
#define rep(i, a, b) for(i = a; i < b; i++)

int main()
{
    int i = 0;
    int n = 0, l = 0, count = 0;

    cin >> n >> l;

    vector<int> a(n);

    rep(i, 0, n){
        cin >> a[i];
    }

    i = 0;

    rep(i, 0, n){
        if(a[i] >= l)
            count++;
    }

    cout << count << "\n";

    return 0;
}