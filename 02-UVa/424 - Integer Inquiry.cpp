#include<bits/stdc++.h>
using namespace std;
string add(string a,string b)
{
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
    string sum="0",b;
    while(5){
        cin>>b;
        if(b.length()==1&&b[0]=='0'){
            cout<<sum<<endl;
            return 0;
        }
        else{
            sum=add(sum,b);
        }

    }
    return 0;
}
