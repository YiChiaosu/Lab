typedef struct point
{
	int x;
	int y;
}point;


#define LISTTYPE point

typedef struct list
{
	struct list *prev;
	LISTTYPE data;
	struct list *next;
} list;
typedef enum{next,prev} listmoveop;
typedef enum{back,front} listpushop;

typedef enum{false,true} bool;

void listmove(list **lat,listmoveop op);
bool listempty(list *lat);
void listpush(list **lat,LISTTYPE item,listpushop op)
{
	list *p = *lat;
	if(listempty(p))/*list is empty*/
	{
		*lat = (list*)malloc(sizeof(list));
		(*lat)->prev = NULL;
		(*lat)->data = item;
		(*lat)->next = NULL;
	}
	else
	{
		if(op == 0)
		{
			while(p->next != NULL)
			{
				listmove(&p,next);
			}
			p->next = (list*)malloc(sizeof(list));
			list *prev = p;
			p=p->next;
			p->prev = prev;
			p->data = item;
			p->next = NULL;
		}
		else
		{
			while(p->prev != NULL)
			{
				listmove(&p,prev);
			}
			p->prev = (list*)malloc(sizeof(list));
			list *next = p;
			p=p->next;
			p->prev = NULL;
			p->data = item;
			p->next = next;
		}
	}
}
