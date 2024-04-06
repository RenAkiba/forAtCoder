#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, j, month, coef = 0;
    int count = 0;
    int a, b;
    cin >> month;
    vector<int> day(month);
    
    for(i = 0; i < month; i++){
        cin >> day[i];
    }

    for(i = 1; i <= month; i++){ //月分ループしたい
        if(i < 10){
            coef = i; //月が一桁ならば、それを係数として持つ

            //ここのday[i]はただの数字。31日とか29日とか
            for(j = 1; j <= day[i-1]; ++j){ //日数分ループ
                if(coef == j) count++;

                if(coef * 11 == j) count++;
            }
        }
        //月が2桁、かつ11で割り切れるのであれば、割り切った数を係数として持つ
        
        if(10 <= i){
            a = i / 10;
            b = i % 10;

            if(a == b){
                coef = a;

                for(j = 1; j <= day[i-1]; ++j){ //日数分ループ
                    if(coef == j) count++;

                    if(coef * 11 == j) count++;
                }
            }
        }
        
    }
    cout << count << endl;
}