#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]>s[i+1]){
            s.erase(s.begin()+i);
            cout<<s<<endl;
            return 0;
        }
    }
    s.erase(s.end()-1);
    cout<<s<<endl;
    return 0;
}
