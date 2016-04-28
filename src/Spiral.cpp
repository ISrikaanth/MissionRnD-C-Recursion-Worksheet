/*
Write a program to generate elements of a matrix in spiral order.
Store the generated elements in single dimensional array and return that array.

Directions for Spiral are : Go Right ,Go Down ,Go Left, Go Up
Ex:

Matrix:
1	2	3
4	5	6
7	8	9

Spiral order:
1	2	3	6	9	8	7	4	5

Given matrix is a two dimensional array(input_array) with dimensions rows, columns.
If rows, columns are invalid then return NULL.
If input_array is NULL then return NULL.

Example Input :
int board[2][3]={
				 {4,6,7},
				 {1,3,8}
				};
spiral(2,2,(int **)board); // Rows followed by columns followed by board

Example Output : Return an array consisting of {4,6,7,8,3,1};

Note : Check the function Parameters ,Its a double pointer .

*/


#include "stdafx.h"
#include<stdlib.h>
int *spiral(int rows, int columns, int **input_array)
{
	int i=0,j=0,k=0,c=0,l=1,*new_array,mid1,mid2;
	new_array = (int *)malloc(100 * sizeof(int));
	if(rows<=0||columns<=0||input_array==NULL)
	   return NULL;
	mid1 = rows / 2;
	mid2 = columns / 2;
	if (rows == 1 && columns == 1)
	{
		new_array[k] = input_array[0][0];
		return new_array;
	}
	else
	{
		while (rows >= mid1 && columns >= mid2)
		{
			while (j < columns)
			{
				new_array[k] = input_array[i][j];
				j++;
				k++;
			}
			i++;
			j--;
			while (i < rows)
			{
				new_array[k] = input_array[i][j];
				i++;
				k++;
			}
			i--;
			j--;
			while (j >= c)
			{
				new_array[k] = input_array[i][j];
				j--;
				k++;
			}
			i = rows - 2;
			j++;
			while (i >= l)
			{
				new_array[k] = input_array[i][j];
				i--;
				k++;
			}
			rows--;
			columns--;
			i = c + 1;
			j = c + 1;
			c++;
			l++;
		}
		i = rows - 1;
		j = columns - 1;
		new_array[k] = input_array[i][j];
		k++;
		new_array[k] = '\0';
		return new_array;
	}
}