#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ar[26];
        for(int i=0;i<26;i++) ar[i]=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            set<char> ss;
            set<char>::iterator it;
            string s;
            cin>>s;
            for(int j=0;j<s.size();j++){
                ss.insert(s[j]);
            }
            for(it=ss.begin();it!=ss.end();it++){
                ar[*it-97]++;
            }
        }
        int sum=0;
        for(int i=0;i<26;i++){
            if(ar[i]==n) sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
