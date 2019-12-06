#include<bits/stdc++.h>
using namespace std;
int ar[2001][2001];


int mod(int a,int n,int m){
    if(ar[a][n]!=-1) return ar[a][n];
    else if(n==0) return 1;
    else if(n==1) return a%m;
    else if(n%2==0){
        ar[a][n]=(mod(a,n/2,m)*mod(a,n/2,m))%m;
        return ar[a][n];
    }
    else{
        ar[a][n]=(mod(a,1,m)*mod(a,n-1,m))%m;
        return ar[a][n];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0;i<2001;i++){
        for(int j=0;j<2001;j++){
            ar[i][j]=-1;
        }
    }

    int n,sum=0;
    cin>>n;
    for(int i=1;i<n;i++){
        set<int> s;
        for(int j=1;j<n;j++){
            //cout<<i<<j<<n<<endl;
            int x=mod(i,j,n);
            //cout<<x<<" ";
            s.insert(x);
        }
        //cout<<"size--"<<s.size()<<endl;
        if(s.size()==(n-1)) sum++;
    }
    cout<<sum<<endl;
    return 0;
}
