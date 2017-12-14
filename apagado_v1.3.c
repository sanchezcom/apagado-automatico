#include "stdio.h"
#define VERSION 1.3
int main(){
	int t=0;
	char comando[55];
	system("color 76");
	do{
		printf("--- MENU ---\a\n");
		printf("1.- Apagar\n");
		printf("2.- Reiniciar\n");
		printf("5.- Informacion\n");
		printf("9.- Cancelar apagado\n");
		printf("0.- Salir\n\n");
		printf("Opcion: ");
		scanf("%d",&t);
		if(t==5){
			system("cls");
			printf("%s\n%s\n%s\n%s\n",
			"Programa de apagado y reiniciado del ordenador para Windows",
			"Probado para Micro$oft Windows XP",
			"Ojo, no controlados casos de introduccion de datos erronea",
			"sanchezcom.com");
			system("pause");
			system("cls");
		}
	}while(t==5);    
	switch(t){
		case 0:
			break;
		case 1:
			printf("tiempo(minutos): ");
			scanf("%d",&t);
			t*=60;
			sprintf(comando,"shutdown -s -f -t %d -c \"apagado %2.1f by sanchezcom\"",t,VERSION);
			system(comando);
			break;
		case 2:
			printf("tiempo(minutos): ");
			scanf("%d",&t);
			t*=60;
			sprintf(comando,"shutdown -r -f -t %d -c \"apagado %2.1f by sanchezcom\"",t,VERSION);
			system(comando);
			break;
		case 9:
			system("shutdown -a");
			break;
		default:
			break;
	}
	printf("apagado %2.1f - sanchezcom.com\n",VERSION);
	sleep(3000);
	return 0;
}

