#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxsum=INT_MIN,sum=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<"YES"<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++){
        if((v[i]==v[i-1])&&(i==v.size()-1)) sum+=2;
        else if(v[i]==v[i-1]) sum++;
        else{
            sum++;
            if(sum>maxsum) maxsum=sum;
            sum=0;
        }
    }
    if(sum!=0){
        if(maxsum<sum) maxsum=sum;
    }
    if(n%2==0){
        if(maxsum>(n/2)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else{
        int x=n-(n/2);
        if(maxsum>x) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
