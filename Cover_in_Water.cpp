#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long
#define intl long long int
#define ldbl long double
#define f(i , n) for(int i=0 ; i<n ; i++)

void solve(){
    int n , count=0 , hash=0;
    cin>>n;

    string str;
    cin>>str;

    f(i , n){
        if(str[i]=='.'){
            count++;
            if(count==3){
                break;
            }
        }else{
            hash++;
            count=0;
        }
    }
    if(count==3){
        cout<<2<<endl;
    }else{
        cout<<n-hash<<endl;
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