#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)
using ll = long long;

int main()
{
    int a = 0, b = 0, c = 0, x = 0, ans = 0;
    int i = 0, j = 0, k = 0;

    cin >> a >> b >> c >> x;

    for(i = 0; i <= a; i++){
        for(j = 0; j <= b; j++){
            for(k = 0; k <= c; k++){
                if(((500*i) + (100*j) + (50*k)) == x){
                    ans++;
                }
            }
        }
    }

    cout << ans << "\n";

    return 0;
}