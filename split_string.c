#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **malloc2d(int rows, int columns)
{
	char **result = (char **) malloc(rows * sizeof(char *));
	for (int row = 0; row < rows; ++row)
	{
		result[row] = (char *) malloc(columns * sizeof(char));
	}

	return result;
}

void free2d(char **array,int rows, int columns)
{
	for (int row = 0; row < rows; ++row)
	{
		free(array[row]);
	}

	free(array);
}

char **split_string(char str[])
{
	char **newString = malloc2d( 4 , 5);
	int j,ctr;

	j=0; ctr=0;
	for (int i = 0; i <=(strlen(str)); ++i)
	{
		if (str =='\0')
		{
			/* code */
		}
		else if (str[i] == '+')
		{
			newString[ctr][j] = '\0';
			ctr++;
			j = 0;
			// newString[ctr][j] = str[i];
			// j++;
			// newString[ctr][j] = '\0';
			// ctr++;
		}
		else
		{
			newString[ctr][j] = str[i];
			j++;
		}
	}
	//sprintf(strNew[0] ,"%s" ,str);
	//sprintf(strNew[1] ,"%s" , "+");

	return newString;
}

int main(int argc, char const *argv[])
{
	
	char **strNew;
	char strNum[20]="56+98";

	strNew = split_string(strNum);
	//printf("strNew : %s\n", strNew[0][0] );

	printf("strNew : %s\n", *(strNew));
	printf("strNew : %s\n", *(strNew+1));
	printf("strNew : %s\n", *(strNew+2));
	printf("strNew : %s\n", *(strNew+3));


	//printf("strNew : %s\n", *((*strNew)+1));


	free2d(strNew , 4 , 5);

	return 0;
}