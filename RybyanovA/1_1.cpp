#include <iostream>

using namespace std;
int fact(int n_fact, int num) {
	int pow = 0;
	for (int i = num; i <= n_fact; i *= num) {
		pow += n_fact / i;
	}
	return pow;
}

int main() {
	int n;
	cin >> n;
	cout << fact(n, 5);
	return 0;
}
