#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)
using ll = long long;

int main()
{
    int i = 0, n = 0;
    
    cin >> n;

    for(i = 1; i <= n; i++){
        if(i % 3 == 0){
            cout << "x";
        }
        else{
            cout << "o";
        }
    }

    cout << "\n";

    return 0;
}