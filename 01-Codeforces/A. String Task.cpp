#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[120],b[220];
    cin>>a;
    for(int i=0;i<strlen(a);i++){
        if(a[i]>=65&&a[i]<=90){
            a[i]=a[i]+32;
        }
    }
    //cout<<a<<endl;
    int k=0;
    for(int j=0;j<strlen(a);j++){
        if(a[j]!='a'&&a[j]!='e'&&a[j]!='i'&&a[j]!='o'&&a[j]!='u'&&a[j]!='y'){
            b[k]='.';
            k++;
            b[k]=a[j];
            k++;

        }
    }
    b[k]='\0';
    cout<<b<<endl;
    return 0;
}
