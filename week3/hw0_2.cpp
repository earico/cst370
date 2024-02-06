/*
 * Title: hw0_2.cpp
 * Abstract: This program reads an input of 5 numbers
 * and outputs the min, max and median amongst the 5 given
 * numbers in the array.
 * Author: Eleazar Rico
 * Date: 2-05-2024
*/
#include <iostream>
using namespace std;

void calc(int arr[5]) {
	int min = arr[0], max = 0;
        int median = 0;

	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}

		if (arr[i] < min) {
			min = arr[i];
		}
		median = median + arr[i];
	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[j] > arr[j+1]){
				median = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = median;
			}
		}
	}
	median = arr[2];

	cout << "MIN:" << min 
	     << "\nMAX:" << max
	     << "\nMEDIAN:" << median << endl;
}

int main() {
	int nums[5];

	for (int i = 0; i < 5; i++) {
		cin >> nums[i];
	}

	calc(nums);
}
