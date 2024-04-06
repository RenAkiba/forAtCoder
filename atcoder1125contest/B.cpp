#include <iostream>
using namespace std;
#include <vector>
#include <cstdlib>
#define rep(i, a, b) for(i = a; i < b; i++)

int main()
{
    int i = 0, j = 0, n = 0, l = 0, r = 0;

    cin >> n >> l >> r;

    vector<int> x(n);
    vector<int> ans(n, 0);

    rep(i, 0, n){
        cin >> x[i];
    }

    if(r == l){
        rep(i, 0, n){
            x[i] = l;
        }
    }
    else{
        int lengrl = r - l + 2; //(r+1) - (l-1)
        vector<int> exam(lengrl);

        rep(i, 0, lengrl){
            exam[i] = l + i;
        }

        vector<int> temp_ans(lengrl);
        rep(i, 0, n){
            rep(j, 0, lengrl){
                temp_ans[j] = abs(exam[j] - x[j]);
            }
        
            if(temp_ans[0] < temp_ans[lengrl]){
                ans[i] = temp_ans[0];
            }
            else{
                ans[i] = temp_ans[lengrl];
            }
        }

        cout << lengrl << "\n";
    }

    rep(i, 0, n){
        cout << ans[i] << " ";
    }   cout << "\n";

    

    return 0;
}