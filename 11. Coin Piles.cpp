/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// Only Possible when there sum is divisible by 3 as we are removing 3 coins at a time
// Now if a = 10 and b = 2, then also its not possible
// So we have decided to make a range for a and b i.e min is Sum/3 and Max is 2*(Sum/3)

// Better approach is check if 2 * a >= b and 2 * b >= a

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   int t;
   cin >> t;

   while (t --) {
   	int a, b;
   	cin >> a >> b;
   	
   	if ((a + b) % 3 == 0) {
   		// int minR = (a + b) / 3;
   		// int maxR = minR * 2;
   		// if ((a >= minR && a <= maxR) && (b >= minR && b <= maxR)) {
   			// cout << "YES";
   		// } else {
   			// cout << "NO";
   		// }
   		
   		// Better Approach
   		cout << ((2 * a >= b) && (2 * b >= a) ? "YES" : "NO");
   		
   	} else {
   		cout << "NO";
   	}
   	
   	cout << "\n";
   	
   }
 
   return 0;
}