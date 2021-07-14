#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **allocate(int h , int w )
{
	int **p; 
   
    p = (int **)malloc(h*sizeof (int *));

    for (int i=0; i<h; i++)
	   printf("%10d", &p[i]);

    printf("\n\n");

    for (int i=0;i<h;i++)
       p[i] = (int *)malloc(w*sizeof(int));
    
    return(p);

}

int main(int argc, char *argv[])
{

	int **p;
	int M,N;

	printf ("Give M and N \n");
  	scanf ("%d%d", &M, &N);

  	p = allocate(M,N);
  	for (int i = 0; i < M; ++i)
  	{
  		for (int j = 0; j < N; ++j)
  		{
  			printf ("%10d", &p[i][j]);
  		}
  		printf("\n");
  	}

	return 0;
}