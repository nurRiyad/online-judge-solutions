#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> atck,dfnc,ans;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            atck.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            dfnc.push_back(x);
        }
        for(int i=0;i<atck.size();i++){
            if(i==0){
                if((atck[1]+atck[atck.size()-1])<dfnc[0]){
                    ans.push_back(dfnc[0]);
                }
            }
            else if(i==atck.size()-1){
                if((atck[0]+atck[atck.size()-2])<dfnc[dfnc.size()-1]){
                    ans.push_back(dfnc[dfnc.size()-1]);
                }
            }
            else{
                if((atck[i+1]+atck[i-1])<dfnc[i]){
                    ans.push_back(dfnc[i]);
                }
            }
        }
        if(ans.size()==0) cout<<-1<<endl;
        //for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
        else{
            sort(ans.begin(),ans.end());
            cout<<ans[ans.size()-1]<<endl;
        }
    }
    return 0;
}
