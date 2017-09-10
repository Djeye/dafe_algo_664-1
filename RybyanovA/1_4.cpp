#include <iostream>

using namespace std;

int first_prime_div(int number) {
	for (int i = 2; i*i <= number;) {
		if (number % i == 0) {
			return i;
		}
		else i++;
	}
	return number;
}

int main() {
	int N;
	cin >> N;
	int div = first_prime_div(N);
	int res = N / div;
	cout << res << " " << N - res;
	return 0; 
}
