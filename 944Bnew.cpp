#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;
void solve()
{
    int i;
    string S;
    cin >> S;
    if (count(S.begin(), S.end(), S[0]) == S.size())
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (i = 1; i < S.size(); i++)
        {
            if (S[i] != S[i - 1])
            {
                swap(S[i], S[i - 1]);
                break;
            }
        }
        cout << S << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}