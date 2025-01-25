#include <iostream>
using namespace std;


int LinearSearch(int n, int key){

    int arrA[n];

    cout << "Enter The Elements of the Array: "<<endl;
    for (int i = 0; i < n; i++){
        cin >> arrA[i];
    }

    int arrB[key];

    cout << "Enter The Key Elements You Are Looking For: "<<endl;
    for (int i = 0; i < key; i++){
        cin >> arrB[i];
    }

    int arrC[n];
    int x = 0;

    for (int i = 0; i < key; i++){
        for (int j = 0; j < n; j++){

             if (arrA[j] == arrB[i])
            {

                arrC[x] = j;
                x++;
            }

        }
           
    }

    int y = sizeof(arrC) / sizeof(arrC[0]);

    for (int i = 0; i < y; i++){
        cout << arrC[i] <<" ";
        
    }

        return 0;
}

int main(){

        int numberOfElements, numberOfkeys;

    cout << "Enter The Number of Element: ";
    cin >> numberOfElements;


    cout << "Enter Number of Key Elements You Are Search For: ";
    cin >> numberOfkeys;

    LinearSearch(numberOfElements, numberOfkeys);

    return 0;


    
}

