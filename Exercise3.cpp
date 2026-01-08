#include <stdio.h>
#include <string.h>


void saisie(char* chain)
{
	printf_s("entrer le texte\n");
	fgets(chain, 100, stdin);

}

int main(int argc, char** argv)
{
	int t;
	char chain[101];

		saisie(chain);
	
	t = strlen(chain);
	t--;

	for (int i = 0; i < t; i++)
	{
		printf_s("%c\n",chain[i]);
		printf_s("%p\n", chain[i]);
	}



	return 0;
}