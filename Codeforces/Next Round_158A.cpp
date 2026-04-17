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
 
    int a, b, cnt;
    cnt = 0;
    cin >> a >> b;
    vector<int> v(a);
 
    for (int i = 0; i < a; i++)
        cin >> v[i];
 
    sort(v.begin(), v.end(), greater<int>());
 
    int tar = b - 1;
    bool isZero = true;
 
    for (int i = 0; i < a; i++)
    {
        if (v[i] != 0 and v[i] >= v[tar])
        {
            isZero = false;
            cnt++;
        }
    }
 
    if (isZero)
    {
        cout << "0";
    }
    else
    {
        cout << cnt;
    }
 
    return 0;
}
