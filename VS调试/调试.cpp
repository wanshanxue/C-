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

/* ��ַ�����ɸߵ�ַ���͵�ַ�������ȡ�ɵ͵�ַ���ߵ�ַ*/
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
//	//release�������Ż�ʹ�ڴ����ı�
//
////	int i = 0; ѭ����������������forд��
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

//char* my_strcpy(char* dest, const char* src)	//const����Ϊ����������src����ַ�������ݲ����޸�
//{
//
//	/*ʵ��Ƕ�׵ĸ���*/					// ��д��
//	//int i = 0;
//	//for (i = 0; src[i] != '\0'; i++)
//	//{
//	//	dest[i] = src[i];
//	//}
//	/*ʵ�ַ�Ƕ�׵ĸ���*/
//	//dest[i] = src[i];				//ʵ��'\0'�����
//
//	/*while (*src != '\0')				//��һ��
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;*/
//
//	//if (dest != NULL && src != NULL)	//��׳��
//	//{
//	//	while (*dest++ = *src++)		//��Ч��
//	//	{
//	//		;
//	//	}
//	//}									//�ڶ���
//	char* ret = dest;
//	assert(dest!=NULL);				//����
//	assert(src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++)		//��Ч��
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
//	my_strcpy(arr1, arr2);			//�ַ�������
//	printf("%s", my_strcpy(arr1, arr2));	//��ʽ����
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	const int* p = &num;	        //const���ε���*p��num����һ��int����
////	int* const p;					//const����ָ���������p���ܱ��ı�
//									//const int* p����p����ַ�������ݲ����Ա䣬��p����ַ�����Ա�
//									//int* const p����p����ַ�������Ա䣬����ַ�ϵ����ݿ��Ա�
//	int num1 = 29;					//const���ε��Ǳ�ʶ����
//	p = &num;
//	return 0;
//}

int my_strlen(const char* str)
{
	int count = 0;					//��ʶ��Ҫ������
	assert(str != NULL);			//��ָ֤�����Ч��
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