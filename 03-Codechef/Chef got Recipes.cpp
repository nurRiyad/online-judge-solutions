#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a[n];
        for(int j=0;j<n;j++){
            string w;
            cin>>w;
            int br[5];
            memset(br,0,sizeof(br));
            for(int i=0;i<w.size();i++){
                if(w[i]=='a') br[0]++;
                if(w[i]=='e') br[1]++;
                if(w[i]=='i') br[2]++;
                if(w[i]=='o') br[3]++;
                if(w[i]=='u') br[4]++;
                if(br[0]>0&&br[1]>0&&br[2]>0&&br[3]>0&&br[4]>0) break;
            }
            for(int i=0;i<5;i++){
                if(br[i]>0&&i==0) a[j].push_back('a');
                if(br[i]>0&&i==1) a[j].push_back('e');
                if(br[i]>0&&i==2) a[j].push_back('i');
                if(br[i]>0&&i==3) a[j].push_back('o');
                if(br[i]>0&&i==4) a[j].push_back('u');
            }
            //cout<<a[j]<<endl;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i!=j){
                    int ar[5];
                    memset(ar,0,sizeof(ar));
                    string s=a[i]+a[j];
                    for(int k=0;k<s.size();k++){
                        if(s[k]=='a') ar[0]++;
                        if(s[k]=='e') ar[1]++;
                        if(s[k]=='i') ar[2]++;
                        if(s[k]=='o') ar[3]++;
                        if(s[k]=='u') ar[4]++;
                    }
                    if(ar[0]>0&&ar[1]>0&&ar[2]>0&&ar[3]>0&&ar[4]>0) sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
