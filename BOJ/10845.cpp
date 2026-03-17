#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
#include <stack>
#include <queue>
using namespace std;
long long arr[1000000];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    queue<int> q;
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        string c;
        cin >> c;

        if (c == "push")
        {
            cin >> a;
            q.push(a);
        }
        if (c == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << '\n';
                q.pop();
            }
            else
                cout << -1 << '\n';
        }
        if (c == "size")
        {
            cout << q.size() << '\n';
        }
        if (c == "empty")
        {
            if (!q.empty())
                cout << 0 << '\n';
            else
                cout << 1 << '\n';
        }
        if (c == "front")
        {
            if (!q.empty())
                cout << q.front() << '\n';
            else
                cout << -1 << '\n';
        }
        if (c == "back")
        {
            if (!q.empty())
                cout << q.back() << '\n';
            else
                cout << -1 << '\n';
        }
    }

    return 0;
}
