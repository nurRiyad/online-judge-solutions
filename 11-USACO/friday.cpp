/*
ID: alasadn1
TASK: friday
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

bool leapYear(int n){
    if(n%4==0){
        if(n%100==0){
            if(n%400==0) return true;
            else return false;
        }
        else return true;
    }
    else return false;
}

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");

    int n,k=0;
    fin>>n;
    int ar[7];
    memset(ar,0,sizeof(ar));
    vector<int> v;
    for(int i=0,j=1900;i<n;i++,j++){
        if(leapYear(j)){
            k+=13;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=29;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=30;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=30;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=30;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=30;
            v.push_back(k);
            k+=18;
        }
        else{
            k+=13;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=28;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=30;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=30;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=30;
            v.push_back(k);
            k+=31;
            v.push_back(k);
            k+=30;
            v.push_back(k);
            k+=18;
        }
    }
    //cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        //cout<<v[i]<<" "<<v[i]%7<<endl;
        if(v[i]%7==1) ar[1]++;
        if(v[i]%7==2) ar[2]++;
        if(v[i]%7==3) ar[3]++;
        if(v[i]%7==4) ar[4]++;
        if(v[i]%7==5) ar[5]++;
        if(v[i]%7==6) ar[6]++;
        if(v[i]%7==0) ar[0]++;
    }
    fout<<ar[6]<<" "<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<" "<<ar[3]<<" "<<ar[4]<<" "<<ar[5]<<endl;
    return 0;
}
