//============================================================================
// Name        : Binary.cpp
// Author      : Ovidiu Cara
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int binarysearch(int array[], int size, int searchvalue);

int main() {
    int a[] = {1, 3, 9, 15, 21, 40, 56, 87};
    int uservalue;

    cout << "Enter a value: " << endl;
    cin >> uservalue;

    int result = binarysearch(a, 8, uservalue);

    if (result >= 0){
    	cout << "The number " << a[result] << "   " <<
    			" was found at the element with index: " << result << endl;
    }
    else {
    	cout << "The number "<< uservalue << " was not found" << endl;
    }
	return 0;
}
int binarysearch(int array[], int size, int searchvalue){
	int low = 0;
	int high = size-1;
	int mid;
	while (low <= high){
		mid= (high + low) /2;

		if (searchvalue ==array[mid]){
			return mid;
		}
		else if (searchvalue > array[mid]){
			low=mid+1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}
