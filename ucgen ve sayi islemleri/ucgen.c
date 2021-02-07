//Melike Kurt Bu program kullanicinin girdigi sayi kadar satir yapip sayilarla belli bir duzen icinde ucgen olusturur
#include<stdio.h>
int main(){
	int i,x,bosluk, satir,j;//oncelikle lazim olacak degerleri atadik
	printf("Satir sayisi giriniz:");//satir sayisini kullanicidan aldik
	scanf("%d",&satir);
	
	for(i=1;i<=satir;i++)//satir sayisini kontrol eder
	{
		for(bosluk=1;bosluk<=satir-i;bosluk++)//ucgen olusturulmadan once bosluklary duzenler
		printf(" ");
		for(j=1;j<=i;j++)//j degerleri 1 den baslanarak i yi gecmeden yazdirilir
		printf("%d",j); 
		for(x=j-2;x>0;x--)//j den sonra geriye dogru saymasi gerektiginden x sifir olmadan azaltilarak yazdirilir
		printf("%d",x);
		
			
		
		
	printf("\n");//for her bittiginde alt satira gecer
	}
	return 0;
}
