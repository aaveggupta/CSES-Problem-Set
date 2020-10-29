/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// Simple logic just use long long to avoid overflow

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   int n;
   cin >> n;
   
   cout << n << " ";
   
   while (n > 1) {
   	if (n % 2 == 0) {
   		n /= 2;
   	} else {
   		n = n * 3 + 1;
   	}
   	
   	cout << n << " ";
   	
   }
   
 
   return 0;
}
