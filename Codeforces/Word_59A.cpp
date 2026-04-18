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

    int cntUp = 0;
    int cntLow = 0;

    for (char c : s)
    {
        if (isupper(c))
            cntUp++;
        else
            cntLow++;
    }

    if (cntUp > cntLow)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s;

    return 0;
}
