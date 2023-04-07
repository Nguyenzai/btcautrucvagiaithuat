nguồn :thanh bình 
ví dụ
#include <iostream>
using namespace std;

// Hàm hoán đổi giá trị của hai phần tử
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Hàm lấy pivot và phân hoạch mảng
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Chọn pivot là phần tử cuối cùng của mảng
    int i = low - 1; // Đặt vị trí ban đầu của i là low - 1

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1; // Trả về vị trí của pivot sau khi phân hoạch
}

// Hàm đệ quy thực hiện Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high); // Phân hoạch mảng và lấy vị trí của pivot

        // Đệ quy thực hiện Quick Sort trên các phần mảng con trái và phải của pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int arr[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, n - 1);

    cout << "\nMang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
