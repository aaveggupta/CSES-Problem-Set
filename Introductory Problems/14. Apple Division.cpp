/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// In this problem we have to minimize the subset sum diff
// i.e. sum(s1) - sum(s2) = min
//      sum(s1) = sum(S) - sum(s2)

// We will try to find to all the subset of vector and try to take sum of them
// and minimize their diff, This is a brute force approach

// For Bigger N, we can use DP.

// USING Dynamic Programming (Useful when N is bigger)
int subsetSum(vector <int> v, int sum) {
	vector <vector<bool>> dp(v.size() + 1, vector<bool>(sum));
	
	for (int i = 0; i <= sum; i++) {
		dp[0][i] = false;
	}
	for (int i = 0; i <= v.size(); i++) {
		dp[i][0] = true;
	}
	
	for (int i = 1; i <= v.size(); i ++) {
		for (int j = 1; j <= sum; j ++) {
			if (v[i - 1] <= j) {
				dp[i][j] = dp[i - 1][j - v[i - 1]] || dp[i - 1][j];
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	
	int ans = INT_MAX;
	for (int i = 0; i <= sum / 2; i ++) {
		if (dp[v.size()][i]) {
			int e = sum - (2 * i);
			ans = min(e, ans);
		}
	}
	return ans;
}

// Using Subset generated using Bit Masking (BRUTE FORCE APPROACH)
int subseq(vector <int> v, int sum) {
	int ans = INT_MAX;
	int n = v.size();
	for (int i = 0; i <= (1<<n); i ++) {
		int subSum1 = 0;
		for (int j = 0; j < n; j ++) {
			if (i&(1<<j)){
				subSum1 += v[j];
			}
		}
		int subSum2 = sum - subSum1;
		ans = min(ans, abs(subSum1 - subSum2));
	}
	return ans;
}

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   int n, sum = 0;
   cin >> n;
   
   vector <int> v(n);
   for (int i = 0; i < n; i ++) {
   	cin >> v[i];
   	sum += v[i];
   }
   
   //int ans = subsetSum(v, sum);
   int ans = subseq(v, sum);
   
   cout << ans;
 
   return 0;
}