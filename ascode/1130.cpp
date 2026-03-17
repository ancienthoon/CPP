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

    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        vector<int> v1, v2;

        int maxlen = max(a.length(), b.length());//둘 중에 누가 더 기냐

        if (a.length() < maxlen)
            a.resize(maxlen, ' ');//부족한 글자수만큼 일단 공백
        else if (b.length() < maxlen)
            b.resize(maxlen, ' ');

        for (char c : a)
        {
            if (c == ' ')//공백이면 0
                v1.push_back(0);
            else//아니면 문제에 나온대로
                v1.push_back((c - 'A') * 2 + 1);
        }
        for (char c : b)
        {
            if (c == ' ')
                v2.push_back(0);
            else
                v2.push_back((c - 'A') * 2 + 1);
        }

        //이제 차이값을 abs를 써서 더하자
        int sum = 0;

        for (int i = 0; i < v1.size(); i++)
        {
            sum += abs(v1[i] - v2[i]);
        }

        cout << sum << endl;
    }

    return 0;
}
