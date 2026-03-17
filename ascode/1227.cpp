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
        int n;
        cin >> n;//원소의 개수
        vector<int> v(n + 1);//여기는 복잡하니까 1번부터 시작 즉 0은 기록 안한다
        for (int i = 1; i <= n; i++) 
            cin >> v[i];//원소만큼 벡터에 기록

        int mx = 0, cur = 0;//최고 기록, 현재 합
        int s = 1, as = 1, ae = 1;//시작 지점, 기록 때의 시작점, 기록떄의 끝점

        for (int i = 1; i <= n; i++) 
        {
            // 현재 숫자를 더하는게 손해면 새로 시작
            if (cur + v[i] <= v[i]) 
            {
                cur = v[i];
                s = i;//시작지점을 바꾼다
            }
            else
                cur += v[i];//아니면 현재 합을 계속 더하기

            if (cur > mx)//현재 기록이 최고기록을 넘기면
            {
                mx = cur;//기록 갱신
                as = s;//시작점과 끝점을 as, ae로기록한다
                ae = i;
            }
            else if (cur == mx) //같으면
            {
                if (s > as) //시작지점이 뒤에 있는걸로 선택하다
                {
                    as = s;
                    ae = i;
                }
            }
        }

        cout << as << " " << ae << " " << mx << "\n";
    }

    return 0;
}
