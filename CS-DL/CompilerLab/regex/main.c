#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "regex.h"

struct point
{
	int x;
	int y;
};

int main()
{
	struct point a = {1,2};
	struct point b = a;
	printf("This is a point:(%d,%d)\n",b.x,b.y);
	list lat;
	listpushTail(&lat,1);
	printf("Hello");
	listpushTail(&lat,3);
	listpushTail(&lat,5);
	listpushHead(&lat,7);
	list *p = &lat;
	printf("%x_%d\n",p,p->data);
	listmove(&p,prev);
	printf("%x_%d\n",p,p->data);
	listmove(&p,next);
	listmove(&p,next);
	printf("%x_%d\n",p,p->data);
	listmove(&p,next);
	printf("%x_%d\n",p,p->data);

	printf("Go Back ======= \n");
	listmove(&p,prev);
	printf("%x_%d\n",p,p->data);
	listmove(&p,prev);
	printf("%x_%d\n",p,p->data);
	return 0;
}
