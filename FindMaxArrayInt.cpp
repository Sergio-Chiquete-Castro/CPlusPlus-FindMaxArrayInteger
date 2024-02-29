#include <iostream>
using namespace std;

int main() {

	int A[7] = { 4,8,6,9,5,2,7 };
	int n = 7, max;

	//start max at beginning of array 
	max = A[0];

	for (int i = 1; i < 7; i++) {
 		if (A[i] > max) {
			max = A[i];
		}
	}
	cout << "Max no. is: " << max;
}

/*
0,1,2,3,4,5,6
4,8,6,9,5,2,7


if (A[i] > max)
if (A[1]>max}
if 8 > 4
[true]

we assign max to the new value of A[i], A[1], 8 

*/
