#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long
#define intl long long int
#define ldbl long double
#define f(i , n) for(int i=0 ; i<n ; i++)

void solve(){
    int n , k;
    cin>>n>>k;
    
    bool flag=false;
    
    while(n--){
        int a;
        cin>>a;
        
        if(!flag && a==k){
            flag=true;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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