#include<stdio.h>
main()
{
	struct Siswa{
	int NIS;
	char nama[30];
	char JK;
	
	}SWA[1][2];
	
int i, a;
int NIS;
char nama, JK;
for (i=0;i<3;i++);
{
	
}
 printf("\nData ke-%i\n", a);
 printf("masukkan nis :");
 scanf("%i", &SWA[i][a].NIS);
 printf("masukkan nama :");
 scanf("%s", &SWA[i][a].nama);
 printf("masukkan JK :");
 scanf("%s", &SWA[i][a].JK);
 
 printf("address of NIS:%i\n",&SWA[i][a].NIS);
 printf("address of nama:%i\n",&SWA[i][a].nama);
 printf("address of JK:%i\n",&SWA[i][a].JK);
 
 a++;
 
printf("\nNIS          nama         JK            \n");
printf("------------ \n");

for (i=0;i<3;i++)
{
	
printf("%i %10s %10s %10i\n", SWA[i][a].NIS,SWA[i][a].nama,SWA[i][a].JK);

}
}




