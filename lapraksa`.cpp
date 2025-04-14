#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    cout << "Proses Selection Sort:\n";
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        cout << "Iterasi ke-" << i + 1 << ": \n";
        for (int j = i + 1; j < n; j++) {
            cout << "  Bandingkan " << arr[j] << " dengan " << arr[minIdx] << "\n";
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
        	 cout << "  Tukar " << arr[i] << " dengan " << arr[minIdx] << "\n";
            swap(arr[i], arr[minIdx]);
           
        }
        cout << "  Array saat ini: ";
        printArray(arr, n);
        cout << "--------------------------\n";
    }
}

int main() {
    int data[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Data awal: ";
    printArray(data, n);
    cout << "==========================\n";

    selectionSort(data, n);

    cout << "==========================\n";
    cout << "Hasil akhir: ";
    printArray(data, n);

    return 0;
}

