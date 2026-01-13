/******************************************************************************
 * Họ và tên: [Tôn Thất Gia Nghi]
 * MSSV:      [PS48181]
 * Lớp:       [COM108_CS21301]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
    float toan, ly, hoa;
    printf("Nhập điểm Toán: ");
    scanf("%f", &toan);
    printf("Nhập điểm Lý: ");
    scanf("%f", &ly);
    printf("Nhập điểm Hóa: ");
    scanf("%f", &hoa);
    printf("Điểm trung bình: %.2f\n", (toan * 3 + ly * 2 + hoa )/6);
    return 0;
    // Khai báo biến

    // Nhập dữ liệu


    // Xử lý, tính toán

    // Hiển thị kết quả


}