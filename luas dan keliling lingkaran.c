#include <stdio.h>
int main(){
        float pi, r, luas, keliling;
        pi = 3.14;
	
        printf("Program Luas dan Keliling Lingkaran\n");
        printf("===================================\n\n");
        printf("Masukkan jari-jari : ");
        scanf("%f", &r);

        luas = pi*r*r;
        printf("Luas Lingkaran : %.2f \n", luas);
        keliling = 2*pi*r;
        printf("Keliling Lingkaran : %.2f \n", keliling);
	
        return 0;
}

