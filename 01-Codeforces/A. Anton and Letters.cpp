#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1050];
    int b[30];
    for(int i=0;i<30;i++){
        b[i]=0;
    }
    int sum=0;
    scanf("%[^\n]",a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]>=97&&a[i]<=122){
            b[a[i]-97]++;
        }
    }
    for(int i=0;i<26;i++){
        if(b[i]){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
