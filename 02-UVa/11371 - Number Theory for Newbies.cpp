#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    while(cin>>a){
        long long x=0,y=0;
        vector<long long> arr;
        for(long long i=0;i<a.size();i++){
            long long x=a[i]-'0';
             arr.push_back(x);
        }
        sort(arr.begin(),arr.end(),greater<long long>());
        for(long long i=arr.size()-1,j=1;i>=0;i--,j=j*10){
            x=x+(arr[i]*j);
        }
        sort(arr.begin(),arr.end());
        long long k=0;
        while(arr[k]==0) k++;
        swap(arr[0],arr[k]);
        for(long long i=arr.size()-1,j=1;i>=0;i--,j=j*10){
            y=y+(arr[i]*j);
        }
        if(x>y) cout<<x<<" - "<<y<<" = "<<x-y<<" = 9 * "<<(x-y)/9<<endl;
        else cout<<y<<" - "<<x<<" = "<<y-x<<" = 9 * "<<(y-x)/9<<endl;
    }
    return 0;
}
