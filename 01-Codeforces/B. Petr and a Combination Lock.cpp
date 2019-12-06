#include<bits/stdc++.h>
using namespace std;

bool dp(int n,int ar[],int step,int sum){
        //cout<<"n=="<<n<<endl<<"step=="<<step<<endl<<"sum=="<<sum<<endl;
            if(step==n){
            if(sum%360==0) return true;
            else return false;
        }
        else{
            return (dp(n,ar,step+1,sum+ar[step+1]))||(dp(n,ar,step+1,sum-ar[step+1]));
        }
}

int main()
{
    int n,step=0,sum=0;
    cin>>n;
    int ar[n];
    for(int i=1;i<=n;i++) cin>>ar[i];
    if(dp(n,ar,step,sum)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
