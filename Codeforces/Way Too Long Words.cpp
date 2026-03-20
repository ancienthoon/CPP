#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
#include <stack>
#include <queue>
using namespace std;

void print(string s)
{
    int len = s.length();

    if (len > 10)
        cout << s.front() << len - 2 << s.back() << endl;
    else
        cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        
        print(s);
    }

    return 0;
}
