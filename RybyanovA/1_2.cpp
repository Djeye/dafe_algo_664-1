#include <iostream>
#include <vector>

using namespace std;
vector<int> factorization(int number) {
	vector<int> p;
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
	int number;
	cin >> number;
	vector<int> res;
	res = factorization(number);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}
	return 0;
}
