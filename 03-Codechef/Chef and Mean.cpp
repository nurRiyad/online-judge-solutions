#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        cin>>n;
        vector<long long> v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        if(sum%n==0){
            long long x=sum/n,flag=1;
            for(long long i=0;i<v.size();i++){
                if(v[i]==x){
                    cout<<i+1<<endl;
                    flag=0;
                    break;
                }
            }
            if(flag) cout<<"Impossible"<<endl;
        }
        else cout<<"Impossible"<<endl;
    }
    return 0;
}
