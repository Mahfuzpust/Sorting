#include<iostream>
using namespace std;

void quicksort(int array[29], int low, int high)
{
    int i,j,pivot,temp;
    if(low<high)
    {
        pivot=low;
        i=low;
        j=high;

        while(i<j)
        {
            while(array[i]<=array[pivot])
                i++;
            while(array[j]>array[pivot])
                j--;
            if(i<j){
               // temp=array[i];
               // array[i]=array[j];
               // array[j]=temp;
               swap(array[i],array[j]);

            }
            else{
               //  temp=array[j];
               //  array[j]=array[pivot];
                // array[pivot]=temp;
                 swap(array[j],array[pivot]);
            }
        }

        quicksort(array,low,j-1);
        quicksort(array,j+1,high);

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
    quicksort(array,0,n-1);
    print_array(array, n);
    return 0;
}



