#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void listmove(list **lat,listmoveop op)
{
	switch(op)
	{
		case 0:
			*lat = (*lat)->next;
			break;
		case 1:
			*lat = (*lat)->prev;
		break;
	}
}

bool listempty(list *lat)
{
	if(lat == NULL)
		return true;
	else
		return false;
}

int main()
{
	list *p = NULL;
	point pp = {1,2};
	listpush(&p,pp,back);
	point pp2={3,4};
	listpush(&p,pp2,back);
	point pp3={5,6};
	listpush(&p,pp3,back);
	list *ptr = p;
	printf("1st:%d\n",ptr->data.x);
	ptr = ptr->next;
	printf("2nd:%d\n",ptr->data.x);
	ptr = ptr->next;
	printf("3rd:%d\n",ptr->data.x);
	ptr = ptr->prev;
	printf("2nd:%d\n",ptr->data.x);
	return 0;
}
