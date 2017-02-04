#include <stdio.h>

struct SortItem
{
	int data;
	int key;
}
int SwapItem(SortItem* a,SortItem *b)
{
	SortItem swap = *a;
	*b = *a;
	*a = swap;
	return 0;
}

int BubbleSort(SortItem* item)
{
	SortItem *ptarget = item;
	
	SortItem *pnext = ptarget++;
	if(ptarget->key > pnext->key)
	{
		SwapItem(ptarget,pnext);
	}
}

int main()
{
	return 0;
}
