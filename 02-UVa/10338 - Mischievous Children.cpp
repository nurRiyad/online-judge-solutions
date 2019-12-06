#include<bits/stdc++.h>
using namespace std;

long long factorial(long long a){
    long long res=1;
    for(long long i=2;i<=a;i++){
        res=res*i;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int arr[105];
        for(int l=0;l<105;l++) arr[l]=0;
        string a;
        cin>>a;
        for(int j=0;j<a.size();j++){
            int x=a[j];
            arr[x]++;
        }
        long long ans=factorial(a.size());
        //cout<<ans<<endl;
        for(int k=50;k<100;k++){
            if(arr[k]>1){
                ans=ans/factorial(arr[k]);
            }
        }
        cout<<"Data set "<<i<<": "<<ans<<endl;
    }
    return 0;
}
