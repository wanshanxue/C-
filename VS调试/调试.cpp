#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}

/* 地址分配由高地址到低地址，数组读取由低地址到高地址*/
//int main()
//{
//	{
//		int tmp = 0;
//		printf("%d\n", tmp);
//	}
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//	system("pause");
//	//release发布版优化使内存分配改变
//
////	int i = 0; 循环控制条件紧贴着for写；
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//
//void test0()
//{
//	printf("hehe");
//}
//void test1()
//{
//	test0();
//}
//void test2()
//{
//	test1();
//}
//void test3()
//{
//	test2();
//}
//int main()
//{
//	test3();
//}

//int main()
//{
//	int i = 0;				
//	int sum = 0;			
//	int n = 0;		
//	int ret = 1;
//	scanf_s("%d", &n);		
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)	//const定义为常量，保护src（地址）的数据不被修改
//{
//
//	/*实现嵌套的复制*/					// 自写版
//	//int i = 0;
//	//for (i = 0; src[i] != '\0'; i++)
//	//{
//	//	dest[i] = src[i];
//	//}
//	/*实现非嵌套的复制*/
//	//dest[i] = src[i];				//实现'\0'的添加
//
//	/*while (*src != '\0')				//第一版
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;*/
//
//	//if (dest != NULL && src != NULL)	//健壮性
//	//{
//	//	while (*dest++ = *src++)		//高效性
//	//	{
//	//		;
//	//	}
//	//}									//第二版
//	char* ret = dest;
//	assert(dest!=NULL);				//断言
//	assert(src != NULL);
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)		//高效性
//	{
//		;
//	}
//	
////	return &dest[0];
//	return ret;
//}

//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);			//字符串拷贝
//	printf("%s", my_strcpy(arr1, arr2));	//链式访问
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	const int* p = &num;	        //const修饰的是*p（num），一个int数据
////	int* const p;					//const限制指针变量本身，p不能被改变
//									//const int* p是让p（地址）的数据不可以变，但p（地址）可以变
//									//int* const p是让p（地址）不可以变，但地址上的数据可以变
//	int num1 = 29;					//const修饰的是标识符？
//	p = &num;
//	return 0;
//}

int my_strlen(const char* str)
{
	int count = 0;					//标识名要有意义
	assert(str != NULL);			//保证指针的有效性
	while (*str++ != '\0')
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "hello";
	printf("%d\n", strlen(arr));
	printf("%d\n",my_strlen(arr));
	return 0;
}