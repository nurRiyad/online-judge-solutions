#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    getline(cin,a);
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]>='A'&&a[i]<='z'){
            char ch=a[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y'){
                 cout<<"YES"<<endl;
                 return 0;
            }
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='Y'){
                 cout<<"YES"<<endl;
                 return 0;
            }
            break;
        }
        else continue;
    }
    cout<<"NO"<<endl;
    return 0;
}
