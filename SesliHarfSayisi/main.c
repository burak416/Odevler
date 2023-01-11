#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char sesliHarfler[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
	int i, j, toplamSesliHarf = 0;
	char kelime[50];
	 
	 printf("Bir metin giriniz: ");
	 gets(kelime);
	 
	 for(i=0; kelime[i]!='\0'; i++){
	 	for(j=0;  sesliHarfler[j]!='\0' ; j++){
	 		if(kelime[i] == sesliHarfler[j]){
	 			toplamSesliHarf++;
			 }
		 }
	 }
	 printf("Toplam sesli harf sayisi: %d", toplamSesliHarf);
	
	return 0;
}
