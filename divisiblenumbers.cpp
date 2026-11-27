#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5;
    int y = 3;
    while(true)
    {
        if(++x%y == 0)
        {
            cout<<x;
            break;
        }
    }
    
}