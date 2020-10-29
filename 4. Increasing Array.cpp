/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// If prev is greater then adding the diff in ans
// And making the current digit same as prev

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   int n;
   cin >> n;
   
   vector <int> v(n);  cin >> v[0];
   
   int ans = 0;
   
   for (int i = 1; i < n; i ++) {
   	cin >> v[i];
   	if (v[i] < v[i - 1]) {
   		ans += (v[i - 1] - v[i]);
   		v[i] += (v[i - 1] - v[i]);
   	}
   }
   
   cout << ans;
   
   
   
 
   return 0;
}