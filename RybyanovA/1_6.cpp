#include <iostream>

using namespace std;

int main() {
	int size;
	cin >> size;
	int *m = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> m[i];
	}
	int temp;
	for (int i = 0; i < size/2; i++) {
		temp = m[i];
		m[i] = m[size - i - 1];
		m[size - i - 1] = temp;
	}
	for (int i = 0; i < size; i++) {
		cout << m[i] << " ";
	}
	delete m[];
	return 0;
}
