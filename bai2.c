/******************************************************************************
 * Họ và tên: [Tôn Thất Gia Nghi]
 * MSSV:      [PS48181]
 * Lớp:       [COM108_CS21301]]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
    float dai, rong;
    printf("Nhap dai: ");
    scanf("%f",&dai);
    printf("nhap rong: ");
    scanf("%f",&rong);
    printf("Chu vi: %.2f\n", (dai+rong)*2);
    printf("Diện tích: %.2f\n", dai*rong);
    return 0;
}