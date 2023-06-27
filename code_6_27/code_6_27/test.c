#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//void test(int x)
//{
//	x = 1024;
//	printf("test内部函数 x  = %d\n", x);
//}
//int main()
//{
//	int x = 1;
//	printf("调用test前 x  =%d\n", x);
//	test(x);
//	printf("调用test后 x  =%d\n", x);
//
//	return 0;
//}



//#define Maxsize 10
//
//typedef struct
//{
//	int data[Maxsize];
//	int length;
//}Sqlist;
//void InitList(Sqlist *L)
//{
//	for (int i = 0; i < Maxsize; i++)
//	{
//		L->data[i] = 0;
//		L->length = 0;
//	}
//}
//int main()
//{
//	Sqlist L;
//	InitList(&L);
//	return 0;
//}

//#include <stdio.h>
//#define MAXsize 10
//
//
//typedef struct 
//{
//    int data[MAXsize];  
//    int length;         
//} SqList;
//
//
//void InitList(SqList* L)
//{
//    for (int i = 0; i < MAXsize; i++)
//    {
//        L->data[i] = 0;//如果不初始化为0 ， 内存中会有“脏数据”
//        L->length = 0; //不能省略
//    }
//}
//
//int main() {
//    SqList L;
//    InitList(&L);
//
//    return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#define InitSize 10
typedef struct
{
	int* data;
	int MaxSize;
	int length;
}Seqlist;

void InitList(Seqlist *L)
{
	L->data = (int*)malloc(InitSize * sizeof(int));
	L->length = 0;
	L->MaxSize = InitSize;
}
void IncreaseSize(Seqlist *L,int len)
{
	int* p = L->data;
	L->data = (int*)malloc((L->MaxSize + len) * sizeof(int));
	for (int i = 0; i < L->length; i++)
	{
		L->data[i] = p[i];

	}
	L->MaxSize = L->MaxSize + len;
	free(p);

}

int main()
{
	Seqlist L;
	InitList(&L);
	IncreaseSize(&L, 5);

	return 0;
}