#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)
using ll = long long;

int main()
{
    int a = 0, b = 0;

    cin >> a >> b;

    int mul = a * b;

    if((mul % 2) == 0){
        cout << "Even" << "\n";
    }
    else{
        cout << "Odd" << "\n";
    }

    return 0;
}