#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int a, b, c, sum;

    cin >> input;

    a = input[0] - '0';
    b = input[1] - '0';
    c = input[2] - '0';
    sum = a + b + c;

    cout << sum << endl;

    return 0;
}