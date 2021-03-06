#include <iostream>

using namespace std;
void insertionSort(int a[], int n);
void reversearry(int a[], int n);
void printarray(int a[], int n);
int main() {

  int a[100], n, i;
  cout << "\nEnter the number of data element to be sorted: ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Enter element " << i + 1 << " in array : ";
    cin >> a[i];
  }

  cout << "The array is ";
  printarray(a, n);

  insertionSort(a, n);

  cout << "Sorted array: \n";
  printarray(a, n);

  cout << "reversed array: \n";
  reversearry(a, n);
  printarray(a, n);

  return 0;
}

void insertionSort(int a[], int n) {
  int i, temp, j;
  for (i = 1; i < n; i++) {
    temp = a[i];
    j = i - 1;

    while (j >= 0 && a[j] > temp) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = temp;
  }
}
void swap(int * x, int * y) {
  int temp;
  temp = * x;
  * x = * y;
  * y = temp;
}

void reversearry(int a[], int n) {
  void swap(int * x, int * y);
  int start = 0, end = n - 1;
  while (start < end) {
    swap( & a[start], & a[end]);
    start++;
    end--;
  }
}

void printarray(int a[], int n) {
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}
