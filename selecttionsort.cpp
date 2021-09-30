#include<iostream>
using namespace std;


void selectionSort(int array[], int n){
    int i,j,temp,min;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[min])
                min=j;
        }
      //  int temp=array[i];
      //  array[i]=array[min];
       // array[min]=temp;
       swap(array[j],array[min]);
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
    selectionSort(array, n);
    print_array(array, n);
    return 0;
}


