#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
#include <stack>
#include <set>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
    int t;
    cin >> t;
    
    while (t--)
    {
        int cnt = 0;
        set<char> st;
 
        int len;
        cin >> len;
        string s;
        cin >> s;
 
        for (char c : s)
        {
            if (st.insert(c).second)
                cnt += 2;
            else
                cnt++;
        }
 
        cout << cnt << endl;
    }
 
    return 0;
}
