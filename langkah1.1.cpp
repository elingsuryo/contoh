#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    cout << "Proses Insertion Sort:\n";
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        cout << "Iterasi ke-" << i << ", key = " << key << endl;

        // Geser elemen yang lebih besar dari key ke kanan
        while (j >= 0 && arr[j] > key) {
            cout << "  Geser " << arr[j] << " ke kanan\n";
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;

        cout << "  Sisipkan key di posisi " << (j + 1) << "\n";
        cout << "  Array saat ini: ";
        printArray(arr, n);
        cout << "----------------------\n";
    }
}

int main() {
    int data[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Data awal: ";
    printArray(data, n);
     cout<< "======================\n";

    insertionSort(data, n);

    cout << "======================\n";
    cout << "Hasil akhir: ";
    printArray(data, n);

    return 0;
}

