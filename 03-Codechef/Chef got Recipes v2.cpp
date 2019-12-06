#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        string ar[t];
        map<string,int> mp;

        mp.insert(make_pair("00001",0));
        mp.insert(make_pair("00010",0));
        mp.insert(make_pair("00011",0));
        mp.insert(make_pair("00100",0));
        mp.insert(make_pair("00101",0));
        mp.insert(make_pair("00110",0));
        mp.insert(make_pair("00111",0));
        mp.insert(make_pair("01000",0));
        mp.insert(make_pair("01001",0));
        mp.insert(make_pair("01010",0));
        mp.insert(make_pair("01011",0));
        mp.insert(make_pair("01100",0));
        mp.insert(make_pair("01101",0));
        mp.insert(make_pair("01110",0));
        mp.insert(make_pair("01111",0));
        mp.insert(make_pair("10000",0));
        mp.insert(make_pair("10001",0));
        mp.insert(make_pair("10010",0));
        mp.insert(make_pair("10011",0));
        mp.insert(make_pair("10100",0));
        mp.insert(make_pair("10101",0));
        mp.insert(make_pair("10110",0));
        mp.insert(make_pair("10111",0));
        mp.insert(make_pair("11000",0));
        mp.insert(make_pair("11001",0));
        mp.insert(make_pair("11010",0));
        mp.insert(make_pair("11011",0));
        mp.insert(make_pair("11100",0));
        mp.insert(make_pair("11101",0));
        mp.insert(make_pair("11110",0));
        mp.insert(make_pair("11111",0));

        for(int i=0;i<t;i++){
            string s;
            cin>>s;
            bool A=false,E=false,I=false,O=false,U=false;
            for(int j=0;j<s.size();j++){
                if(s[j]=='a') A=true;
                if(s[j]=='e') E=true;
                if(s[j]=='i') I=true;
                if(s[j]=='o') O=true;
                if(s[j]=='u') U=true;
                if(A&&E&&I&&O&&U) break;
            }
            string ss="00000";

            if(A) ss[0]='1';
            if(E) ss[1]='1';
            if(I) ss[2]='1';
            if(O) ss[3]='1';
            if(U) ss[4]='1';

            ar[i]=ss;
            //cout<<ss<<endl;

            if(A) mp["10000"]++;
            if(E) mp["01000"]++;
            if(I) mp["00100"]++;
            if(O) mp["00010"]++;
            if(U) mp["00001"]++;

            if(A&&E) mp["11000"]++;
            if(A&&I) mp["10100"]++;
            if(A&&O) mp["10010"]++;
            if(A&&U) mp["10001"]++;
            if(E&&I) mp["01100"]++;
            if(E&&O) mp["01010"]++;
            if(E&&U) mp["01001"]++;
            if(I&&O) mp["00110"]++;
            if(I&&U) mp["00101"]++;
            if(O&&U) mp["00011"]++;

            if(A&&E&&I) mp["11100"]++;
            if(A&&E&&O) mp["11010"]++;
            if(A&&E&&U) mp["11001"]++;
            if(A&&I&&O) mp["10110"]++;
            if(A&&I&&U) mp["10101"]++;
            if(A&&O&&U) mp["10011"]++;
            if(E&&I&&U) mp["01101"]++;
            if(E&&I&&O) mp["01110"]++;
            if(E&&O&&U) mp["01011"]++;
            if(I&&O&&U) mp["00111"]++;

            if(A&&E&&I&&O) mp["11110"]++;
            if(A&&E&&I&&U) mp["11101"]++;
            if(A&&E&&O&&U) mp["11011"]++;
            if(A&&I&&O&&U) mp["10111"]++;
            if(E&&I&&O&&U) mp["01111"]++;

            if(A&&E&&I&&O&&U) mp["11111"]++;

        }
        int sum=0;
        for(int i=0;i<t;i++){
            string sb=ar[i],ans="00000";
            if(sb[0]=='0') ans[0]='1';
            else ans[0]='0';
            if(sb[1]=='0') ans[1]='1';
            else ans[1]='0';
            if(sb[2]=='0') ans[2]='1';
            else ans[2]='0';
            if(sb[3]=='0') ans[3]='1';
            else ans[3]='0';
            if(sb[4]=='0') ans[4]='1';
            else ans[4]='0';
            //cout<<ans<<endl;
            if(ans=="00000"){
                sum+=(t-1);
            }
            else{
                //cout<<mp[ans]<<endl;
                sum+=mp[ans];
                //cout<<"sum=="<<sum<<endl;
            }
        }
        cout<<sum/2<<endl;
    }
    return 0;
}
