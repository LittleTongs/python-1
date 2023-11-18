#define _CRT_SECURE_NO_WARNINGS
//猜数字游戏（可改为数字炸弹）


//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void game()
//{
//	int input2 = 0;
//	int ret = rand() % 100 + 1;
//	do
//	{
//		{
//			printf("请猜数字：");
//			scanf("%d", &input2);
//			if (input2 < ret)
//			{
//				printf("猜小了，请继续尝试\n");
//			}
//			else if (input2 > ret)
//			{
//				printf("猜大了，请继续尝试\n");
//			}
//			else
//			{
//				printf("猜对了，真厉害！\n");
//				break;
//			}
//		}
//	} while (1);
//}


//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		printf("请输入一个数（1或0）\n（1表示进行游戏，0表示退出游戏）：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}
//

//正序排列

//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 1,5,3,6,2 };
//	int i = 0;
//	int n = 0;
//	for (n = 0; n < 4; n++)
//	{
//		for (i = 0; i < 4; i++)
//		{
//			if (arr[i] < arr[i + 1])
//				;
//			else if (arr[i] > arr[i + 1])
//			{
//				int a = 0;
//				int b = 0;
//				a = arr[i + 1];
//				b = arr[i];
//				arr[i] = a;
//				arr[i + 1] = b;
//			}
//		}
//
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//



//#include<stdio.h>
// 
//int swap(int a, int b)
//{
//	int z = 0;
//	z = a;
//	a = b;
//	b = z;
//	return (a, b);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);
//	swap(a, b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//

//#include <stdio.h>
//
//void swap(int* x, int* y) {
//	int temp = *x;               //形参
//	*x = *y;                      //注意需用指针，否则用上面的会出错
//	*y = temp;
//}
//int add(int a, int b)
//{
//	return a + b;          //不需要指针，因为没对传入变量进行改变
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);    //实参
//	swap(&a, &b);//当需要对传入变量需要修改时，需要使用指针，使其对应的函数与其产生练习
//	printf("%d %d\n", a, b);
//	return 0;
//}       
// 
             

//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int* array = NULL;
//    int size = 0;
//    int input;
//    printf("请输入元素（输入-1结束）：");
//    while (1) 
//    {
//
//        scanf("%d", &input);
//
//        if (input == -1) {
//            break;
//        }
//        //arry = (int*)realloc(arry,size*sizeof(int);
//        size++;
//        array = (int*)realloc(array, size * sizeof(int));//为数组分配
//
//        if (array == NULL) {
//            printf("内存分配失败。\n");
//            return 1;
//        }
//
//        array[size - 1] = input;//在动态内存分配的情况下，我们可以根据实际需要动态地调整数组的大小，从而使得数组的大小可以根据变量来确定。
//    }
//
//    printf("数组元素: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", array[i]);
//    }
//
//    free(array);
//
////    return 0;
////}
//
//打印一个数的每一位：
#include<stdio.h>
void print(int a)          //递归：反复调用自身函数
{
    if (a > 9)
    {
        print(a /10);
    }
    printf("%d ", a % 10);
}


int main()
{
    int num = 0; 
    scanf("%d", &num);
    print(num);
    return 0;
}



















