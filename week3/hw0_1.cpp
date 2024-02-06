#include <iostream>
using namespace std;

void calc(int a, int b) {
	cout << "SUM: " << a + b << endl;
	cout << "DIFF: " << a - b << endl;
}

int main() {
	int x, y;
	
	cin >> x >> y;
	calc(x, y);
}
