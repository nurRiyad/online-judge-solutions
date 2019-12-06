#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,cnt=0;
    cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    c=arr[b-1];
    for(int i=0;i<a;i++){
        if(arr[i]>=c&&arr[i]>0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;

}
