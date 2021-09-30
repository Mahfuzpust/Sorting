#include<iostream>
using namespace std;

void insertionSort(int array[], int n){
    int i,j,temp;
        for(i=1;i<n;i++)
    {
        int temp=array[i];
        for(j=i;j>0&&temp<array[j-1];j--)
        {
            array[j]=array[j-1];
        }
        array[j]=temp;
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
    insertionSort(array, n);
    print_array(array, n);
    return 0;
}

