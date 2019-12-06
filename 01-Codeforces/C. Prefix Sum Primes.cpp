#include<bits/stdc++.h>
using namespace std;
long long prime[2*200009];

void sieve(long long sum){
    prime[1]=1;
    for(long long i=2;i*i<=sum;i++){
        for(long long j=i*2;j<=sum;j+=i){
            prime[j]=1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long n,n1=0,n2=0;
    long long sum=0;
    cin>>n;
    vector<long long> v(n),ans;
    for(long long i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1) n1++;
        else n2++;
        sum+=v[i];
    }
    sieve(sum);
    long long d=0;
    for(long long i=1;i<n;i++){
        if(n1==0||n2==0) break;
        if(prime[d+1]==0){
            ans.push_back(1);
            n1--;
            d+=1;
        }
        else{
            ans.push_back(2);
            n2--;
            d+=2;
        }
    }
    for(int i=0;i<n1;i++) ans.push_back(1);
    for(int i=0;i<n2;i++) ans.push_back(2);
    for(int i=0;i<ans.size();i++){
        if(i!=ans.size()-1) cout<<ans[i]<<" ";
        else cout<<ans[i]<<endl;
    }
    return 0;
}
