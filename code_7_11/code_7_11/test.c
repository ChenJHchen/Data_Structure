#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define Maxsize 10
//typedef struct
//{
//	int data[Maxsize];
//	int length;
//}Sqlist;
//void Initlist(Sqlist *L)
//{
//	for (int i = 0; i < Maxsize; i++)
//		L->data[i] = 0;
//	    L->length = 0;
//}
//int main()
//{
//	Sqlist L;
//	Initlist(&L);
//	return 0;
//}


//typedef struct
//{
//	int data[Maxsize];
//	int length;
//}Sqlist;
//void Initlist(Sqlist* L)
//{
//	for (int i = 0; i < Maxsize; i++)
//
//	L->data[i] = 0;
//
//	L->length = 0;
//}
//int main()
//{
//	Sqlist L;
//	Initlist(&L);
//	for (int i = 0; i < Maxsize; i++)
//		
//		printf("data[%d] = %d\n", i, L.data[i]);
//	return 0;
//}

//#include<stdlib.h>
//#define InitSize 10
//typedef struct
//{
//	int* data;
//	int MaxSize;
//	int length;
//}Seqlist;
//void Initlist(Seqlist *L)
//{
//	L->data = (int*)malloc(InitSize * sizeof(int));
//	L->length = 0;
//	L->MaxSize = InitSize;
//
//}

//void IncreaSize(Seqlist *L,int len)
//{
//	int* p = L->data;
//	L->data = (int*)malloc((L->MaxSize+len) * sizeof(int));
//	for (int i = 0; i < L->length; i++)
//	{
//		L->data[i] = p[i];
//	}
//	L->MaxSize = L->MaxSize + len;
//	free(p);

//}
//int main()
//{
//	Seqlist L;
//	Initlist(&L);
//	IncreaSize(&L, 5);
//	return 0;
//}
//#include<stdbool.h>
//#define InitSize 10
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}Sqlist;
//bool ListInsert(Sqlist* L,int i,int e)
//{
//	if (i<1 || i>L->length + 1)
//		return false;
//	if (L->length >= MaxSize)
//		return false;
//	for (int j = L->length; j >= i; j--)
//		L->data[j] = L->data[j - 1];
//	L->data[i - 1] = e;
//	L->length++;
//	return true;
//}
//int main()
//{
//	Sqlist L;
//	ListInsert(&L, 3, 3);
//	return 0;
//}
//
//#include<stdbool.h>
//#define InitSize 10
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	
//	int length;
//}Sqlist;
//
//bool ListDelete(Sqlist* L, int i, int *e)
//{
//	if (i<1 || i>L->length)
//		return false;
//	e = L->data[i - 1];
//	for (int j = i;j<L->length;j++)
//		L->data[j - 1] = L->data[j];
//	L->length--;
//	return true;
//}
//int main()
//{
//	Sqlist L;
//
//	int e = -1;
//	if (ListDelete(&L, 3, &e))
//	printf("已删除第三个元素，删除的元素值为 = %d\n", e);
//	else
//		printf("不合法，删除失败\n");
//	return 0;
//}
//
//
//





//#include<stdlib.h>
//#include<stdbool.h>
//
//#define InitSize 10
//typedef struct
//{
//	int* data;
//	int MaxSize;
//	int length;
//}Seqlist;
//void Initlist(Seqlist* L)
//{
//	L->data = (int*)malloc(InitSize * sizeof(int));
//	L->length = 0;
//	L->MaxSize = InitSize;
//
//}
//bool ListDelete(Seqlist* L, int i, int *e)
//{
//	if (i<1 || i>L->length)
//		return false;
//	e = L->data[i - 1];
//	for (int j = i;j<L->length;j++)
//		L->data[j - 1] = L->data[j];
//	L->length--;
//	return true;
//}
//int main()
//{
//	
//	
//	Seqlist L;
//	Initlist(&L);
//	int e = -1;
//		if (ListDelete(&L, 3, &e))
//		printf("已删除第三个元素，删除的元素值为 = %d\n", e);
//		else
//			printf("不合法，删除失败\n");
//	return 0;
//}



#include<stdbool.h>
#include<stdlib.h>

typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode,*LinkList;
bool ListItst(LinkList L)
{
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}
void test()
{
	LinkList L = 0;
	ListItst(L);
}
int main()
{

	
	test();
	return 0;
}