#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    string ss;
    cin >> ss;
 
    string ans = "YES";
    if (s.length() != ss.length())
        ans = "NO";
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ss[ss.length() - 1 - i])
            {
                ans = "NO";
                break;
            }
        }
    }
 
    cout << ans;
}