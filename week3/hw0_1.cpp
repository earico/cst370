/*
 * Title: hw_01.cpp
 * Abstract: This program reads the input between two 
 * integers and outputs the sum and difference between them
 * Author: Eleazar Rico
 * Date: 2-05-2024
*/
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
