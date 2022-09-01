#include<stdio.h>
main(){
	int a,b,alan,cevre;
	printf("Kisa kenarin uzunlugunu giriniz:");
	scanf("%d",&a);
	printf("Uzun kenarin uzunlugunu giriniz:");
	scanf("%d",&b);
	cevre=2*(a+b);
	alan=a*b;
	printf("dikdortgenin cevresi:%d\n",cevre);
	printf("dikdortgenin alani:%d\n",alan);
	getch();
}
