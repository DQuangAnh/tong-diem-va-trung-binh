#include <stdio.h>
 main()
 {
 	float a, b, c, tb, tong;
 	printf("Nhap vao lan luot diem toan, van va anh: ");
 	scanf("%f %f %f", &a,&b,&c);
 	tong= a + b + c; 
 	tb = tong / 3;
 	printf("Tong diem ba mon la: %f\n", tong);
 	printf("Diem trung binh: %f", tb);
 	return 0;
 }

