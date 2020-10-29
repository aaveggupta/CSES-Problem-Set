/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// Just incrementing when next char is same as curr
// If not store the prev value in ans if its greater than that

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   string s;
   cin >> s;
   
   int cnt = 0, ans = 0;
   
   for (int i = 0; i < s.length(); i ++) {
   	if (s[i] == s[i + 1]) {
   		cnt ++;
   	} else {
   		ans = max(ans, cnt);
   		cnt = 0;
   	}
   }
   
   cout << ans + 1;
   
 
   return 0;
}