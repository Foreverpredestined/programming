#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
//	cout << sizeof(int);
	
	int* orig_array = (int*) malloc(4 * sizeof(int));
	orig_array[2] = 5;
	*(orig_array + 2) = 7;
	orig_array[(unsigned long long) pow(2, 32) + 1] = 100;
	
	cout << orig_array[0] << " " << orig_array[1] << " " << orig_array[2] << " " << orig_array[3] << " " << orig_array[1000];
	
	free(orig_array);
	return 0;
}

