#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long
#define intl long long int
#define ldbl long double
#define f(i , n) for(int i=0 ; i<n ; i++)

void solve(){
    int n;
    cin>>n;

    unordered_map<int , int>freq;
    bool flag=true;
    int cap=(n+1)/2;
    while(n--){
        int a;
        cin>>a;
        freq[a]++;


        if(freq.size()>2){
            flag=false;
        }
    }
    if(freq.size()==2){
       for( auto x : freq){
        if(x.second>cap){
            flag=false;
            break;
        }
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