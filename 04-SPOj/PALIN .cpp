#include<bits/stdc++.h>
#define ll long long
using namespace std;

string add(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();

    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');

        // Calculate carry for next step
        carry = sum/10;
    }

    // Add remaining digits of larger number
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');

    // reverse resultant string
    reverse(str.begin(), str.end());

    return str;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll t;
    cin>> t;
    while(t--){
        string ss,s;
        cin>>ss;
        bool abc=true;
        for(ll i=0;i<ss.size();i++){
            if(ss[i]=='0'&&abc) continue;
            else{
                s.push_back(ss[i]);
                abc=false;
            }
        }
        if(s=="9"){
            cout<<11<<endl;
            continue;
        }
            ll x=s.size()/2;
            ll flag=0;
            for(ll i=0;i<x;i++){
                if(s.size()%2==0){
                    if((s[i]-'0')==(s[i+x]-'0')) continue;
                    else if((s[i]-'0')>(s[i+x]-'0')){
                        flag=1;
                        break;
                    }
                    else{
                        flag=2;
                        break;
                    }
                }
                else{
                    if((s[i]-'0')==(s[i+x+1]-'0')) continue;
                    else if((s[i]-'0')>(s[i+x+1]-'0')){
                        flag=1;
                        break;
                    }
                    else{
                        flag=2;
                        break;
                    }
                }
            }
            if(flag==0) flag=2;
            //cout<<"flag=="<<flag<<endl;
            if(flag==1){
                for(ll i=0;i<x;i++){
                    if(s.size()%2==0) s[i+x]=s[i];
                    else s[i+x+1]=s[i];
                }
                cout<<s<<endl;
                continue;
            }
            else{
                string st;
                if(s.size()%2==1) x++;
                for(ll i=0;i<x;i++) st.push_back(s[i]);
                st=add(st,"1");
                if(s.size()%2==1) x--;
                for(ll i=x-1;i>=0;i--) st.push_back(st[i]);
                cout<<st<<endl;
                continue;
            }
    }
    return 0;
}

