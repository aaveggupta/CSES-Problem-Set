/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// Total no of combination in n * n is (n * n) C 2 -> let N = n * n -> Total Combination -> N*(N-1)/2
// When a knight attact it create two boards of 2*3 and 3*2
// In  n*n chess we have to find total no of 2*3 and 3*2 boards
// In 3 * 3 there are 4 2*3 and 3*2 boards
// In n * n, there are (n - 1)(n - 2) + (n - 1)(n - 2)
// which is 2(n - 2)(n - 1)
// knights can also swap therefore 2 * 2 * (n - 1) * (n - 2);

// ans is (N*N)C2 - 4(N-1)(N-2);

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   	int n;
   	cin >> n;
   	
   	int sub = 1;
   	
   	for (int i = 1; i <= n; i ++) {
   		int num = i * i;
   		int noc = (num * (num - 1)) / 2;
   		
   		// wt the time, when i was doing myself
   		// if (i >= 3) {
   			// int e = 8 * sub;
   			// noc -= e;
   			// sub += (i - 1);
   		// }
   		
   		//Better Approach
   		noc -= 4 * (i - 1) * (i - 2);
   	
   		cout << noc << "\n";
   		
   	}
   
 
   return 0;
}
