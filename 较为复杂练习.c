#define _CRT_SECURE_NO_WARNINGS
//��������Ϸ���ɸ�Ϊ����ը����


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
//			printf("������֣�");
//			scanf("%d", &input2);
//			if (input2 < ret)
//			{
//				printf("��С�ˣ����������\n");
//			}
//			else if (input2 > ret)
//			{
//				printf("�´��ˣ����������\n");
//			}
//			else
//			{
//				printf("�¶��ˣ���������\n");
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
//		printf("������һ������1��0��\n��1��ʾ������Ϸ��0��ʾ�˳���Ϸ����\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}
//

//��������

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
//	int temp = *x;               //�β�
//	*x = *y;                      //ע������ָ�룬����������Ļ����
//	*y = temp;
//}
//int add(int a, int b)
//{
//	return a + b;          //����Ҫָ�룬��Ϊû�Դ���������иı�
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);    //ʵ��
//	swap(&a, &b);//����Ҫ�Դ��������Ҫ�޸�ʱ����Ҫʹ��ָ�룬ʹ���Ӧ�ĺ������������ϰ
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
//    printf("������Ԫ�أ�����-1��������");
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
//        array = (int*)realloc(array, size * sizeof(int));//Ϊ�������
//
//        if (array == NULL) {
//            printf("�ڴ����ʧ�ܡ�\n");
//            return 1;
//        }
//
//        array[size - 1] = input;//�ڶ�̬�ڴ���������£����ǿ��Ը���ʵ����Ҫ��̬�ص�������Ĵ�С���Ӷ�ʹ������Ĵ�С���Ը��ݱ�����ȷ����
//    }
//
//    printf("����Ԫ��: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", array[i]);
//    }
//
//    free(array);
//
////    return 0;
////}
//
//��ӡһ������ÿһλ��
#include<stdio.h>
void print(int a)          //�ݹ飺��������������
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



















