/*#include <stdio.h>

void saisie(int* val, int* nb, int* tab)
{
	do {

		scanf_s("%d", val); //déja un pointeur

		

		if (*val == 0)
		{
			break;
		}
		else
		{
			tab[*nb] = *val;
			(*nb)++;//pour acrémenter la valeur
		}

	} while (*nb < 20*/ /*&& *val != 0*//*);
	
}

void affiche(int* tab, int nb)
{
	if (nb > 0)
	{ 
	for (int i = 0; i < nb; i++) {

	printf("%d\n",tab[i]);

	}
	printf_s("%d",nb);
	}
	else
	{
		printf_s("0");
	}

}

int main(int argc, char** argv)
{
	int tab[21], nb=0, val;

	saisie(&val, &nb, tab);
	
	affiche(tab, nb);

	return 0;
}*/