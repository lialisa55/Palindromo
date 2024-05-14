#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long int n;
    scanf("%ld", &n);
    char vetor[1000];

    for (int i = 0; i < n; i++){
	    scanf("%s", vetor);
	    int k = strlen(vetor);
	    int palindromo = 1;

        for (int i = 0, j =k-1; i< j; i++, j--){
                if(vetor[i] != vetor[j]){
                    palindromo = 0;
                    break;
                }
        }
        if(palindromo){
            printf("%s eh um palindromo\n", vetor);
        }
        else{
            printf("%s nao eh um palindromo\n", vetor);
        }
    }
}
