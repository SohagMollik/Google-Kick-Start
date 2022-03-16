#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t,c=1;
    cin>>t;
    while(t--)
    {
        char s[105];
        cin>>s;
        int len=strlen(s);
        char last=s[len-1];
        if(last=='a'||last=='e'||last=='i'||last=='o'||last=='u')
            cout<<"Case #"<<c<<": "<<s<<" is ruled by Alice.\n";
        else if(last=='y')
            cout<<"Case #"<<c<<": "<<s<<" is ruled by nobody.\n";
        else
            cout<<"Case #"<<c<<": "<<s<<" is ruled by Bob.\n";
        c++;
    }

    return 0;
}
