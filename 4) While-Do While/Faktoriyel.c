#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{	
	setlocale(LC_ALL,"Turkish");
	
	int sayi;
	int faktoriyel=1;
	
	printf("Faktöriyelini almak istediğiniz sayıyı giriniz.\n");
	scanf("%d",&sayi);
	
	while (sayi>=0) {
		if (sayi==0) {
			faktoriyel *= 1;
		}

		else {
			faktoriyel *= sayi;
			}
			
	sayi--;
	
	}
	printf ("%d",faktoriyel);
	
	return 0;
}
