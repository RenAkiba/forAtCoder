#include <iostream>
//#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++);

int main()
{
    int x = 0, y1 = 0, y2 = 0, z = 0;

    int D;
    cin >> D;

    int ans = D;

    rep(x, 0, sqrt(D) + 10){
        z = D - x * x;  //zは格子点と円周との距離を意味する

        if(z < 0){  //もし仮に円周を飛び出したら
            ans = min(ans, -z);   //zとansで最小値を更新していく
        }
        else{
            y1 = sqrt(z);
            y2 = y1 + 1;
            ans = min(ans, z - y1 * y1, y2 * y2 - z);
        }
    }

    cout << ans << "\n";

    return 0;
}


/*反省
<cmath>
sqrt

<algorithm>
min

・図示をするべき
・この問題は○○を意味しているということをしっかり考える
・x^2 + y^2 は円の式であるから |x^2 + y^2 - D| は円周に最も近い格子点
・計算量を求めるためには円周近くの点を調べる
・一緒くたに考えない。まずはxを求める所から
*/