/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// Just use Binary Exponentiation to calculate power

int power(int a, int n) {
  int res = 1;
  while (n) {
    if (n % 2) {
      res = (res *a) % MOD;
      n --;
    } else {
      a = (a * a) % MOD;
      n /= 2;
    }
  }
  return res;
}

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   int n;
   cin >> n;
   
   int ans = power(2, n);
   
   cout << ans;
   
 
   return 0;
}