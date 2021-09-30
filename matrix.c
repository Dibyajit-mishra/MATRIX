#include<stdio.h>
main()
{int arr[3][3],i,j;
printf("\n\n Read a 2D array of size 3*3 and print the matrix:\n");
printf("input elements in the matrix:\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
     {printf("element-[%d],[%d]:",i,j);
     scanf("%d",&arr[i][j]);
	 }
}
printf("\n The matrix is:\n");
for(i=0;i<3;i++)
{	
printf("\n");
for(j=0;j<3;j++)
   printf("%d\t",arr[i][j]);
}
printf("\n\n");
return 0;
}

