#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)
using ll = long long;

int main()
{
    int n = 0, i = 0, ans = 0;
    bool flag = true;

    cin >> n;

    vector<int> a(n);

    rep(i, 0, n){
        cin >> a[i];
    }
    
    /*これだとvector aが更新されない
    while(flag){
        rep(i, 0, n){
            if((a[i] % 2) == 0){
                if(i == n-1){
                    ans++;
                }
            }
            else{
                cout << ans << "\n";
                flag = !flag;
                break;
            }
        }
    }
    */
    
    while(1){
        rep(i, 0, n){
            if((a[i] % 2) != 0){
                flag = false;
            }
        }

        if(flag == false) break;

        rep(i, 0, n){
            a[i] /= 2;
        }
    }
    
    return 0;
}

//N 個の A のうち、2 で割れる回数が最も小さいものがボトルネックになる。
//それぞれのa[i]について何回2で割れるか？→一番少ない回数割れるものがans