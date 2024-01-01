#include<bits/stdc++.h>
using namespace std;

int maxNonAdjSum(vector<int> &nums){
    int n =  nums.size();
    vector<vector<int>> dp(n,vector<int>(2));

    dp[0][0] = 0;
    dp[0][1] = nums[0];

    for(int i=1;i<n;i++){
        for(int check=0;check<=1;check++){
            if(check==0){
                int max = INT_MIN;
            } else{

            }
        }
    }

    return max(dp[n-1][1],dp[n-1][0]);
}

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    
    cout << maxNonAdjSum(arr) << endl;
}

int main(){
    int tc; cin >> tc;

    while(tc--){
        solve();
    }
}