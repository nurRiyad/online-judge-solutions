#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,k,mov=0;
    cin>>n>>k;
    mov+=n;
    if((n/2)>=k){
        mov+=(k-1);
    }
    else{
        mov+=(n-k);
    }
    mov+=(n-1);
    mov+=((n-1)*1);
    mov+=2;
    cout<<mov<<endl;
    return 0;
}
