#include <stdio.h>
 main()
{
    char Nama[20], NIM[20], Kelas[10], TTL[50], alamat[90], hobby[20], hp[20];
    printf("Nama                 : ");
    gets(Nama);
    printf("NIM                  : ");
    gets(NIM);
    printf("Kelas Paralel        : ");
    gets(Kelas);
    printf("Tempat/Tanggal Lahir : ");
    gets(TTL);
    printf("Alamat               : ");
    gets(alamat);
    printf("Hobby                : ");
    gets(hobby);
    printf("No. HP               : ");
    gets(hp);

    printf("\nNama                 : %s\n", Nama);
    printf("NIM                  : %s\n", NIM);
    printf("Kelas Paralel        : %s\n", Kelas);
    printf("Tempat/Tanggal Lahir : %s\n", TTL);
    printf("Alamat               : %s\n", alamat);
    printf("Hobby                : %s\n", hobby);
    printf("No. HP               : %s\n", hp);
    return 0;
}
