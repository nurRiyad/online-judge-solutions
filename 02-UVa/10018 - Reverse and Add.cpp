#include<bits/stdc++.h>
using namespace std;
string add(string a,string b){
    string c;
    int carry=0,s;
    if(b.length()>a.length()){
        swap(a,b);
    }
    //cout<<a<<endl<<b<<endl;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    //cout<<a<<endl<<b<<endl;
    for(int i=0;i<a.length();i++){
        if(i<b.length()){
            s=(a[i]-'0')+(b[i]-'0')+carry;
            carry=s/10;
            s=s%10;
            c.push_back(s+'0');
        }
        else{
            s=(a[i]-'0')+carry;
            carry=s/10;
            s=s%10;
            c.push_back(s+'0');
        }
    }
    if(carry) c.push_back(carry+'0');
    reverse(c.begin(),c.end());
    return c;
}
int main()
{
    int t,n;
    string a,b;
    cin>>t;
    while(t--){
        n=0;
        cin>>a;
        while(1){
            b=a;
            reverse(a.begin(),a.end());
            if(a==b){
                cout<<n<<" "<<a<<endl;
                break;
            }
            else{
                a=add(b,a);
                n++;
            }
        }
    }
    return 0;
}
