// Preprocessor Solution.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Author : Sami Sezgin

#include <iostream>
#include <vector>
#define FUNCTION(name, op) void name(int& a, int b){if (b op a) a = b;}
#define foreach(v,i) for(int i=0;i<v.size();i++)
#define io(v) std::cin>>v
#define INF 100000000
#define toStr(x) #x // The #(one token) and ##(two tokens) preprocessor
					// operators are available in C++
					// and ANSI/ISO C. The # operator
					// causes a replacement-text token
					// to be converted to a string surrounded by quotes. 

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 


	FUNCTION(minimum, < )
	FUNCTION(maximum, > )

	int main() {
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	std::cout << toStr(Result = ) << ' ' << ans;
	return 0;
}

