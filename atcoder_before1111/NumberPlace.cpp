#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, j;
    bool res = true;
    vector<vector<int>> A(9, vector<int>(9));
    vector<bool> flag(9, false);

    //入力
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            cin >> A.at(i).at(j);
        }
    }

    //縦
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            flag[A.at(i).at(j) - 1] = true; 
        }
        for(j = 0; j < 9; j++){
            if(flag[j] == false)
                res = false;
        }
    }

    //リセット
    for(i = 0; i < 9; i++){
        flag[i] = false;
    }

    //横
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            flag[A.at(j).at(i) - 1] = true; 
        }
        for(j = 0; j < 9; j++){
            if(flag[j] == false)
                res = false;
        }
    }

    //リセット
    for(i = 0; i < 9; i++){
        flag[i] = false;
    }
    
    if(res == true){
        cout << "Yes" << endl;
    }
    else if(res == false){
        cout << "No" << endl;
    }
}