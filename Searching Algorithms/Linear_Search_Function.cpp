#include <iostream>
using namespace std;


int LinearSearch(int n, int key){

    int arrA[n];

    cout << "Enter The Elements of the Array: "<<endl;
    for (int i = 0; i < n; i++){
        cin >> arrA[i];
    }

    int x =0;

    for (int i = 0; i < n; i++){
        if(arrA[i] == key){

            x = i;
        }

    }

    if (x!= 0)
    {
        cout << "Key Element Found On Index No: " << x << endl;
    }

    else{
        cout << "Key Element Not Found!" << endl;
        
    }
    return 0;
}

int main(){

        int n, key;

    cout << "Enter The Number of Element: ";
    cin >> n;


    cout << "Enter The Key Element You Are Search For: ";
    cin >> key;

    LinearSearch(n,key);

    return 0;


    
}

