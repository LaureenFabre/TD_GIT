#include <stdio.h>
//Martin Hurvois cir1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void InitialiserUneGrille (int grille[9][9], int n)
{
	for (int ligne = 0; ligne < n; ligne++)
	{
		for (int colonne = 0; colonne < n; colonne++)
		{
			grille[ligne][colonne] = 0;
		}
	}
	for (int ligne = 0; ligne < n; ligne++)
	{
		for (int colonne = 0; colonne < n; colonne++)
			printf("%d", grille[ligne][colonne]);
		printf("\n");
	}
}

int main()
{
	int grille_facile[9][9] = {
		{6, 0, 4, 9, 0, 0, 3, 0, 8},
		{3, 2, 0, 8, 0, 0, 4, 0, 0},
		{0, 0, 0, 6, 0, 4, 5, 2, 1},
		{1, 0, 2, 7, 4, 3, 8, 9, 6},
		{8, 0, 0, 0, 0, 0, 0, 0, 0},
		{9, 4, 7, 5, 8, 0, 0, 0, 0},
		{4, 9, 0, 2, 0, 8, 6, 0, 3},
		{0, 3, 6, 4, 0, 0, 0, 0, 0},
		{0, 7, 0, 0, 6, 9, 0, 0, 4}
	};

	int grille_moyenne[9][9] =
	{
		{1, 0, 0, 7, 0, 6, 0, 0, 0},
		{0, 0, 0, 0, 0, 8, 5, 6, 0},
		{6, 0, 8, 0, 5, 3, 4, 0, 1},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 6},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 3, 0, 0, 0, 0, 0, 0, 0},
		{8, 4, 0, 3, 0, 1, 0, 5, 9}
	};
	int grilleex1[9][9];
	InitialiserUneGrille(grilleex1, 3);

	return 0;
}
