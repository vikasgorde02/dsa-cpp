#include<iostream>
using namespace std;
struct Sparse
{
int row;
int col;
int value;
};
int main()
{
	int timetable[5][6]={
	{0,0,120,0,0,0},
	{0,90,0,0,0,0},
	{0,0,0,150,0,0},
	{80,0,0,0,0,0},
	{0,0,0,0,200,0}};
	struct Sparse sparse[30];
	int i,j,k=0;
	int row=5,col=6;
	printf("Railway Timetable Matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",timetable[i][j]);
		}
		printf("\n");
	}
	//Convert Normal Matrix into Sparse Matrix
	for(i=0; i<5;i++)
	{
		for(j=0; j<6; j++)
		{
			if(timetable [i][j] != 0)
			{
				sparse[k].row=i;
				sparse[k].col=j;
				sparse[k].value=timetable[i][j];
				k++;
			}
		}
	};
	printf("\n");
	printf("Sparse Matrix Represent\n");
	printf("\n");
	printf("Row \tColumn \tActive Schedule \n");
	for(i=0; i<k; i++)
	{
	printf("%d\t%d\t%d\n",sparse[i].row,sparse[i].col,sparse[i].value);
}
printf("Total No of Active Train Schedule =%d\n",k);
return 0;
}

// Railway Timetable Matrix:
// 0       0       120     0       0       0
// 0       90      0       0       0       0
// 0       0       0       150     0       0
// 80      0       0       0       0       0
// 0       0       0       0       200     0

// Sparse Matrix Represent

// Row    Column   Active Schedule
// 0       2       120
// 1       1       90
// 2       3       150
// 3       0       80
// 4       4       200
// Total No of Active Train Schedule =5
