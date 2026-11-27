#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 1234;
    long n=0;
    long number = 0;
    bool negative = false;
    if(num<0)
    {
        negative = true;
        n = num * (-1);
    }
    while(n>0)
    {
        number = number*10 + n%10;
        n /= 10;
    }
    if(number>INT_MAX || (negative && number*(-1)<INT_MIN))
    cout<<"Out of range";

    if(negative)
    number *= -1;
    cout<<number<<" ";
}