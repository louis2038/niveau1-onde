
#include <stdio.h>
#include <stdlib.h>

/// \param n nombre de fréquences données
/// \param freqs la liste des fréquences à vérifier
void sur_les_ondes(int n, int* freqs) {
    /* TODO Afficher la fréquence optimale. */
	// detection multiple
	int *multiple = NULL;
	multiple = (int*)malloc(sizeof(int) * n);

	int indice = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(freqs + i) % 3 == 0 )
		{
			*(multiple + indice) = *(freqs + i);
			indice += 1;	
		}else{
			*(multiple + (n-i+indice-1)) = *(freqs + i);
		}
	}
	int small = *(multiple);
	for (int i = 1; i < indice; i++)
	{
		if ( small > *(multiple + i))
		{
			small = *(multiple+i);
		}
	}
	
	printf("%d",small);
	

	

}

int main() {
    int n;
    scanf("%d", &n);
    int* freqs = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        scanf("%d", &freqs[i]);
    sur_les_ondes(n, freqs);

    return 0;
}
