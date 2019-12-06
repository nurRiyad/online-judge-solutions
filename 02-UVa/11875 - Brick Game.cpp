#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int s;
        cin>>s;
        int arr[s];
        for(int j=0;j<s;j++){
            cin>>arr[j];
        }
        sort(arr,arr+s);
        cout<<"Case "<<i<<": "<<arr[(s/2)]<<endl;
    }
}
