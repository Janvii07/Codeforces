#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main()
{
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
 
    string str_1, str_2;
 
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str_1 += char(str1[i] - 'A' + 'a'); // append lowercase
        }
        else
        {
            str_1 += str1[i]; // append as is
        }
    }
 
    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str_2 += char(str2[i] - 'A' + 'a');
        }
        else
        {
            str_2 += str2[i];
        }
    }
 
    if (str_1 > str_2)
        cout << 1;
    else if (str_1 < str_2)
        cout << -1;
    else
        cout << 0;
}