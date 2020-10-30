/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll

// I have tried to count occurence of each char
// If more than 1 char occur odd no of time that means NO SOLUTION
// Else just printed half the even occurence char first
// then in middle odd no of char which is only one
// then again Rest from the last to make it pallindrome

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   string s;
   cin >> s;
   
   map <char, int> m;
   
   vector <char> v;
   
   for (int i = 0; i < s.length(); i ++) {
   	m[s[i]] ++;
   }
   char c; int ccnt = 0, f = 0;
   for (auto it = m.begin(); it != m.end(); it ++) {
   	int e = it->second;
   	if (e % 2 == 0) {
   		for (int i = 0; i < e / 2; i ++) {
   			v.push_back(it->first);
   		}
   	} else {
   		c = it->first;
   		f ++;
   		ccnt = e;
   	}
   }
   
   if (f > 1) {
   	cout << "NO SOLUTION";
   	return 0;
   }
   
   for (int i = 0; i < ccnt; i ++) {
   	v.push_back(c);
   }
   
   for (auto it = m.rbegin(); it != m.rend(); it ++) {
   	int e = it->second;
   	if (e % 2 == 0) {
   		for (int i = 0; i < e / 2; i ++) {
   			v.push_back(it->first);
   		}
   	}
   }
   
   for (auto i : v) {
   	cout << i;
   }
 
   return 0;
}