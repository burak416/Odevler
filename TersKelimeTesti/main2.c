#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char kelime[40],terskelime[40];
	int i,harfSayisi,j,ayniharfsayisi=0;
	
	printf("Bir kelime girin: ");
	gets(kelime);
	for (i=0;kelime[i]!='\0';i++);
	harfSayisi=i;
	
	for (i=0;i<harfSayisi;i++){
		terskelime[i]=kelime[harfSayisi-i-1];
	}
	printf("Kelimenin tersi: %s",terskelime);
	
	for(j=0;j<harfSayisi;j++){
		if (kelime[j]==terskelime[j]){
			ayniharfsayisi++;
		}
	}
	
	if (ayniharfsayisi==harfSayisi){
		printf("\nKelime palindromdur.");
	}
	else {
		printf("\nKelime palindrom degildir.");
	}
	return 0;
}
