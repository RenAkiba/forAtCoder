#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)
using ll = long long;

int main()
{
    int n = 0, a = 0, b = 0, ans = 0;
    int i = 0; int temp = 0; int hoge = 0;
    
    cin >> n >> a >> b;

    for(i = 1; i <= n; i++){
        hoge = i;
        temp = 0;

        while(hoge > 0){
            temp += (hoge % 10);
            hoge /= 10;
        }
        if((a <= temp) && (temp <= b)){
            ans += i;
        }
    }

    cout << ans << "\n";

    return 0;
}

/*
834 を 10 で割った余りは 4　-> 答えに加算
834 を 10 で割って 83
83 を 10 で割った余りは 3 -> 答えに加算
83 を 10 で割って 8
8 を 10 で割った余りは 8 -> 答えに加算
8 を 10 で割って 0
0 なので break
*/

/*
for文の中でiはいじっちゃダメ！

int main()
{
    int i = 0;

    for(i = 0; i < 5; i++){
        cout << i << "\n";
        i = 100;
    }

    return 0;
}

の出力結果は　０　だけ！
i = 100; の次に条件式の判定が入るからi = 1の時の処理はおこわなれない！
*/