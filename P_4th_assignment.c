#include <stdio.h>

 

int main()

{

    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k,x=0;

 

    printf("Enter rows and column for first matrix: ");

    scanf("%d %d", &r1, &c1);

 

    printf("Enter rows and column for second matrix: ");

    scanf("%d %d",&r2, &c2);

 

    // Column of first matrix should be equal to column of second matrix

    while (c1 != r2)

    {

        printf("Error! column of first matrix not equal to row of second.\n\n");

        printf("Enter rows and column for first matrix: ");

        scanf("%d %d", &r1, &c1);

        printf("Enter rows and column for second matrix: ");

        scanf("%d %d",&r2, &c2);

    }

 

    // Storing elements of first matrix.

    printf("\nEnter elements of matrix 1:\n");

    for(i=0;i<r1;++i)

	{

		for(j=0;j<c1;++j)

		{

			printf("a%d%d=", i+1,j+1);

			scanf("%d", &a[i][j]);

		}

	}

    // Storing elements of second matrix.

    printf("\nEnter elements of matrix 2:\n");

	for(i=0;i<r2;++i)

	{

		for(j=0;j<c2;++j)

		{

			printf("b%d%d=", i+1,j+1);

			scanf("%d", &b[i][j]);

		}

	}

	

    // Initializing all elements of result matrix to 0

    // Fill the necessary program here.

    for(i=0;i<r1; ++i)

    {

		for(j=0;j<c2; ++j)

			result[i][j]=0;

	}

 

   for(i=0;i<r1; ++i)

    {

		for(j=0;j<c2; ++j)

		{ 

			for(k=0;k<c1; ++k) 

				result[i][j]+=a[i][k]*b[k][j];

       }

   }

 

	for(i=0;i<r1; ++i)

	{ 

		for(j=0;j<c2; ++j)

		{

			if(x++%c2==0)

				puts("");

			else 

				printf("");

		

		printf(" %d ", result[i][j]);

		}

	}

    return 0;

}
