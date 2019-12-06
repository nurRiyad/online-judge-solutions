#include<bits/stdc++.h>
using namespace std;

bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        map<int,int> mp;
        for(int i=1;i<=31;i++){
            mp.insert(make_pair(i,0));
        }
        int n;
        long long sum=0;
        cin>>n;
        while(n--){
            string ss;
            cin>>ss;
            bool A=false,E=false,I=false,O=false,U=false;
            for(int i=0;i<ss.size();i++){
                if(ss[i]=='a') A=true;
                if(ss[i]=='e') E=true;
                if(ss[i]=='i') I=true;
                if(ss[i]=='o') O=true;
                if(ss[i]=='u') U=true;

                if(A&&E&&I&&O&&U) break;
            }
            int x=0;
            if(U) x=Set(x,0);
            if(O) x=Set(x,1);
            if(I) x=Set(x,2);
            if(E) x=Set(x,3);
            if(A) x=Set(x,4);
            //cout<<x<<endl;
            mp[x]++;
        }
        for(int i=1;i<=31;i++){
            if(i==31){
                //cout<<mp[i]<<endl;
                long long n=((mp[i]*(mp[i]-1))/2);
                sum+=n;
                //cout<<sum<<endl;
            }
            for(int j=i+1;j<=31;j++){
                if(mp[i]!=0&&mp[j]!=0){
                    if(Check(i,0)||Check(j,0)){
                        if(Check(i,1)||Check(j,1)){
                            if(Check(i,2)||Check(j,2)){
                                if(Check(i,3)||Check(j,3)){
                                    if(Check(i,4)||Check(j,4)){
                                        //cout<<"i=="<<i<<" j=="<<j<<endl;
                                        //cout<<"mp[i]=="<<mp[i]<<" mp[j]=="<<mp[j]<<endl;
                                        sum+=(mp[i]*mp[j]);
                                        //cout<<sum<<endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
