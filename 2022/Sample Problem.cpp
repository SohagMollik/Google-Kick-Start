#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
     int t,c=1;
     cin>>t;
     while(t--)
     {
         int n,m,sum=0,x;
         cin>>n>>m;
         for(int i=0;i<n;i++)
         {
             cin>>x;
             sum+=x;
         }
         cout<<"Case #"<<c<<": "<<sum%m<<endl;
         c++;
     }

    return 0;
}
