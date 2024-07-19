#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long
#define intl long long int
#define ldbl long double

void solve(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0 ; i<n ; i++){
        int a;
        cin>>arr[i];
    }
    if(arr[0]!=1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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

/*
 1 2 3 4 5
  2 1 3 4 5
3 1 2 4 5
3 1 4 2 5




*/