/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// Total Sum upto N - Sum of (N - 1) Terms

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   int n;
   cin >> n;
   
   vector <int> v(n - 1);
   int sum = 0;
   for (int i = 0; i < n - 1; i ++) {
   	cin >> v[i];
   	sum += v[i];
   }
   
   int maxS = (n * (n + 1)) / 2;
   
   cout << maxS - sum;
 
   return 0;
}