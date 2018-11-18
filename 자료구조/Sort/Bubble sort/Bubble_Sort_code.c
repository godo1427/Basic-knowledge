#include <stdio.h>
void Bubble_Sort(int list[], int length);

int main()
{
	int arr[10] = {1, 71, 5, 7, 5, 6, 4, 8, 9, 1};
	int length, i;
	
	length = sizeof(arr)/sizeof(int);
	
	Bubble_Sort(arr, length);
	
	for(i=0;i<length;i++)
		printf("%d ", arr[i]);
}

void Bubble_Sort(int list[], int length)
{
	int i, j, tmp;
	
	for(i=length-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(list[j]<list[j+1])
			{
				tmp = list[j];
				list[j] = list[j+1];
				list[j+1] = tmp;
			}
		}
	}
}
