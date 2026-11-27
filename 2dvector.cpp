#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m = 2;
    int n = 3;
    int count = 1;
    vector<vector<int>>v(m,vector<int>(n,0));
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         v[i][j] = count++;
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            v[j][i] = count++;
        }
    }
    for(auto i:v)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}