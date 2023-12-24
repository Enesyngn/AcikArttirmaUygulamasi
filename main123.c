#include <stdio.h>
#include <string.h>
#define MAX_KATILIMCI 20 // Max kat�l�mc� say�s� 20'dir.

	typedef struct {
    	char isim[50];
    	float teklif;
    	int devam_et; // 1 devam etmek istiyor, 0 devam etmek istemiyor.
	} 
	
	Katilimci;

	int main(void) 
	{
    	Katilimci katilimcilar[MAX_KATILIMCI];
    	
    	int katilimci_sayisi = 0;
    	int devam_etme_istegi = 1; // Kat�l�mc�n�n devam etme iste�ini belirliyoruz.

    	printf("Lutfen teklif veren katilimcilarin bilgilerini giriniz:\n");

    // Kat�l�mc�lar�n isimlerini ve verdikleri teklifleri �ekti�imiz k�s�m.
    
    while (katilimci_sayisi < MAX_KATILIMCI && devam_etme_istegi) 
	{
        printf("Katilimcinin ismi: ");
        scanf("%s", katilimcilar[katilimci_sayisi].isim);

        printf("Katilimcinin teklifi: ");
        scanf("%f", &katilimcilar[katilimci_sayisi].teklif);

        printf("Devam etmek istiyor musunuz? (1 = Evet --- 0 = Hayir): ");
        scanf("%d", &devam_etme_istegi);

        katilimcilar[katilimci_sayisi].devam_et = devam_etme_istegi;
		katilimci_sayisi++;
    }

    // T�m teklifleri ekrana yazd�ran k�s�m.
    
    	printf("\n--------Tum Teklifler--------\n\n\n");
    	
    	int i = 0;
    	
    	for (i; i < katilimci_sayisi; ++i)
		{
        	printf("%s - %.2f\n", katilimcilar[i].isim, katilimcilar[i].teklif);
    	}

    // art�rmay� kazanan� bulup belirten k�s�m.
    
    	float en_yuksek_teklif = katilimcilar[0].teklif;
    	int kazanan_index = 0;
		int a = 1;
		
    	for (a; a < katilimci_sayisi; ++a) 
	{
        	if (katilimcilar[a].teklif > en_yuksek_teklif) 
		{
            en_yuksek_teklif = katilimcilar[a].teklif;
            kazanan_index = a;
        }
    }

    	printf("\nEn yuksek teklif veren kisi: %s (%.2f)\n\n", katilimcilar[kazanan_index].isim, katilimcilar[kazanan_index].teklif);
    
	return 0;
}
