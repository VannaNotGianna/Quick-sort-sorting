#include <iostream>
#include <vector>

using namespace std;

// Función para intercambiar dos elementos
void swap2(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Bubble Sort
void bubbleSort(std::vector<int> &arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap2(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // Si no se hicieron intercambios en esta iteración, la lista está ordenada
        if (!swapped) {
            break;
        }
    }
}
