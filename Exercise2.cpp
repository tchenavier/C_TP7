#include <stdio.h>

void affiche(int* var, int i)
{
    int maximum = var[i];

	printf("le maximum est %d\n", maximum);
	printf("%p\n", &maximum);
    printf("en position %d \n", i);

}

int main(int argc, char** argv)
{
	int var1[6];
    int i, j, temp, index, reponse;
    
    for ( i = 0; i < 6; i++)
    {
        scanf_s("%d",&var1[i]);
    }

    for (i = 0; i < 6 - 1; i++) {

        index = i;

        for (j = i + 1; j < 6; j++) {
            if (var1[index] > var1[j]) {
                index = j;
            }
        }
        if (index != i) {
            temp = var1[i];
            var1[i] = var1[index];
            var1[index] = temp;
        }
    }
    
    affiche(var1, i);

	return 0;
}