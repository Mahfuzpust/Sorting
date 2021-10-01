#include <iostream>
  using namespace std;

void merge(int array[], int l, int mid, int r) {
  int i = l;
  int j = mid + 1;
  int k = l;

  /* create temp array */
  int temp[5];

  while (i <= mid && j <= r) {
    if (array[i] <= array[j]) {
      temp[k] = array[i];
      i++;
      k++;
    } else {
      temp[k] = array[j];
      j++;
      k++;
    }

  }

  /* Copy the remaining elements of first half, if there are any */
  while (i <= mid) {
    temp[k] = array[i];
    i++;
    k++;

  }

  /* Copy the remaining elements of second half, if there are any */
  while (j <= r) {
    temp[k] = array[j];
    j++;
    k++;
  }

  /* Copy the temp array to original array */
  for (int k = l; k <= r; k++) {
    array[k] = temp[k];
  }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int array[], int l, int r) {
  if (l < r) {
    // find midpoint
    int mid = (l + r) / 2;

    // recurcive mergesort first and second halves
    mergeSort(array, l, mid);
    mergeSort(array, mid + 1, r);

    // merge
    merge(array, l, mid, r);
  }
}
void print(int array[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << " " << array[i];
    }
}

int main() {
  int n;
  cin >> n;
  int array[n];
  for(int i=0;i<n;i++)
  {
      cin >>array[i];
  }

  mergeSort(array, 0, n- 1); // mergesort(arr,left,right) called
  print(array,n);
  return 0;
}

