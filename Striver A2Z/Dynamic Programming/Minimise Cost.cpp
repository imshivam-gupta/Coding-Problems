#include<bits/stdc++.h>
using namespace std;

int minimizeCost(int n, int k , vector<int> &arr){
    vector<int> dp(n,INT_MAX);
    dp[n-1] = 0;

    for(int i=n=2;i>=0;i--){
        for(int j=1;j<=k;j++){
            if(i+j<n) dp[i] = min(dp[i],abs(arr[i]-arr[i+j])+dp[i+j]);
        }
    }

    return dp[0];
}

void solve(){
    int n,k; cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    
    cout << minimizeCost(n,k,arr) << endl;
} 


int main(){
    int tc; tc =1;
    while(tc--) solve();
}