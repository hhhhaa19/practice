#include<stdio.h>
#include<math.h>
#include<string.h>
/*
阶乘
factorial
  int main(void)
{
	int n;
	int a = 1;
	printf_s("please input n;\n");
		scanf_s("%d", &n);
	while (n > 0)
	{
		a = n * a;
		n--;
	}
	printf_s("%d", a);
	return 0;
}*
/*
* /*factoria*/
/*int factoria(int a)
{
	if (a == 1)
	{
		return a;
	}
	else
	{
		return a * factoria(a - 1);
	}
}
int main(void)
{
	int a;
	scanf_s("%d", &a);
	int b = factoria(a);
	printf_s("%d", b);
}*/
/* int main(void)
{
	int n,b,c;
	int a = 1;
	c = 0;
	printf_s("please input n;\n");
	scanf_s("%d", &n);
	b = n;
		while(n>0)
		{
			while (b > 0)
			{
				a = b * a;
				b--;
			}
			n--;
			c = a + c;
			a = 1;
			b = n;
		}
		printf_s("%d", c);
	return 0;
}*/
/*
对分
 int main(void)
{
	char name[5] = {1,2,3,4,8};
		int a, n;
		a = sizeof(name) / sizeof(name[0]);
		int left = 0;
		int right = a - 1;
		int mid = (left + right) / 2;
		
		
		printf("please give a number \n");
		scanf_s("%d", &n);
		while (left <=right)
		{mid = (left + right) / 2;
			if (n == name[mid])
			{
				printf_s("%d is located at %d\n", n, mid);
				break;
			}
			else if (n > name[mid])
			{
				left = mid + 1;
			}
			else if (n < name[mid])
			{
				right = mid - 1;
			}
		}
		if (left = right + 1)
		{
			printf_s("%d is not exsited\n",n);
		}
	return 0;
}*/

/*冒泡排序*//*
void Bubble(int* arr, int y)
{
	int i,j,b;
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < 5 - i; j++)
		{
			if (arr[j]<arr[j+1])
			{
				b = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = b;
			}
		}
	}
}
int main(void)
{
	int i;
	int arr[6] = { 1,2,3,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble(arr,sz);
	for (i = 0; i < 6; i++)
	{
		printf_s("%d", arr[i]);
	}
	return 0;
}*/
/*选排*/
/*int main(void)
{
	char arr[] = { 1,2,3,4,5,6 };
	int i,j,b;
	for (i = 0; i < 6; i++)
	{
		for (j = i+1; j < 6; j++)
		{
			if (arr[i]<arr[j])
			{
				b = arr[j];
				arr[j] = arr[i];
				arr[i] = b;
			}
		}
	}
	for (i = 0; i < 6; i++)
	{
		printf_s("%d", arr[i]);
	}
	return 0;
}*/
/*插排*/
/*int main(void)
{
	char arr[] = { 6,5,4,3,2,1 };
	int i, j, b;
	for (i=1;i<6;i++)
	{
		j = i - 1;
		b= arr[i];
		while (j >= 0 && b < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = b;
	}
	for (i = 0; i < 6; i++)
	{
		printf_s("%d", arr[i]);
	}
	return 0;
}*/
/*Luhn (a, b, c, d)*/
/*int main(void)
{
	int a, b, c, d;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c );
	scanf_s("%d", &d);
	switch ((a + b + c + d) % 10)
	{
	case 0 :
		printf_s("it is valid");
		break;
	default:
		break;
	}
	return 0;
}*/
/*判断质数*/
/*int main(void)
{
	int a,i;
	printf_s("please input a number to judge if it is a prime numbe\n");
	scanf_s("%d", &a);
	for (i =2;i<sqrt(a);i++)
	{
		if (a % i == 0)
		{
			printf_s("no");
		}
	}
	if (i >= sqrt(a))
	{
		printf_s("yes");
	}
	return 0;
}*/
/*分数求和1/1-1/2+1/3   */
/*??????/int main(void)
{
	int a,i;
	printf_s("please input a limit number\n");
	scanf_s("%d", &a);
	for (i = 1; i < a+1; i++)
	{
		if (i % 2 == 1)
		{
			printf_s("1/%d-", i);
		}
		if (i % 2 == 0)
		{
			printf_s("1/%d+", i);
		}
	}
	return 0;
}*/
/*打印乘法口*/
/*int main(void)
{
	int i, a, b;
	for (i = 1; i < 10; i++)
	{
		for (a = 1; a <= i; a++)
		{
			b = i * a;
			printf_s("%d*%d=%d ", a, i, b);
		}
		printf_s("\n");
	}
	return 0;
}*/
/*int isprime(int a)
{
	int i;
	for (i = 2; i <= sqrt(a) + 1; i++)
	{
		if (a% i ==0)
		{
			return 1;
		}
	}
}

int main(void)
{
	int a;
	printf_s("please input an int number to judge it is a prime number \n");
	scanf_s("%d", &a);
	if (isprime(a) == 1)
	{
		printf_s("no\n");
	}
	else
	{
		printf_s("yes\n");
	}
	return 0;
}*/
/*
void isprime(int x,int y)
{
	if (x % y == 0)
	{
		printf_s("no\n");
	}
	else if(y<=sqrt(x) or y==2 )
	{
		printf_s("yes\n");
	}
	else
	{
		isprime(x, y - 1);
	}
}
int main(void)
{
	int a;
	scanf_s("%d", &a);
	isprime(a,a-1);
}*/
/*int Binsorting(char ?????/y[], int x)
{
	int a = sizeof(y) / sizeof(y[0]);
	int left = 0;
	int right = a - 1;
	int mid = (left + right) / 2;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (x == y[mid])
		{
			return mid;
			break;
		}
		else if (x > y[mid])
		{
			left = mid + 1;
		}
		else if (x < y[mid])
		{
			right = mid - 1;
		}
	}
}
int main(void)
{
	int a;
	char arr[] = { 1,2,3,4,5,8,10 };
	
	scanf_s("%d", &a);
	int b = Binsorting( arr, a);
	printf_s("%d", b);
	return 0;
}*/
/*
void add(int* a)
{
	 *a=*a + 6;
}
int main(void)
{
	int sum = 0;
	int a,i;
	scanf_s("%d", &a);
	for (i = 0; i < a; i++)
	{
		 add(&sum);
	}
	printf_s("%d", sum);
	return 0;
}*/
/*recursion*/

/*void putout(int x)
{
	if (x < 10)
	{
		printf_s("%d", x);
	}
	else
	{
		printf_s("%d\n", x % 10);
		putout(x / 10);
	}
}
int main(void)
{
	int a;
	scanf_s( "%d", & a );
	putout(a);
	return 0;
}*/
/*辗转相减求最小质因数*/
/*
int gcd(int a, int b)
{
	if (a > b)
	{
		return gcd(a - b, b);
	}
	else if(a<b)
	{ 
		return gcd(b, a);
	}
	else
	{
		return a;
	}
}
int main(void)
{
	int a;
	scanf_s("%d",&a);
	int b;
	scanf_s("%d", &b);
	printf_s("%d", gcd(a, b));
	return 0;
}*/
/*辗转相除求最小质因数*/
/*
int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	if (a >= b)
	{
		return gcd(b, a % b);
	}
	else if (a < b)
	{
		return gcd(b, a);
	}
	
}
int main(void)
{
	int a;
	scanf_s("%d", &a);
	int b;
	scanf_s("%d", &b);
	printf_s("%d", gcd(a, b));
	return 0;
}*/
/*斐波那契*/
/*
int fib(int x)
{
	if (x == 1)
		return 1;
	else if (x == 2)
		return 1;
	else
		return fib(x - 2) + fib(x - 1);

}
int main(void)
{
	int a;
	scanf_s("%d", &a);
	printf_s("%d", fib(a));
	return 0;
}*/
/*数组*/
/*
int my_strlen(char* arr)
{
	if (*(arr + 1) =='\0')
	{
		return 1;
	}
	else
	{
		return 1 + my_strlen(arr + 1);
	}
}
int main(void)
{
	char arr[] = "bit";
	printf_s("%d", my_strlen(arr));
	return 0;*/
/*?????
* /*
int sum(char* arr)
{
	if (*(arr + 1) == '\0')
		return *arr-48;
	else
		return *arr-48 + sum(arr + 1);
}
int main(void)
{
	char arr[] = "12345678" ;
	printf_s("%d", sum(arr));
	return 0;
}*/
/*
int main(void)
{
	int arr[10] = {0};
	int* p = arr;
	int i;
	for (i = 0; i < 10; i++)
	{
		*p = 1;
		printf_s("%p\n", p);
		p = p + 1;
		
	}
	for (i = 0; i < 10; i++)
	{
		printf_s("%d\n",arr[i]);
	}
	return 0;
}
/*
int main()
{
	int arr[10] = {0};
	for (i = 0; i < 10; i++)
	{
		arr[i] =  
	}
	return 0;
}*/
/*??????????????????????????
int main()
{
	char arr[3] = "ji";
	char arr2[3] = "he";
	char* parr[2] = { arr,arr2 };
	int i;
	for (i = 0; i < 2; i++)
	{
		printf_s("%s", parr[i]);
	}
	return 0;
}/*
/*
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr[2] = { arr,arr2 };
	int i;
	for (i = 0; i < 2; i++)
	{
		int j;
		for (j = 0; j < 10; j++)
		printf_s("%d\n", *(parr[i]+j));
	}
}*/