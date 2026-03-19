#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int a;
    cin >> a;
    if (a % 2 == 0 and a >= 4)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
