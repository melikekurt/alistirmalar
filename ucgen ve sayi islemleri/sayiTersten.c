//Melike Kurt Bu program kullanicinin girdigi istedigi basamak sayisina sahip olan sayiyi tersten yazdirir
#include<stdio.h>
int main(){
//ocelýkle kullanicidan sayiyi almaliyiz (n) ve modulus kullanarak sayinin son hanelerini belirleyip tutacak bir deger almaliyiz (a)
	int n ,a ;
	printf("Sayi giriniz:");
	scanf("%d",&n);
	printf("Sayinin tersten yazilisi:");//Printf'i buraya yazdim cunku while icinde olursa donguye katiliyor whiledan sonra yazarsam a degerleri toplamamis oluyor
  	while(n>0)
  	{
    	a=n%10;// modulus ile son haneleri a degiskeninde tutuyoruz 
    	printf("%d",a);//burda dongu halinde yazdýrýyoruz
		n=n/10;//modulusle son basamagi aldiktan sonra bir basamak azaltmak icin bolum kullaniyoruz
  	}
	
		
	
	
	
	
	
	
	return 0 ;
}
