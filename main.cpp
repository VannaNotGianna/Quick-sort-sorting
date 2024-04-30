#include <iostream>
#include "quick.h"
#include "bubble.h"


int main (){

    int n = rand() % 100 + 1; // Genera un número aleatorio entre 1 y 100
    vector <int> arr(n); 

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1; // Genera un número aleatorio entre 1 y 100
    }

    cout << "QuickSort" << endl; 
    //vector<int> arr = {12, 7, 3, 9, 2, 1, 5};
    //int n = arr.size();

    quickSort(arr, 0, n - 1);

    cout << "Lista ordenada: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << endl << "BubbleSort" << endl;

    bubbleSort(arr);

    cout << "Lista ordenada: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
