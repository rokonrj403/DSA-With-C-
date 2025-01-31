#include <iostream>

using namespace std;

int main(){

    int numberOfElements;

    cout << "Enter the Number of Elements: ";
    cin >> numberOfElements;

    int arrA[numberOfElements];

    cout << "Enter the Elements: " << endl;
    
    for (int i = 0; i < numberOfElements; i++){

        cin >> arrA[i];
    }

    

    for (int i = 1; i <=numberOfElements; i++){

        for (int j = 0; j < numberOfElements; j++){

            if (arrA[j] > arrA[j + 1])

            {
                int x = arrA[j];
                arrA[j] = arrA[j + 1];
                arrA[j + 1] = x;
            }


        }


        }

        for (int i = 0; i < numberOfElements; i++){
            cout << arrA[i] << " ";
        }

            return 0;
}