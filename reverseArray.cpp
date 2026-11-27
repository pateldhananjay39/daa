//rotation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k = 1; 
    vector<int>v={1,2,3,4,5,6};
    int n = v.size();
    int temp = v[n-1];
    for(int i=n-1;i>0;i--)
    {
        v[i] = v[i-1];
    }
    v[0] = temp;
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}