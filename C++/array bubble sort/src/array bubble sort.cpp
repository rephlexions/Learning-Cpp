//============================================================================
// Name        : array.cpp
// Author      : Ovidiu Cara
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

void bubblesort(int arr[], int length);
//Precondition: length <= declared size of the array arr.
//The array elements arr[0] through a[length - 1] have values.
//Postcondition: The values of arr[0] through arr[length - 1] have
//been rearranged so that arr[0] <= a[1] <= <= arr[length - 1], .

int main ()
{
  using namespace std;
  int a[]={3, 10, 9, 2, 5, 1};

  bubblesort(a, 6);
  for (int i=0; i<6; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
  }
void bubblesort(int arr[], int length)
{ // bubble the largest number toward the right
  for (int i=length-1; i>0; i--)
      for (int j=0; j<i; j++)
      if (arr[j]> arr[j+1])
     { // swap the numbers
       int temp = arr[j+1];
       arr[j+1] = arr[j];
       arr[j] = temp;
     }
}
