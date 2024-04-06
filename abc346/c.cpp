#include <iostream>
#include <vector>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)
using ll = long long;
#include <set>

int main()
{
    int n = 0, k = 0, i = 0;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    /*
    1 ~ 10　までの和を求めるとき、
    1 + 10, 2 * 9 .....みたいに11のペアを作り、
    出来上がる11の個数、この場合5(10 / 2)個なので
    11＊5で和が計算できる
    よって↓のansに代入すrのは(1 + k) * (k / 2)となる
    */

    ll ans = ll (1 + k) * (k / 2);
    
    set<int> s;

    rep(i, 0, n) s.insert(a[i]);

    for(int x : s){
        if(x <= k) ans -= x;
    }

    //x個減るという表現と、-x個増えるという表現が同じ意味を持つことを頭に入れておく
    //文字列の中に出てこなかった1<=kの範囲の数字の総和
    //=　1<=kの範囲の数字の総和から文字列の中に出てきた数字を引いたもの

    cout << ans << "\n";

    return 0;
}