/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// First identify the max digits square it
// Then by observation apply the logic

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   int t;
   cin >> t;
   
   while (t --) {
   	int x, y;
   	cin >> x >> y;
   	
   	int maxN = max(x, y), ans = 0;
   	int sq = maxN * maxN;
   	
   	if (maxN % 2 != 0) {
   		ans = sq - abs(x - 1) - abs(maxN - y);
   	} else {
   		ans = sq - abs(y - 1) - abs(maxN - x);
   	}
   	
   	cout << ans << "\n";
   	
   }
 
   return 0;
}