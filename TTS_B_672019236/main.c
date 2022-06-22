#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int pilih;
   printf("Nim=672019236\n");
   printf("1.Piramid\n");
   printf("2.Matriks\n");
   printf("3.Bilangan Prima\n");
   printf("4.Manipulasi String\n");
   printf("5.Exit\n");
   scanf("%d",&pilih);



   if(pilih==1){
        system("cls");
   printf("\t**MENU PIRAMID**\n\n");
   int i,j,tinggi;

   printf("Enter number =");
   scanf("%d",&tinggi);

   for(i=1;i<=tinggi*2;i++){
    if(i%2==1){
        for(j=tinggi*2;j>=1;j--){
            printf(" ");
        }
        for(j=0;j<=i*2-1;j++){
            printf("*");
        }
    }
    else {
        for(j=tinggi*2;j>=i+1;j--){
            printf(" ");
        }
        for(j=2;j<i*2;j++){
            printf("*");
        }
    }printf("\n");
   }

 printf("\n\ntekan apapun untuk mengulang");
getch();
system("cls");
return main();
   }


   else if(pilih==2){
        system("cls");
        printf("\t**MENU MATRIKS\n");
int matriks1[10][10];
printf("matriks 1=\n");
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++){
            printf("Masukkan matriks[%d][%d]=",i,j);
            scanf("%d",&matriks1[i][j]);
        }
    }printf("\n");

    int matriks2[10][10];
printf("\nmatriks 2=\n");
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++){
            printf("Masukkan matriks[%d][%d]=",i,j);
            scanf("%d",&matriks2[i][j]);
        }
    }
    int menu_matriks;
    printf("Menu Matriks:\n");
    printf("1.Penjumlahan matriks 1 + matriks 2\n");
    printf("2.Penjumlahan matriks 1 - matriks 2\n");
    printf("3.Transpose matriks 1 + matriks 2\n");
    printf("Masukkan pilihan=\n");
    scanf("%d",&menu_matriks);

        if(menu_matriks==1){
            int penjumlahan[10][10];
            printf("\nHasil penjumlahan matrik 1 dan 2 :\n");
                for(int baris=1;baris<=2;baris++){
                    for(int kolom=1;kolom<=2;kolom++){
                        penjumlahan[baris][kolom]=matriks1[baris][kolom] + matriks2[baris][kolom];
                        printf("%d\t",penjumlahan[baris][kolom]);
                    }printf("\n");
                }
                 printf("tekan apapun untuk mengulang");
getch();
system("cls");
return main();
        }
    if(menu_matriks==2){
    int pengurangan[10][10];
    printf("\nHasil pengurangan matriks 1 dan 2 :\n");
        for(int baris=1;baris<=2;baris++){
            for(int kolom=1;kolom<=2;kolom++){
                pengurangan[baris][kolom]=matriks1[baris][kolom] - matriks2[baris][kolom];
                printf("%d\t",pengurangan[baris][kolom]);
            }printf("\n");
        }
         printf("tekan apapun untuk mengulang");
getch();
system("cls");
return main();
    }

if(menu_matriks==3){
    int transpose[10][10];

  printf("Hasil transpose matriks 1 & 2:\n");
int i,j;
printf("matriks 1\n");
  for (i = 1; i < 3; i ++){
    for(j = 1; j < 3; j++){
      transpose[j][i] = matriks1[i][j];
    }
  }
  for (i = 1; i < 3; i ++){
    for(j = 1; j < 3; j++){
      printf("%d\t",transpose[i][j]);
    }
    printf("\n");
  }
  printf("matriks 2\n");
  for (i = 1; i < 3; i ++){
    for(j = 1; j < 3; j++){
      transpose[j][i] = matriks2[i][j];
    }
  }

  for (i = 1; i < 3; i ++){
    for(j = 1; j < 3; j++){
      printf("%d\t",transpose[i][j]);
    }
    printf("\n");
  }
}
 printf("\n\ntekan apapun untuk mengulang");
getch();
system("cls");
return main();
}


   else if(pilih==3){
        system("cls");
        printf("\t**MENU PRIMA**\n\n");

    int awal,akhir,i,j,bilangan,x;
    printf("Masukkan nilai awal :");
    scanf("%d",&awal);
    printf("Masukkan nilai akhir :");
    scanf("%d",&akhir);

    if (awal==1){
        printf("Masukkan angka diatas 1");
    }
    else{
    for(i=awal;i<=akhir;i++)
    {
        if(i==2)
        {
        printf("%d\n",i);
        }
        else{
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    x=1;
                    break;
                }
                else{
                    x=0;
                }

            }
            if(x==0)
            {
                printf("%d\n",i);
            }
            else {
                printf("");
            }
        }
    }
    printf("\n");
}printf("\n\n");
printf("tekan apapun untuk mengulang");
getch();
system("cls");
return main();
   }



   else if(pilih==4){
        system("cls");
char nama[1000];
int p;
printf("** MENU STRING **\n");
printf("Masukkan string tanpa spasi=");
scanf("%s",nama);
p=strlen(nama);

for(int i=0;i<=p;i++){
    if(i%2 == 0){
        printf("%c\t",nama[i]);
    }
}
printf("\n");
printf("    ");
for(int j=0;j<=p;j++){
    if(j%2 ==1){
        printf("%c",nama[j]);
        printf("       ");
    }
}


printf("\ntekan apapun untuk mengulang");
getch();
system("cls");
return main();
   }



   else if(pilih==5){
        return 0;
   }



   else{
        system("cls");
    printf("GELUD KUY >:)\n\n\n");

    printf("tekan apapun untuk mengulang");
getch();
system("cls");
return main();
   }
}


