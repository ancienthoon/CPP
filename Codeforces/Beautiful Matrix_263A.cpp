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

    int x;

    for (int i = 1; i <= 5; i++)  
    {
        for (int j = 1; j <= 5; j++) 
        {
            cin >> x;

            if (x == 1)
            {
                int distance = abs(i - 3) + abs(j - 3);
                cout << distance << endl;
                return 0; 
            }
        }
    }

    return 0;
}
