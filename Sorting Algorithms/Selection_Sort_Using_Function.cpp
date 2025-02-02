#include <iostream>
using namespace std;


void selectionSort(int arr[], int n){

   for (int i = 0; i < n; i++){

        cin >> arr[i];
    }


       for (int i = 0; i <n-1; i++){
            
         int minIndex = i;

           for (int j = i+1; j < n; j++)
           {

                if(arr[minIndex] > arr[j]){
                    minIndex = j;
                }
            }

            swap(arr[i], arr[minIndex]);
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

    selectionSort(arrA, numberOfElements);

    printArr(arrA, numberOfElements);

    return 0;
}