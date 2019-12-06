#include<bits/stdc++.h>
using namespace std;
int ar[10000000];

int min(int a,int b,int c,int d,int e){
 return min(min(min(min(a,b),c),d),e);
}

int mini(int n){
    if(n==1||n==5||n==10||n==20||n==100) return 1;
    else if(n==0) return 0;
    else if(n<0) return INT_MAX;
    else {
        if(ar[n]==-1){
            ar[n]=1+min(mini(n-1),mini(n-5),mini(n-10),mini(n-20),mini(n-100));
            return ar[n];
        }
        else return ar[n];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    memset(ar,-1,sizeof(ar));
    int n;
    cin>>n;
    cout<<mini(n)<<endl;
    return 0;
}
