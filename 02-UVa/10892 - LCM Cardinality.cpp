#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(a==0) return b;
    else return gcd(b%a,a);
}

void finddivisor(vector<long long> &arr,long long a){
    for(long long i=1;i<=sqrt(a);i++){
        if(a%i==0){
            arr.push_back(i);
            if((a/i)!=i) arr.push_back(a/i);
        }
    }
    sort(arr.begin(),arr.end());
}

long long countPairs(vector<long long> &arr,long long n){
    long long ans=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(((arr[i]*arr[j])/gcd(arr[i],arr[j]))==n){
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    while(2){
        long long n;
        vector<long long> arr;
        cin>>n;
        if(n==0) return 0;
        finddivisor(arr,n);
        cout<<n<<" "<<countPairs(arr,n)<<endl;
    }
    return 0;

}
