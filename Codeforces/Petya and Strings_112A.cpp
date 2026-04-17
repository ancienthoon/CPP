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
 
    string a, b;
    cin >> a >> b;
 
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
 
    if (a > b)
        cout << "1";
    else if (a < b)
        cout << "-1";
    else
        cout << "0";
 
    return 0;
}
