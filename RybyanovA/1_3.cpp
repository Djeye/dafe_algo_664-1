#include <iostream>

using namespace std;
struct fraction {
	int nominator;
	int denominator;
	int gcd() {
		int a = denominator;
		int b = nominator;
		while (b) {
			a = a % b;
			swap(a, b);
		}
		return a;
	}
	void roll_fr() {
		int temp = gcd();
		nominator /= temp;
		denominator /= temp;
	}
};

fraction add_fr(const fraction &f1, const fraction &f2) {
	fraction res = { f1.denominator*f2.nominator + f1.nominator*f2.denominator, f1.denominator*f2.denominator };
	return res;
}

int main() {
	fraction f1, f2;
	cin >> f1.nominator >> f1.denominator >> f2.nominator >> f2.denominator;
	f1 = add_fr(f1, f2);
	f1.roll_fr();
	cout << f1.nominator << " " << f1.denominator;
	return 0;
};
