#include<bits/stdc++.h>
using namespace std;

int frogJump(int n,vector<int> &arr){
    vector<int> dp(n,INT_MAX);

    dp[n-1] = 0;

    for(int i=n-2;i>=0;i--){
        int way1 = abs(arr[i]-arr[i+1])+dp[i+1];
        int way2 = (i+2<n)?abs(arr[i]-arr[i+2])+dp[i+2] : INT_MAX;
        dp[i]=min(way1,way2);
    }

    return dp[0];
}


void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << frogJump(n,arr) << endl;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}