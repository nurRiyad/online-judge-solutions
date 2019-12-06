#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            cout<<"NO"<<endl;
            continue;
        }
        else if(a>2){
            string s;
            cin>>s;
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<s[0]<<" ";
            for(int i=1;i<s.size();i++) cout<<s[i];
            cout<<endl;
        }
        else{
            int b,c;
            cin>>b;
            c=b%10;
            b=b/10;
            if(b<c){
                cout<<"YES"<<endl;
                cout<<2<<endl;
                cout<<b<<" "<<c<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;

}
