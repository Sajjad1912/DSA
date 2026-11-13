#include <iostream>
using namespace std;
int main() {
  int array[] = {2, 4, 0, 1, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 10; // Search data
  int found = 0;
  for (int i = 0; i < n; i++){
    if (array[i] == x){
        cout << "Data found :"<< i << endl;
        found++;
        break;
    }
  }
  if (found == 0){
    cout << "Data not found " << endl;
    }
}