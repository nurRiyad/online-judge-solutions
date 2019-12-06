#include<bits/stdc++.h>
using namespace std;

string add(string x,string y){
    string a,b;
    if(x.size()>y.size()){
        a=x;
        b=y;
    }
    else{
        a=y;
        b=x;
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int carry=0,i=0;
    string s;
    for(i;i<b.size();i++){
        char ch='0'+(((a[i]-'0')+(b[i]-'0')+carry)%10);
        s.push_back(ch);
        carry=((a[i]-'0')+(b[i]-'0')+carry)/10;
    }
    for(i;i<a.size();i++){
        char ch='0'+(((a[i]-'0')+carry)%10);
        s.push_back(ch);
        carry=((a[i]-'0')+carry)/10;
    }
    if(carry!=0) s.push_back(carry+'0');
    reverse(s.begin(),s.end());
    return s;
}

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
    if(n%2==0&&s[n/2]!='0'){
        string a,b;
        for(int i=0;i<n/2;i++) a.push_back(s[i]);
        for(int i=n/2;i<n;i++) b.push_back(s[i]);
        string ans=add(a,b);
        cout<<ans<<endl;
        //cout<<"here"<<endl;
        return  0;
    }
    else if(n%2==1&&s[n/2]!='0'){
        string a,b;
        for(int i=0;i<=n/2;i++) a.push_back(s[i]);
        for(int i=n/2+1;i<n;i++) b.push_back(s[i]);
        string ans1=add(a,b);
        a.clear();
        b.clear();
        for(int i=0;i<n/2;i++) a.push_back(s[i]);
        for(int i=n/2;i<n;i++) b.push_back(s[i]);
        string ans2=add(a,b);
        cout<<min(ans1,ans2)<<endl;
        //cout<<"here1"<<endl;
        return 0;
    }
    else{
        int x,y,k=n/2;
        string a,b;
        while(s[k]=='0'){
            x=k;
            k--;
        }
        k=n/2;
        while(s[k]=='0'){
            y=k;
            k++;
        }
        if(x==1){
            for(int i=0;i<=y;i++) a.push_back(s[i]);
            for(int i=y+1;i<n;i++) b.push_back(s[i]);
            string s1=add(a,b);
            cout<<s1<<endl;
            //cout<<"here2"<<endl;
            return 0;
        }
        //cout<<x<<" "<<y<<endl;
        for(int i=0;i<=y;i++) a.push_back(s[i]);
        for(int i=y+1;i<n;i++) b.push_back(s[i]);
        string s1=add(a,b);
        //cout<<a<<" "<<b<<" "<<s1<<endl;
        a.clear();
        b.clear();
        for(int i=0;i<x-1;i++) a.push_back(s[i]);
        for(int i=x-1;i<n;i++) b.push_back(s[i]);
        string s2=add(a,b);
        if(s1.size()>s2.size()) cout<<s2<<endl;
        else if(s1.size()<s2.size()) cout<<s1<<endl;
        else cout<<min(s1,s2)<<endl;
        return 0;
    }
    return 0;
}
