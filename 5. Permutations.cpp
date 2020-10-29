/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// print the even digits till n after this print the odd digits till n
// for n = 1, ans is same
// for n = 2 and 3, not possible

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   int n;
   cin >> n;
   
   if (n == 1) {
   	cout << 1;
   	return 0;
   }
   
   if (n >= 4) {
   	for (int i = 2; i <= n; i += 2) {
   		cout << i << " ";
   	}
   	for (int i = 1; i <= n; i += 2) {
   		cout << i << " ";
   	}
   } else {
   	cout << "NO SOLUTION";
   }
   
 
   return 0;
}