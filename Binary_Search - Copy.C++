#include<bits/stdc++.h>
using namespace std;
int binarySearch(int array[], int data, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (data == array[mid])
      return mid;
    else if (data > array[mid])
      low = mid + 1;
    else if (data < array[mid])
      high = mid - 1;
  }
  return -1;
}
int main() {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 8;// element to be searched
  int l = 0;
  int h = n-1;
  int result = binarySearch(array, x, l, h);
  if (result == -1)
    cout << "Elemnent is not found." << endl;
  else
    cout << "Element is found in index : " << result << endl;
}