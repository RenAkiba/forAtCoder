#include <iostream>
using namespace std;

int main()
{
    int a, b, c, x, count = 0;
    int i = 0, j = 0, k = 0;
    cin >> a >> b >> c >> x;

    for(i = 0; i <= a; i++){
        for(j = 0; j <= b; j++){
            for(k = 0; k <= c; k++){
                if((500 * i) + (100 * j) + (50 * k) == x)
                    count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}