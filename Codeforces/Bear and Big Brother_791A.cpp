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

    int a, b;
    cin >> a >> b;

    int day = 0;

    while (1)
    {
        a *= 3;
        b *= 2;
        day++;

        if (a > b)
            break;
    }

    cout << day;

    return 0;
}
