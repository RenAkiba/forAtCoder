#include <iostream>
#include <vector>
using namespace std;
#define rep(i, a, b) for(i = a; i < b; i++)

int main()
{
    int g_max = 0, m_max = 0, k = 0, i = 0, j = 0;
    int g_cap = 0, m_cap = 0;

    cin >> k >> g_max >> m_max;

    rep(i, 0, k){
        if(g_cap == g_max){
            g_cap = 0;
        }
        else if(m_cap == 0){
            m_cap = m_max;
        }
        else{
            for(j = 0; !((g_cap == g_max)||(m_cap == 0)); j++){
                g_cap++;
                m_cap--;
            }
        }
    }

    cout << g_cap << " " << m_cap << "\n";

    return 0;
}