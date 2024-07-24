#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long
#define intl long long int
#define ldbl long double
#define f(i , n) for(int i=0 ; i<n ; i++)

void solve(){
    int n , m;
    cin>>n>>m;
    string x , s;
    cin>>x>>s;

    int count=6;
    bool flag=false;
    int doublee=0;
    while(count--){
        if(x.find(s)<=x.size()){
            flag=true;
            break;
        }
        doublee++;
        x+=x;
    }
    if(flag){
        cout<<doublee<<endl;
    }else{
        cout<<-1<<endl;
    }

}

int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}