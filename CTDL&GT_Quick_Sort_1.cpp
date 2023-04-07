cài đặt Quick Sort
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // khai báo phần tử đánh dâu pivot
    int left = low;   //khai báo biến bên trái
    int right = high - 1; //khai báo biến bên phải
    while(true){
        while(left <= right && arr[left] < pivot) left++; // tìm phần tử >= phần tử pivot trong mảng
        while(right >= left && arr[right] > pivot) right--; // tìm phần tử <= phần tử pivot trong mảng
        if (left >= right) break; // sau khi duyệt xong thì thoát khỏi vòng lặp
        swap(arr[left], arr[right]); // nếu chưa xong thì sử dụng hàm swap() để tráo đổi.
        left++; // Vì left hiện tại đã xét, nên cần tăng
        right--; // Vì right hiện tại đã xét, nên cần giảm
    }
    swap(arr[left], arr[high]);
    return left; // Trả về chỉ số sẽ dùng để chia đôi mảng
}
