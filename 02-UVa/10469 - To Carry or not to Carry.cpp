#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    long long a,b;
    while((scanf("%lld%lld",&a,&b))!=EOF){
        int c=a^b;
        cout<<c<<endl;
    }
    return 0;
}
