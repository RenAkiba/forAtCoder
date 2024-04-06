#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, mul = 0;

    cin >> a >> b;
    mul = a * b;

    if(mul % 2 == 0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }

    return 0;
}
