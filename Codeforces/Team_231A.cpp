#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
#include <stack>
#include <queue>
using namespace std;
 
struct info
{
    int a, b, c;
};
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
    info in;
    int t;
    cin >> t;
 
    int cnt1;
    int cnt2 = 0;
 
    while (t--)
    {
        cnt1 = 0;
        cin >> in.a >> in.b >> in.c;
 
        if (in.a == 1)
            cnt1++;
        if (in.b == 1)
            cnt1++;
        if (in.c == 1)
            cnt1++;
 
        if (cnt1 >= 2)
            cnt2++;
    }
 
    cout << cnt2;
 
    return 0;
}
