#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
#include <stack>
#include <queue>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
    int t;
    cin >> t;
    int a = 0;
 
    while (t--)
    {
        string s;
        cin >> s;
 
        if (s.find("++") != string::npos)
            a++;
        else if (s.find("--") != string::npos)
            a--;
    }
    cout << a;
 
    return 0;
}
