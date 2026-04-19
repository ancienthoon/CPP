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

    string s;
    cin >> s;

    int cntA = 0;
    int cntD = 0;

    for (char c : s)
    {
        (c == 'D' ? cntD++ : cntA++);
    }

    if (cntA > cntD)
        cout << "Anton";
    else if (cntD > cntA)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}
