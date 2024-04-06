#include <iostream>
using namespace std;
#include <vector>
#include <cstdlib>
#define rep(i, a, b) for(i = a; i < b; i++)

int main()
{
    int i = 0, n = 0;
    long l = 0, r = 0;

    cin >> n >> l >> r;

    vector<long> x(n);
    vector<unsigned int> ans(n, 0);

    rep(i, 0, n){
        cin >> x[i];
    }

    if(l == r){
        rep(i, 0, n){
            ans[i] = l;
        }
    }
    else{
        int temp_left = 0;
        int temp_right = 0;
        
        rep(i, 0, n){
            temp_left = abs(l - x[i]);
            temp_right = abs(r - x[i]);

            if(temp_left <= temp_right){
                ans[i] = l;
            }
            else{
                ans[i] = r;
            }
        }
    }

    rep(i, 0, n-1){
        cout << ans[i] << " ";
    }
    
    cout << ans[n-1] << "\n";

    

    return 0;
}