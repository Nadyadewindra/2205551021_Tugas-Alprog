#include <stdio.h>

int main(){
printf("Program Luas dan Volume\n");
printf("=======================\n\n");

float pi, r, t, luas, volume;
pi = 3.14;
              
      printf("Masukkan jari-jari : ");
scanf("%f", &r);
printf("Masukkan tinggi tabung : ");
scanf("%f", &t);
	
volume = pi*r*r*t;
printf("Volume Tabung adalah : %.2f \n", volume);
luas = 2*pi*r*r*t;
printf("Luas Tabung adalah : %.2f \n", luas);
	
return 0;
}

