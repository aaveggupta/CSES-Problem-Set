/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// When sum of N digits is even only then its Possible
// when even no digits just print half last and fisrt digit in one set and remaining in other
// When odd no digits just print one odd and one even from start and last in one set and remaining in other set

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   int n;
   cin >> n;
   
   int sum = (n * (n + 1)) / 2;
   
   if (sum % 2 == 0) {
   	cout << "YES\n";
   	if (n % 2 == 0) {
   		int e = n / 4;
   		cout << e * 2 << "\n";
   		for (int i = 1, j = n; i <= e ; i ++, j --) {
   			cout << i << " " << j << " ";
   		}
   		cout << "\n" << e * 2 << "\n";
   		for (int i = e + 1; i <= n - e; i ++) {
   			cout << i << " ";
   		}
   	} else {
   		int e = (n + 1) / 4;
   		cout << e * 2 << "\n";
   		for (int i = 1, j = n - 1; i <= e ; i ++, j --) {
   			cout << i << " " << j << " ";
   		}
   		cout << "\n" << n / 2 << "\n";
   		for (int i = e + 1; i <= n - e - 1; i ++) {
   			cout << i << " ";
   		}
   		cout << n;
   	}
   	
   } else {
   	cout << "NO";
   }
   
 
   return 0;
}