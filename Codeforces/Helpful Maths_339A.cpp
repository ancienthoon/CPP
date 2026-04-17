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

    string s;
    cin >> s;
    vector<char> v;
    
    for (char c : s)
    {
        if (c >= '0' and c < '9')
            v.push_back(c);
    }

    sort(v.begin(), v.end());

    if (v.size() > 1)
    {
        for (int i = 0; i < v.size() - 1; i++)
        {
            cout << v[i] << "+";
        }
        cout << v[v.size() - 1];
    }
    else
        cout << s;

    return 0;
}
