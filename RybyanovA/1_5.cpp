#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int temp = 0;
	for (int i = 0; i < N; i++) {
		temp = temp + i + i + 1;
		cout << temp << " ";
	}
	return 0;
}
