#include <stdio.h>

int main(){
	int anno;

printf("Introduce el ano:\n");

scanf("%d", &anno);

if (anno%4 == 0) {

if (anno%100 != 0) printf("El año %d es bisiesto\n", anno);

else if ((anno/100)%4 == 0) printf("El ano %d es bisiesto\n", anno);

else printf("El ano %d no es bisiesto\n", anno);

}

else printf("El ano %d no es bisiesto\n", anno);

return 0;
}