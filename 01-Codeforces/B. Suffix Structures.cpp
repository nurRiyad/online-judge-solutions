#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string a,b;
    cin>>a>>b;
    if(a.size()<b.size()){
        cout<<"need tree"<<endl;
        return 0;
    }
    else if(a.size()==b.size()){
        int ar[27],br[27];
        memset(ar,0,sizeof(ar));
        memset(br,0,sizeof(br));
        for(int i=0;i<a.size();i++){
            int x=a[i]-'a';
            int y=b[i]-'a';
            ar[x]++;
            br[y]++;
        }
        for(int i=0;i<27;i++){
            if(ar[i]!=br[i]){
                cout<<"need tree"<<endl;
                return 0;
            }
        }
        cout<<"array"<<endl;
        return 0;
    }
    else{
        int g=0;
        for(int i=0;i<=a.size();i++){
            if(a[i]==b[g]){
                g++;
                if(g==b.size()) break;
            }
        }
        if(g==b.size()){
            cout<<"automaton"<<endl;
            return 0;
        }
        int ar[27],br[27];
        memset(ar,0,sizeof(ar));
        memset(br,0,sizeof(br));
        for(int i=0;i<a.size();i++){
            int x=a[i]-'a';
            ar[x]++;
        }
        for(int i=0;i<b.size();i++){
            int x=b[i]-'a';
            br[x]++;
        }
        for(int i=0;i<27;i++){
            if(br[i]>ar[i]){
                cout<<"need tree"<<endl;
                return 0;
            }
        }
        cout<<"both"<<endl;
        return 0;
    }
    return 0;
}
