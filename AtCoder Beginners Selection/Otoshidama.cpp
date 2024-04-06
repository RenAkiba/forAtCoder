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
    int n = 0, y = 0, total = 0;
    bool flag = false;
    vector<int> ans(3);

    cin >> n >> y;

    for(i = 0; i <= n; i++){
        for(j = 0; j <= n-i; j++){
            k = n-i-j;
            total = (10000 * i) + (5000 * j) + (1000 * k);
            if(y == total){
                flag = true;
                ans[0] = i;
                ans[1] = j;
                ans[2] = n - i - j;
            }
        }
    }

    if(flag){
        cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
    }
    else{
        cout << "-1 -1 -1 \n";
    }
    

    return 0;
}


// これflag = !flag;だと答えが2個見つかった時にfalseに戻っちゃう
// だからflag = !flagにするなら見つかった段階でbreakするべき