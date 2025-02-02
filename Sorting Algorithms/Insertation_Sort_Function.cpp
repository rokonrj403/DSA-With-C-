#include <iostream>
using namespace std;


void insertionSort(int arr[], int n){

   for (int i = 0; i < n; i++){

        cin >> arr[i];
    }


       for (int i = 1; i <n; i++){

           int key = arr[i];
           int j = i - 1;

           while(j>=0 && arr[j] > key){

               arr[j + 1] = arr[j];
               j = j - 1;
           }
           arr[j + 1] = key;
            }

            
}


void printArr(int arr[], int n){

        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
}
int main(){

    int numberOfElements;

    cout << "Enter the Number of Elements: ";
    cin >> numberOfElements;

    int arrA[numberOfElements];

    cout << "Enter the Elements: " << endl;

    insertionSort(arrA, numberOfElements);

    printArr(arrA, numberOfElements);

    return 0;
}