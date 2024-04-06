#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, j, n, count = 0;
    bool flag = true;
    cin >> n;

    vector<int> input(n, 0);
    
    //まず全部の数字を受け取る
    for(i = 0; i < n; i++){
        cin >> input[i];
    }


    while(flag){
        for(j = 0; j < n; j++){
            if(input[j] % 2 == 0){
                flag = true;
            }else{
                flag = false;
                break;
            }
        }

        if(flag){
            count++;

            for(j = 0; j < n; j++){
                input[j] /= 2;
            }
        }
    }

    
    
    cout << count << endl;
    
    return 0;
}
