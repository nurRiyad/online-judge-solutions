#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int l,u,mx=0,n;
        cin>>l>>u;
        for(int i=l;i<=u;i++){
            int c=0;
            for(int j=1;j<=sqrt(i);j++){
                if(i%j==0){
                    if(j==sqrt(i)){
                        c++;
                    }
                    else{
                        c+=2;
                    }
                }
            }
            if(mx<c){
                mx=c;
                n=i;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<n<<" has a maximum of "<<mx<<" divisors."<<endl;
    }
    return 0;
}
