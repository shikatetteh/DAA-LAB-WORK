#include<iostream>
using namespace std;
void swapping(int &w, int &v) {
   int temp;
   temp = w;
   w = v;
   v = temp;
}
void display(int *array, int size) {
   for(int a = 0; a<size; a++)
      cout << array[a] << " ";
   cout << endl;
}
void selectionSort(int *array, int size) {
   int a, b, amin;
   for(a = 0; a<size-1; a++) {
      amin = a;
      for(b = a+1; b<size; b++)
         if(array[b] < array[amin])
            amin = b;

         swap(array[a], array[amin]);
   }
}
int main() {
   int k;
   cout << "Please key in the number of elements: ";
   cin >> k;
   int arr[k];
   cout << "Input elements:" << endl;
   for(int a = 0; a<k; a++) {
      cin >> arr[a];
   }
   cout << "List of the Array before Sorting: ";
   display(arr, k);
   selectionSort(arr, k);
   cout << "List of the Array after Sorting: ";
   display(arr, k);
}
