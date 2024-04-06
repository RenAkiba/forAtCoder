#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)
using ll = long long;

int main()
{
    int i = 0, j = 0, k = 0;
    int n = 0, y = 0;
    bool flag = false;
    vector<int> ans(3);

    cin >> n >> y;

    for(i = 0; i <= n; i++){
        for(j = 0; j <= n-i; j++){
            if(y == (10000 * i) + (5000 * j) + (1000 * (n - i - j))){
                flag = !flag;
                ans[1] = i;
                ans[2] = j;
                ans[3] = n - i - j;
            }
        }
    }

    if(flag){
        cout << ans[1] << " " << ans[2] << " " << ans[3] << "\n";
    }
    else{
        cout << "-1 -1 -1 \n";
    }
    

    return 0;
}