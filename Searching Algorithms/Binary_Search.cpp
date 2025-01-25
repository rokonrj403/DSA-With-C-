#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){


    while(start <= end){

        int mid = start + (end - start) / 2;

        if(arr[mid] ==key){
            return mid;
        }
        if(arr[mid]>key){
            end = mid - 1;
            
        }
        else{
            start = mid + 1;
        }

        
    }
    return -1;
}

int main(){

    int numberOfElements, key;

    cout << "Enter The Number of Element: ";
    cin >> numberOfElements;

    int arrA[numberOfElements];

    cout << "Enter The Elements of the Array: "<<endl;
    for (int i = 0; i < numberOfElements; i++){
        cin >> arrA[i];
    }

    cout << "Enter The Key Element You Are Search For: ";
    cin >> key;

    int n = sizeof(arrA) / sizeof(arrA[0]);

    int result = binarySearch(arrA, 0, n - 1, key);


    if(result == -1){
        cout << "No Match Found!";
    }
    else{
        cout << "Key Element Found on Index no: " << result << endl;
    }

    return 0;
}