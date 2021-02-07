//Melike Kurt Bu program 1+1/2+1/3+1/n..  n kullanicinin girdigi sayi olmak uzere serinin toplama islemini yapar 
#include <stdio.h>

int main(void) {
  float n, top=0; //oncelikle kullanicidan sayi almali ve toplama islemini tutmak icin de deger atamaliyiz
  int sayac=1;//serinin nasil toplandigini gostermek icin bir deger atayip onu n'e kadar arttýrmaliyiz
  printf("Terim sayisini giriniz:");
  scanf("%f",&n);
    while (sayac<=n)//Burda dongu kullanarak seri toplama isleminin nasil yapildigini kullaniciya gosteriyoruz
    {
		printf("1/%d+",sayac);  
    	sayac++;
    }
    
    while(n>0)//n'i azaltip degerleri top degiskeninde tutarak toplama islemini yapiyorux
    {
      top=top+(1/n);
      n--;
    }
    printf("\nSerinin toplami:%f",top);//toplama islemini yazdiriyoruz donguye yazmama sebebimiz printf donguye katilip sayi kadar bastirilmasin
  return 0;
}
