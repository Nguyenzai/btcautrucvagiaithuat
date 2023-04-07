#include <stdio.h>
#include <stdlib.h>

// Định nghĩa hàm tìm kiếm nhị phân
int tim_kiem_nhi_phan(int mang[], int n, int muc_tieu) {
    int trai = 0, phai = n - 1;
    while (trai <= phai) {
        int giua = trai + (phai - trai) / 2;
        if (mang[giua] == muc_tieu)
            return giua;
        else if (mang[giua] < muc_tieu)
            trai = giua + 1;
        else
            phai = giua - 1;
    }
    return -1;
}

int main() {
    int mang[100]; // Khai báo mảng có tối đa 100 phần tử
    int n; // Số lượng phần tử trong mảng
    int muc_tieu; // Giá trị cần tìm kiếm

    // Nhập vào số lượng phần tử trong mảng
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    // Nhập vào mảng
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &mang[i]);
    }

    // Nhập vào giá trị cần tìm kiếm
    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &muc_tieu);

    // Gọi hàm tìm kiếm nhị phân và in kết quả
    int ket_qua = tim_kiem_nhi_phan(mang, n, muc_tieu);
    if (ket_qua != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", muc_tieu, ket_qua);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang\n", muc_tieu);
    }

    return 0;
}
