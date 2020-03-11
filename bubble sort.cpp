#include<iostream>
using namespace std;
void swapping(int &e, int &f) {
   int temp;
   temp = e;
   e = f;
   f = temp;
}
void display(int *array, int size) {
   for(int g = 0; g<size; g++)
      cout << array[g] << " ";
   cout << endl;
}
void bubbleSort(int *array, int size) {
   for(int g = 0; g<size; g++) {
      int swaps = 0;
      for(int q = 0; q<size-g-1; q++) {
         if(array[q] > array[q+1]) {
            swapping(array[q], array[q+1]);
            swaps = 1;
         }
      }
      if(!swaps)
         break;
   }
}
int main() {
   int m;
   cout << "Please enter the number of elements to be in array: ";
   cin >> m;
   int arr[m];
   cout << "Key in elements:" << endl;
   for(int g= 0; g<m; g++) {
      cin >> arr[g];
   }
   cout << "Array list before Sorting: ";
   display(arr, m);
   bubbleSort(arr, m);
   cout << "Array after Sorting has been performed: ";
   display(arr, m);
}
