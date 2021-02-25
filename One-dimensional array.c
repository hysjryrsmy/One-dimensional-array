#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//1. 一维数组的创建和初始化
//type_t    arr_name   [const_n]
//元素类型   数组名      数组的元素个数：常量表达式，用来指定数组的大小
//数组的初始化是指，在创建数组的同时给数组的内容一些合理初始值（初始化）

/*
int main()
{
	//创建一个数组——存放整形——10个
	//int arr[10] = {1,2,3};//不完全初始化，剩下的元素默认初始化为0
	//char arr2[5] = {'a','b'};
	//char arr4[5] = { 'a', 98};//ok, ；b的ASC11码值为98
	//char arr3[5] = "ab";//ok
//	int n = 5;
//	char ch[n]; //err:应输入常量表达式
	char arr4[] = "abcdef"; //7个元素，字符串中的\0也占空间
	printf("%d\n", sizeof(arr4));
	//sizeof 计算arr4所占空间的大小
	//放了7个元素-char 7*1 = 7
	
	printf("%d\n",strlen(arr4));
	//strlen 求字符串的长度 —— ‘\0’之前的字符个数；到'\0'停止
	//6
	
	return 0;
}
*/

//1.strlen 和 sizeof 没有什么关联
//2.strlen 是求字符串长度的——只能针对字符串求长度——库函数——使用得引头文件
//3.sizeof 计算变量、数组、类型的大小——单位是字节——操作符
/*
#include <string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c'};
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2)); //因为后面没有\0，不知道什么时候停止，所以输出的是一个随机值
	return 0;
}
*/

/*
int main()
{
	//char arr[] = "abcdef";//[a][b][c][d][e][f][\0]  下标最大5
	////printf("%c\n", arr[3]);
	//int i = 0;
	//int len = strlen(arr);
	//for (i = 0; i < len; i++)  //strlen(arr) 可以替换6
	////strlen返回的是无符号整形
	//{
	//	printf("%c\n", arr[i]);
	//}

	int arr[] = { 1,2,3,4,5,6,7,8,9,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/
//数组是使用下标来访问的，下标是从0开始
//数组的大小可以通过计算得到的
//数组在内存中是连续存放的

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);//打印地址用%p
	}
	return 0;
}