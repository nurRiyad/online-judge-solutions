#include<bits/stdc++.h>
using namespace std;

bool isdivisible(string a,int b){
    if(b==1) return true;
    if(b==2){
        int n=a[a.size()-1]-'0';
        if(n%2==0) return true;
        else return false;
    }
    if(b==3){
        int sum=0;
        for(int i=0;i<a.size();i++){
            int n=a[i]-'0';
            sum+=n;
        }
        if(sum%3==0) return true;
        else return false;
    }
    if(b==4){
        int n=(a[a.size()-1]-'0')+((a[a.size()-2]-'0')*10);
        if(n%4==0) return true;
        else return false;
    }
    if(b==5){
        int n=(a[a.size()-1]-'0');
        if(n==5||n==0) return true;
        else return false;
    }
    if(b==6){
        if(isdivisible(a,2)&&isdivisible(a,3)) return true;
        else return false ;
    }
    if(b==8){
        int n=(a[a.size()-1]-'0')+((a[a.size()-2]-'0')*10)+((a[a.size()-3]-'0')*100);
        if(n%8==0) return true;
        else return false;
    }
    if(b==9){
        int sum=0;
        for(int i=0;i<a.size();i++){
            int n=a[i]-'0';
            sum+=n;
        }
        if(sum%9==0) return true;
        else return false;
    }
    if(b==10){
        int n=a[a.size()-1]-'0';
        if(n==0) return true;
        else return false;
    }
    if(b==12){
        if(isdivisible(a,3)&&isdivisible(a,4)) return true;
        else return false;
    }
    if(b==11){
        int sum=0;
        for(int i=0;i<a.size();i++){
            int n=a[i]-'0';
            if(i%2==0) sum+=n;
            else sum-=n;
        }
        if(sum%11==0) return true;
        else return false;
    }
    if(b==7){
        long long sum=0;
        for(int i=a.size()-1,j=1;i>=0;i--){
            int n=a[i]-'0';
            if(j==1){
                sum+=n;
                j++;
            }
            if(j==2){
                sum+=(n*3);
                j++;
            }
            if(j==3){
                sum+=(n*2);
                j++;
            }
            if(j==4){
                sum+=(n*6);
                j++;
            }
            if(j==5){
                sum+=(n*4);
                j++;
            }
            if(j==6){
                sum+=(n*5);
                j=1;
            }
        }
        if(sum%7==0) return true;
        else return false;
    }
}

int main()
{
    ofstream myfile;
    myfile.open("riyad.txt");
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b,c;
        vector<int> ar;
        cin>>a;
        int x;
        cin>>x;
        for(int i=0;i<x;i++){
            int d;
            cin>>d;
            ar.push_back(d);
        }
        int flag=1;
        for(int i=0;i<ar.size();i++){
            if(!isdivisible(a,ar[i])){
                flag=0;
                myfile<<a<<" - Simple."<<endl;
                break;
            }
        }
        if(flag) myfile<<a<<" - Wonderful."<<endl;
    }
    return 0;
}
