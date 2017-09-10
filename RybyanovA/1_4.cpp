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
	int res = N / first_prime_div(N);
	cout << res << " " << N - res;
	return 0; 
}
