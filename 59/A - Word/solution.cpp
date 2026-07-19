#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
 
    int lowcnt = 0;
    int uppercnt = 0;
 
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            uppercnt++;
        }
        else
        
            lowcnt++;
    }
    string ans = "";
 
    if (lowcnt >= uppercnt)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z'){
                ans += s[i];
            }else ans += s[i] - 'A' + 'a';
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z') ans+=s[i];
            else ans += s[i] - 'a' + 'A';
        }
    }
    cout<<ans<<endl;
}