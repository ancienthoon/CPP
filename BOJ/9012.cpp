#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        stack<char> ch;
        bool ok = true;
        for (char c : s)// ' ( ' 를 스택에 push ' ) '가 나오면 pop
        {
            if (c == '(')
                ch.push(c);
            
            if (c == ')')
            {
                if (ch.empty())
                {
                    ok = false;
                    break;
                }
                else
                    ch.pop();
            }
        }

        if (ok == true and ch.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
