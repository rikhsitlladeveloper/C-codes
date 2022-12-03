// Binary Search in C++
#include "binarysearch.h"
#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

void binary_search() {
  int array[50];
  int x;
  size_t size;
  cout << "Please insert array size: ";
  cin >> size;
  cout << "Please insert array with " << size << "index: " ;
  for(int i{0};i<size;i++){
      cin >> array[i];
  }
  cout << "Array is :[";
  for(int i{0};i<size;i++){
      cout << array[i];
      if (i < size - 1)
          cout << " ";
  }
  cout << "Please insert number from array for search: ";
  cin >> x;
  int result = binarySearch(array, x, 0, size - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
