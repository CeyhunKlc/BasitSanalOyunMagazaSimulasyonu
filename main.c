#include <stdio.h>



int main()
{
    int yas, kategori, uyelik;
    float fiyat = 0, indirimliFiyat;


    printf("Yasinizi giriniz:");
    scanf("%d",&yas);

    printf("Üyelik Tipini seciniz (1:Normal, 2:Premium):");
    scanf("%d",&uyelik);

    printf("Kategori Seciniz:\n");
    printf("1: Aksiyon\n");
    printf("2: RPG\n");
    printf("3: Simulasyon \n");
    printf("4: Indie\n");

    scanf("%d",&kategori);

    switch(kategori)
    {
        case 1 :
            fiyat = 150;
            if(yas < 16)
            {
                printf("Hata: Bu kategori icin yasiniz uygun degildir!\n");
                return 0;
            }
            break;


        case 2 :
            fiyat = 200;
            if(yas < 14)
            {
                printf("Hata: Bu kategori icin yasiniz uygun degildir!\n");
                return 0;
            }
            break;



        case 3 :
            fiyat = 250;
            if(yas < 15)
            {
                printf("Hata: Bu kategori icin yasiniz uygun degildir!\n");
                return 0;
            }
            break;


        case 4 :
            fiyat = 80;
            if(yas < 12)
            {
                printf("Hata: Bu kategori icin yasiniz uygun degildir!\n");
                return 0;
            }
            break;


        default:
            printf("Gecersiz kategori secimi:!\n");
            return 0 ;

    }




    if(uyelik == 2)
    {
        indirimliFiyat = fiyat * 0.8;

        if(kategori == 2)
        {
            indirimliFiyat *= 0.9;
        }
        printf("Premium indirimli fiyat: %.2f TL\n", indirimliFiyat);
    }
    else if (uyelik == 1)
    {
        printf("Normal Uye Fiyat: %.2f TL\n", fiyat);
    }
    else
    {
        printf("Gecersiz uyelik tipi");
    }

    return 0 ;





}