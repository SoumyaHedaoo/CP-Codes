#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long
#define intl long long int
#define ldbl long double


void solve(){
    int n , x;
    cin>>n>>x;

    int gap=0;
    int ini=0;
    while(n>0){
        int a;
        cin>>a;

        gap=max(gap , a-ini);
        
        ini=a;
        n--;
    }
    gap=max(gap , (x-ini)*2);
    
    cout<<gap<<endl;
}

int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


