#include <stdio.h>
#include <math.h>

void saisie(float* aa, float* bb, float* cc)
{
	scanf_s("%f,var1",aa);
	scanf_s("%f,var2",bb);
	scanf_s("%f,var3",cc);
}

float* calcul(float aa, float bb, float cc)
{
	float delta = bb*bb - 4 * aa * cc;
	float* resulta = nullptr; //pas d'espace allouer

	if (delta > 0)
	{
		resulta = new float[3]; //Alloue une taille de 3 pour le nombre de solution; plus solution 1 et 2
		resulta[0] = 2;
		resulta[1] = -bb + sqrt(delta) / 2 * aa;
		resulta[2] = -bb - sqrt(delta) / 2 * aa;
	}
	else if (delta == 0)
	{
		resulta = new float[2]; //Alloue une taille de 3 pour le nombre de solution; plus solution 1
		resulta[0] = 1;
		resulta[1]= - bb / 2 * aa;
	}

	return resulta;
	}

int main(int argc, char** argv)
{
   float a, b, c, *solutions;


	saisie(&a, &b, &c);
	solutions = calcul(a, b, c);

	if (solutions != nullptr)
	{
		if (solutions[0] == 2)
		{
			printf_s("Il y a deux de solution Reelle.\n");
			printf_s("%f\n", solutions[1]);
			printf_s("%f\n", solutions[2]);
		}
		else if (solutions[0] == 1)
		{
			printf_s("Il n'y a qu'une solution Reelle.\n");
			printf_s("%f\n", solutions[1]);
		}
		

		delete solutions;
	}
	else
	{
		printf_s("Il n'y a pas de solution Reelle.\n");
	}
	
    return 0;
}