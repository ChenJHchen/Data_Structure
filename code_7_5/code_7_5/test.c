#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//typedef struct LNODE
//{
//	int data;
//	struct LNODE* next;
//
//}LNODE,*LinkList;
//LNODE* GelElem(LinkList L, int i)
//{
//	int j = 1;
//	LNODE* p = L->next;
//	if (i == 0)
//	{
//		return L;
//	}
//	if (i < 1)
//		return NULL;
//	while (p != NULL && j < i)
//	{
//		p = p->next;
//		j++;
//	}
//	return p;
//}
//int main()
//{
//	LinkList L;
//	
//	return 0;
//}
#include<stdbool.h>

//typedef struct LNODE
//{
//	int data;
//	struct LNODE* next;
//
//}LNODE,*LinkList;
//bool Inlitlist(LinkList *L)
//{
//	(*L) = (LNODE *)malloc(sizeof(LNODE));
//	if (L == NULL)
//		return false;
//	(*L)->next = NULL;
//	return true;
//}
//void test()
//{
//	LinkList L;
//	Inlitlist(&L);
//}
//int main()
//{
//	test();
//	return 0;
//}

typedef struct LNODE
{
	int data;
	struct LNODE* next;

}LNODE,*LinkList;

bool ListInsert(LinkList *L,int i,int e)
{
	if (i < 1)
		return false;
	LNODE* p;
	int j = 0;
	p = L;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	LNODE *s = (LNODE*)malloc(sizeof(LNODE));
	s->data = e;
	s->next = p->next;
	p->next = s;
}
int main()
{	
	int i = 0;
	int e = 0;
	LinkList L;
	ListInsert(&L,i,e);
	return 0;
}