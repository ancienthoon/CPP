#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
#include <stack>
#include <queue>
using namespace std;
 
void cal(vector<int> &v)//여기서 벡터가 그대로 매개변수로 들어간다
{
    
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> v(a);
 
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
    }
 
    return 0;
}
