#include <iostream>
#include <vector>

using namespace std;

// Función para intercambiar dos elementos
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función para particionar la lista en torno a un pivote
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];  // Elegimos el último elemento como pivote
    int i = (low - 1);      // Índice del elemento más pequeño

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Función principal de QuickSort
void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Ordenar los elementos antes y después de la partición
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

