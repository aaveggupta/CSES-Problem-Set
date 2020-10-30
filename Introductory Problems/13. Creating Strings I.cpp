/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// Tried to make permutation of the string
// To avoid redundancy store all of them in a map and print the same

void solve(string ip, string op, map <string, int> &m) {
	if (ip.length() == 0) {
		m[op] ++;
		return;
	}
	
	for (int i = 0; i < ip.length(); i ++) {
		string ip1 = ip, op1 = op;
		op1.push_back(ip1[i]);
		ip1.erase(ip1.begin() + i);
		solve(ip1, op1, m); 
	}
}

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   string s;
   cin >> s;
   
   map <string, int> m;
   
   solve(s, "", m);
   
   cout << m.size() << "\n";
   
   for (auto it = m.begin(); it != m.end(); it ++) {
   	cout << it->first << "\n";
   }
 
   return 0;
}