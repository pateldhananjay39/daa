#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 37;
    int b = 13;
    while(b)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }
    cout<<a;
}