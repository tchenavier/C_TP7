#include <stdio.h>
#include <math.h>

void saisie(float* aa, float* bb, float* cc)
{
	scanf_s("%f,var1");
	scanf_s("%f,var2");
	scanf_s("%f,var3");
}

float* calcul(float aa, float bb, float cc)
{
	float delta = bb*bb - 4 * aa * cc;
	
	return &delta;
	}

int main(int argc, char** argv)
{
   float a, b, c, *delta;


	saisie(&a, &b, &c);
	delta = calcul(a, b, c);

	float* resulta = new float;
	float* resulta2 = new float;

	if (*delta > 0)
	{
		*resulta = -b + sqrt(*delta) / 2 * a;
		*resulta2 = -b - sqrt(*delta) / 2 * a;

		printf_s("%f\n", *delta);
		printf_s("Il y a deux de solution Réelle.\n");
		printf_s("%f\n", *resulta);
		printf_s("%f\n", *resulta2);

	}
	else if (*delta == 0)
	{
		*resulta - b / 2 * a;
		printf_s("%f\n", *delta);
		printf_s("Il n'y a qu'une solution Réelle.\n");
		printf_s("%f\n", *resulta);
	}
	else
	{
		printf_s("%f\n", *delta);
		printf_s("Il n'y a pas de solution Réelle.\n");
	}
	

	delete resulta;
	delete resulta2;

    return 0;
}