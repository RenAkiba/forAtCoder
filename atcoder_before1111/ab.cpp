#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, n, flag = 0;
    string mojiretu;

    cin >> n >> mojiretu;

    /*
    for(i = 0; i < n; i++){
        int s;
        cin >> s;
        mojiretu.push_back(n);
    }
    */

    for(i = 0; i < n-1; i++){
        if((mojiretu[i] == 'a') && (mojiretu[i+1] == 'b')){
            flag = 1;
        }
        else if((mojiretu[i] == 'b') && (mojiretu[i+1] == 'a')){
            flag = 1;
        }
    }

    if(flag == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}