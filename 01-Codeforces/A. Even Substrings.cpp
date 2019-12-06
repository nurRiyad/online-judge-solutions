#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long n,sum=0;
    cin>>n;
    string s;
    cin>>s;
    for(long long i=0;i<s.size();i++){
        long long x=s[i]-'0';
        //cout<<x<<endl;
        if(x%2==0){
            sum+=(i+1);
        }
    }
    cout<<sum<<endl;
    return 0;
}
