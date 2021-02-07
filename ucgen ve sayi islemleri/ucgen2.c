//Melike Kurt 20120205009   BU program girlen sayýya baðlý olarak belirli kuralý olan bir ücgen basar
#include<stdio.h>
int main(){
	printf("Sayi giriniz ");
	int n;
	scanf("%d",&n);//sayiyi aliyoruz
	int x,y,z;
	for(x=1;x<=n;x++)//x satirlari kontrol eder
	{
		for(y=1;y<=n-x;y++)// y bosluklari kontrol eder
		  printf(" ");
	    for(z=y;z<=n ;z++)// z y ve n ye bagli olarak istenilen sayiyi istenilen kadar basar
	    printf("%d",z);
	    printf("\n");// alt satira gecerek ucgen olusumunu saglar
	}
	
	return 0;
}
