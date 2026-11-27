#include<bits/stdc++.h>
using namespace std;
bool isPrime(int p)
{
    if (p<2) return false;
    if(p%2==0 || p%3==0){return false;}
    for(long i=5;i<=p/i;i+=6)
    {
        if(p%i==0 || p%(i+2)==0){
            return false;
        }
    }
    return true;
}
int main()
{
    long p = 101;
    if (p<2) return false;
    if (p == 2 || p == 3) return true;
    if(p%2==0 || p%3==0){return false;}
    for(long i=5;i<=p/i;i+=6)
    {
        if(p%i==0 || p%(i+2)==0){
            return false;
        }
    }
    return true;
}