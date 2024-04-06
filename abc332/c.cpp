#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)

int main()
{
    int n = 0, m = 0, l = 0;
    string s;
    char c;

    cin >> n >> m;
    cin >> s;

    int m_have = m;
    int l_have = l;

    int i = 0;
    rep(i, 0, n){
        if(s.substr(n, 1) == "0"){
            m_have = m;
            l_have = l;
        }
        else if(s.substr(n, 1) == "1"){
            if(m != 0){
                m_have--;
            }
            else if(l != 0){
                l_have--;
            }
            else{
                l++;
            }
        }
        else if(s.substr(n, 1) == "2"){
            if(l_have == 0) l++;

            l_have--;
        }

    }

    cout << l << "\n";

    return 0;
}