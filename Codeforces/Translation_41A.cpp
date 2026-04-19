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

    string s, a;
    cin >> s >> a;

    reverse(s.begin(), s.end());

    (s == a ? cout << "YES" : cout << "NO");

    return 0;
}
