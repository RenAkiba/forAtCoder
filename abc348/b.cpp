#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)
using ll = long long;

int main()
{
    int i = 0,
    j = 0,
    n = 0,
    temp_x = 0,
    temp_y = 0,
    ans = 0;

    cin >> n;

    vector<vector<int>> xy(n, vector<int> (2));

    rep(i, 0, n){
        rep(i, 0, 1){
            cin >> xy.at(i).at(j);
        }
    }

    vector<vector<double>> d(n, vector<double>(n, 0));

    rep(i, 0, n){
        rep(j, 0, n){
            temp_x = xy.at(i).at(0) - xy.at(j).at(0);
            temp_y = xy.at(i).at(1) - xy.at(j).at(1);
            temp_x *= temp_x;
            temp_y *= temp_y;
            d.at(i).at(j) = sqrt(temp_x + temp_y);
        }
    }

    vector<double> dekka(n);

    rep(i, 0, n){
        rep(j, 0, n){
            if(dekka[i] < max(d.at(i).at(i), d.at(i).at(j)))
                dekka[i] = max(d.at(i).at(i), d.at(i).at(j));
        }
    }

    rep(i, 0, n){
        cout << (int)dekka[i] << "\n";
    }
    

    return 0;
}