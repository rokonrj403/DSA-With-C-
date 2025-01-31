#include <iostream>

using namespace std;


void bubbleSort(int arr[], int n){

        for (int i = 0; i < n-1; i++){

        for (int j = 0; j < n-1-i; j++){

            if (arr[j] > arr[j + 1])

            {
                swap(arr[j], arr[j + 1]);
            }
        }
        }

}

void print(int arr[], int n){

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


}

    int main()
{

    int numberOfElements;

    cout << "Enter the Number of Elements: ";
    cin >> numberOfElements;

    int arrA[numberOfElements];

    cout << "Enter the Elements: " << endl;
    
    for (int i = 0; i < numberOfElements; i++){

        cin >> arrA[i];
    }

    bubbleSort(arrA, numberOfElements);

    print(arrA, numberOfElements);

    return 0;
}