///*#include<stdio.h>
//#includ*/e<windows.h>
//int main()
//{
//	typedef structAAA;
//	{
//		unsigned char ucld : 1;
//		unsigned char ucpara0 : 2;
//		unsigned char ucState : 6;
//		unsigned char ucTail : 4;
//		unsigned char ucAvail;
//		unsigned char ucTai12: 4;
//		unsigned char ucData;
//	}; AAA_S;
//	pragma back(4);
//	//pragma back(1);
//	printf("%d\n", sizeof(AAA_S));
//}



#include<stdio.h>
#define row 3
#define col 3
int find_num(int arr[row][col], int rows, int cols, int key)
{
	int i = 0;
	int j = 2;
	while ((j< 3) && (i < 3))
	{
		if (arr[i][j]>key)
		{
			j--;
		}
		else if (arr[i][j] < key)
		{
			i++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	int res=find_num(arr, row, col, 4);
	printf("%d\n",res);
	return 0;
}

	