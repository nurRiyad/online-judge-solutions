#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1009
int ar[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,k,sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ar[a]++;
    }
    int x=ceil(n/2.0);
    //cout<<"x=="<<x<<endl;
    sort(ar,ar+mx,greater<int>());
    //for(int i=0;i<10;i++) cout<<ar[i]<<" ";
    //cout<<endl;
    for(int i=0;i<k;i++){
        if(ar[i]%2==0) {sum+=ar[i]; x-=(ar[i]/2);}
        else {sum+=(ar[i]-1); x-=(ar[i]/2);}
    }
    //cout<<"x=="<<x<<endl;
    for(int i=0;i<k;i++){
        if(x>0){
            if(ar[i]%2==1){
                sum++;
                x--;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
