#include <iostream>
using namespace std;
 
int main()
{
    int x;
    cin >> x;
 
    int i = 0;
    while (x > 0)
    {
        if (x >= 5)
        {
            i++;
            x -= 5;
        }else if(x==4){
            i++;
            break;
        }
        else if(x==3){
            i++;
            break;
        }
        else if(x==2){
            i++;
            break;
        }
        else if(x==1){
            i++;
            break;
        }
    }
    cout<<i<<endl;
}