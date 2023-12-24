#include <stdio.h>
#include <string.h>
#define MAX_KATILIMCI 20 // Max katýlýmcý sayýsý 20'dir.

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
    	int devam_etme_istegi = 1; // Katýlýmcýnýn devam etme isteðini belirliyoruz.

    	printf("Lutfen teklif veren katilimcilarin bilgilerini giriniz:\n");

    // Katýlýmcýlarýn isimlerini ve verdikleri teklifleri çektiðimiz kýsým.
    
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

    // Tüm teklifleri ekrana yazdýran kýsým.
    
    	printf("\n--------Tum Teklifler--------\n\n\n");
    	
    	int i = 0;
    	
    	for (i; i < katilimci_sayisi; ++i)
		{
        	printf("%s - %.2f\n", katilimcilar[i].isim, katilimcilar[i].teklif);
    	}

    // artýrmayý kazananý bulup belirten kýsým.
    
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
