#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=0;
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n>>b;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int sum=0,c=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum>b){
                break;
            }
            else{
                c++;
            }
        }
        j++;
        cout<<"Case #"<<j<<": "<<c<<endl;
    }

    return 0;
}
