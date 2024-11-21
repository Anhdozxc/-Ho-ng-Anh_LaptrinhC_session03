#include <stdio.h>

int main(){
	// khai bao hang so pi có gia tri la 3.14
	const float PI = 3.14;
	// Khai bao bien ban kinh
	int radius;
	printf("Moi ban nhap ban kinh");
	scanf("%d",& radius);
	// khai bao bien chu vi cua hinh tron
	float chuvi = 2 * PI * radius;
	// khai bao bien dien tich cua hinh tron 
	float dientich = PI * radius * radius;
	// In hai bien chu vi va dien tich ra man hinh
	printf("Chu vi cua hinh tron la:%.2f\n", chuvi);
	printf("Dien tich cua hinh tron la:%.2f\n", dientich);
	
	return 0;
	
	
}


