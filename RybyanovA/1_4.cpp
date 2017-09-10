#include <iostream>
#include <vector>

using namespace std;

vector<int>& factorization(int number, vector<int> &p) {
	for (int i = 2; i*i <= number;) {
		if (number % i == 0) {
			p.push_back(i);
			number /= i;
		}
		else i++;
	}
	p.push_back(number);
	return p;
}

int main() {
	int N;
	cin >> N;
	vector<int> fact;
	fact = factorization(N, fact);
	int res = 1;
	for (int i = 1; i < fact.size(); i++) {
		res *= fact[i];
	}
	cout << res << " " << N-res;
	return 0; 
}
