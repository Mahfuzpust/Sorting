#include<iostream>
using namespace std;

void meargeSort(int *array, int L, int R){
    if(R-L>1){
        int mid = L + (R - L)/2;
        meargeSort(array, L, mid);
        meargeSort(array, mid, R);

        int i=L,j=mid,k=0;
        int temp[R-L];
        while(i<mid && j<R){
            if (array[i] < array[j])
            {
                  temp[k] = array[i];
                  i++;
                  k++;
            }
            else
            {
               temp[k] = array[j];
               k++;
               j++;
            }
        }

        while(j<R)
        {
            temp[k] = array[j];
            k++;
            j++;
        }

         while(i<mid)
        {
           temp[k] = array[i];
           k++;
           i++;
        }

        if(R-L>1)
        for(int i=0; i<k;i++)
        array[L+i]=temp[i];
    }
}


void print_array(int array[], int n){
    for(int i=0; i<n; i++)
        cout << " " << array[i];

}


int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i=0; i<n ; i++)
    cin >> array[i];
    meargeSort(array, 0, n);
    print_array(array, n);
    return 0;
}


