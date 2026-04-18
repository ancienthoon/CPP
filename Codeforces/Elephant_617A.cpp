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
    
    int a;
    cin >> a;

    int startPoint = 0;
    int term = 0;

    while (1)
    {
        if (a - startPoint > 5)
            startPoint += 5;
        else
            startPoint += a - startPoint;

        term++;

        if (startPoint >= a)
            break;
    }

    cout << term;

    return 0;
}
