#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	long long n, k;
	cin >> n >> k;
	// let a = array, s = sum of array a
	// since s should be divisible by k, then s = cf * k
	// since all a[i] are positive integers, then s >= n
	
	// by substituting, cf * k >= n
	// then cf = ceil(n / k) = (n + k - 1) / k
	
	// largest a[i] = ceil(s / n)
	// example: 9 / 4 = 2.25, and ceil(2.25) = 3
	// so the array should look like this -> (2 + 2 + 2 + 3) / 4, where 3 is the largest a[i]
	
	// so the answer is:
	// = ceil(s / n)
	// = ceil((cf * k) / n)
	// = ((cf * k) + n - 1) / n
	
	long long cf = (n + k - 1) / k;
	k *= cf;
	cout << (k + n - 1) / n << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}
