#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string num = "112223374";
    string num = "14";
    int r=0;
    for(int i=0;i<num.length();i++)
    {
        r = ((r*10)+(num[i]-'0'))%7;
    }
    if(r==0)
    cout<<"Divisible by 7";
    else 
    cout<<"Not";

}