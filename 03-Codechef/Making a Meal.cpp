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
        int n,c=0,o=0,d=0,e=0,h=0,f=0;
        cin>>n;
        while(n--){
            string s;
            cin>>s;
            for(int i=0;i<s.size();i++){
                if(s[i]=='c') c++;
                if(s[i]=='o') o++;
                if(s[i]=='d') d++;
                if(s[i]=='e') e++;
                if(s[i]=='h') h++;
                if(s[i]=='f') f++;
            }
        }
        c=c/2;
        e=e/2;
        cout<<min(min(min(min(min(c,o),d),e),h),f)<<endl;
    }
    return 0;
}
