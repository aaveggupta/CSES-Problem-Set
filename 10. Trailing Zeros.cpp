/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// Total no of five in a number

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   int n;
   cin >> n;
   
   int cnt = 0;
   
   while (n >= 5) {
   	cnt += n / 5;
   	n /= 5;
   }
   
   cout << cnt;
   
   return 0;
}