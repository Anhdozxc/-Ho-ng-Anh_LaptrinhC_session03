#include <stdio.h>  

int main() {  
    float diemToan, diemVan, diemAnh, tongDiem, diemTrungBinh;

    printf("Nhap diem Toan: ");
    fflush(stdout);  
    scanf("%f", &diemToan);
    printf("Nhap diem Van: ");
    fflush(stdout);
    scanf("%f", &diemVan);
    printf("Nhap diem Anh: ");
    fflush(stdout);
    scanf("%f", &diemAnh);

    tongDiem = diemToan + diemVan + diemAnh;
    diemTrungBinh = tongDiem / 3;

    printf("Tong diem: %.2f\n", tongDiem);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);

    return 0;
}


