#include<bits/stdc++.h>
using namespace std;
int arr[30];


int main()
{
    int n,k,mx=0;
    cin>>n>>k;
    string s,a;
    cin>>s;
    for(int i=0;i<n;i++){
        int b=k;
        while(b>1&&s[i]==s[i+1]){
            i++;
            b--;
        }
        if(b==1) arr[s[i]-97]++;
    }
    sort(arr,arr+30);
    cout<<arr[29]<<endl;
    return 0;
}
