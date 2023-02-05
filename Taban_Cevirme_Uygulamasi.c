#include<stdio.h>
#include<math.h>

//Kullanıcı'nın istediği bir tabandan 10’luk tabana veya 10’luk tabandan istediği bir tabana çeviren program:

void HerhangiBirTabandanOnlukTabanaCevir(int grlnSyi, int tbn);
void onluktanBaskaTabanaCevir(int grln, int tabn);

int main() {
	
	int islem;
	int taban;
	int girilenSayi;
	int kosul = 1;

	while (kosul) {
	
		printf("Herhangi bir tabandan onluk tabana => 1\n"); 
		printf("Onluk tabandan herhangi bir tabana => 2\n");
		printf("Islemi sonlandirmak icin\t   => 3\n");
		printf("\nYapmak istediginiz islemi giriniz: ");
		scanf_s("%d", &islem);
		
	
		switch (islem) {
			case 1:
				printf("\nSayiyi girin: ");
				scanf_s("%d", &girilenSayi);
				printf("\nKaclik tabandan (2-8 arasinda) onluk tabana cevirmek istediginizi giriniz: ");
				scanf_s("%d", &taban);
			
				if (taban >= 2 && taban <= 8) {
					HerhangiBirTabandanOnlukTabanaCevir(girilenSayi, taban);
					printf("\nDevam etmek icin herhangi bir tusa basin.");
					getch();
					system("CLS");
				}

				else {
					printf("\nHATA! Tekrar deneyin!\n");
					printf("\nDevam etmek icin herhangi bir tusa basin.");
					getch();
					system("CLS");
				}
			
				break;

		
			case 2:
				printf("\nSayiyi girin: ");
				scanf_s("%d", &girilenSayi);
				printf("\nOnluk tabandan kaclik tabana (2-8 arasinda) donusturmek istediginizi giriniz: ");
				scanf_s("%d", &taban);

				onluktanBaskaTabanaCevir(girilenSayi, taban);
				printf("\nDevam etmek icin herhangi bir tusa basin.");
				getch();
				system("CLS");

				break;


			case 3:
				printf("\nIslem sonlandi. Cikis yapiliyor.\n");
				kosul = 0;
				break;

		
			default:
				printf("\nHATA! Tekrar deneyin!\n");
				printf("\nDevam etmek icin herhangi bir tusa basin.");
				getch();
				system("CLS");

				break;

		}

	}

	return 0;
}

void HerhangiBirTabandanOnlukTabanaCevir(int grlnSyi, int tbn) {

	int ilkSayi = grlnSyi;
	int araSayi;
	int yeniSayi = 0;
	int us = 0;

	while (grlnSyi > 0) {

		araSayi = grlnSyi % 10;
		yeniSayi = yeniSayi + araSayi * pow(tbn, us);
		grlnSyi /= 10;
		us++;

	}

	printf("\n%d tabaninda girilmis sayi: %d\n", tbn, ilkSayi);
	printf("%d tabanindan 10'luk tabana donusturulmus sayi: %d\n", tbn, yeniSayi);
}

void onluktanBaskaTabanaCevir(int grln, int tabn) {
	
	int anaSayi = grln;
	int araSayi;
	int yeniSayi = 0;
	int us = 0;

	while (grln != 0) {
		
		araSayi = grln % tabn;
		yeniSayi = yeniSayi + araSayi * pow(10, us);
		grln /= tabn;
		us++;

	}

	printf("\n10'luk tabanda girilmis sayi: %d\n", anaSayi);
	printf("10'luk tabandan %d tabanina donusturulmus sayi: %d\n", tabn, yeniSayi);
	
}