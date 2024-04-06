#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)

int main()
{
    int w = 0, b = 0;
    string p = "wbwbwwbwbwbw";
    string s = p;

    cin >> w >> b;

    

    cout << s << "\n";

    return 0;
}

//w 7
//b 5




using namespace std;

const string t = "wbwbwwbwbwbw";

//pythonみたいに配列を増やして込めなおすみたいなことができないから string tをうまく使っている
//鍵盤は同じtを繰り返していくから割る12(鍵盤の数)をすると

int main() {
    int w, b;
    cin >> w >> b;
    for (int i = 0; i < (int) t.size(); i++) { //取り出し始める位置を一個ずつずらしながら調べていく
        int nw = 0, nb = 0;
        for (int j = 0; j < w + b; j++) { //j個目まで出す　※調べていくのは一文字づつだから。取り出すのはまとめてじゃない
            if (t[(i + j) % t.size()] == 'w') ++nw; 
            //% t.size()としているのは、例えば13番目を調べたい時、13番目＝1番目である。
            //14番目＝2番目である。同じ文字列を繰り返すんだから96番目を調べたいときは、96 - (12 * 8)という考えからs[96 - (12 * 8)]を指定してもいける。
            //でも8をどのように決めるかがちょっと難しい
            //i + jの部分は、i番目からj個鍵盤を取り出すという考え方
            //発想
            //まずは全探索から考える。一通り調べてしまうというかんがえかたが一番シンプルで簡単
            //文字は全部でt[0] ~ t[11]. t[12]はどう表せるか？を考える
            //(そもそもt[(i+j) % 11])がイディオム説
            else ++nb;
        }
        if (w == nw && b == nb) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
