#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int a[8] = { 0 };
	
	a[0] = 37;
	a[1] = 0;
	a[2] = 50;
	a[3] = 46;
	a[4] = 34;
	a[5] = 46;
	a[6] = 0;
	a[7] = 13;
	
	printf("%d", a[0]);

}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const n = 10;
	int i, a[n] = { 0 };

	for (i = 0; i < n; i++)
	{
		printf("Введите элемент массива a[%d]= ",i);
		scanf_s("%d", &a[i]);
	}

	printf("\nСодержание массива:");

	for (i = 0; i < n; i++)
	{
		printf("a[%d]=%d,", i, a[i]);
	}

}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const n = 12;
	int i, a[n] = { 0 };

	for (i = 0; i < 12; i++)
	{
		a[i] = 163 + rand() % 27;
				
		printf("a[%2.1d]=%4.d \n", i, a[i]);
	}

}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const n = 100;
	int a[n] = { 0 }, i;

	for (i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 98;
	}

	while (true)
	{
		printf("Введите индекс элемента в массиве: ");
		scanf_s("%d", &i);

		if (i >= n || i < 0)
		{
			printf("\nВы ввели индекс превышающий размер массива. \n");
			printf("Введите индекс элемента в массиве: ");
			scanf_s("%d", &i);
		}

		printf("a[%d]=%d \n", i, a[i]);
	}

}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const n = 5;
	int a[n] = { 0 }, i;

	for (i = 0; i < n; i++)
	{
		a[i] = i+1;
	}

	for (i = n-1; i >=0; i--)
	{
		printf("a[%d]=%d \n", i, a[i]);
	}


}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const n = 10;
	int arr[n] = { 0 }, i, a, b;

	for (i = 0; i < n; i++)
	{
		arr[i] = i * i;

		printf("a[%d]=%d \n", i, arr[i]);
	}
	
	printf("\nВывод элемента массива - индекс = ");
	scanf_s("%d", &i);

	a = sqrt(arr[i]);

	printf("\n a[%d]=sqrt(%d)= %d", i, arr[i], a);
	
	a = arr[0 + rand() % 10];
	b = arr[0 + rand() % 10];
	
	printf("\n Среднее арифметич a[i]=%d и a[i]=%d   => %d ", a, b, (a+b)/2);
	
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int arr[5] = { 2,4,6,8,10 }, i=0, b;

	

	for (i = 0; i < 5; i++)
	{
		arr[i] = arr[i] * 2;

		printf("arr[%d]=%d \n", i, arr[i]);
				
	}

	printf("\n ");

	for (i = 0; i < 5; i++)
	{
		arr[i] = arr[i] - 1;

		printf("arr[%d]=%d \n", i, arr[i]);

	}

	printf("\n ");
	
	b = arr[0];

	for (i = 0; i < 5; i++)
	{
		arr[i] = arr[i] / b;

		printf("arr[%d]=%d \n", i, arr[i]);

	}


}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const n = 12;
	int arr[n] = { 0 }, i = 0, sum=0;



	for (i = 0; i < n; i++)
	{
		
		arr[i] = 1 + rand() % 20;
		sum += arr[i];

		printf("arr[%d]=%d \n", i, arr[i]);

	}
		printf("\nОбщая стоимость всех предметов = %d", sum);

}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const n = 28;
	int arr[n] = { 0 }, i = 0, sum=0;



	for (i = 0; i < n; i++)
	{

		arr[i] = 1 + rand() % 20;
		sum += arr[i];

		printf("arr[%d]=%d \n", i, arr[i]);

	}
	printf("\nСреднее кол-во осадков в феврале = %d", sum/n);


}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask10\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const n = 30;
	int arr[n] = { 0 }, i = 0, sum = 0, b=500;



	for (i = 0; i < n; i++)
	{

		arr[i] = 10 + rand() % 20;
		sum += arr[i];

		printf("arr[%d]=%d \n", i, arr[i]);

	}

	printf("\n Общая масса %d предметов = %d ", n, sum);

	printf("\n Грузоподъемность автомобиля = %d", b);

	if (sum > b) printf("Вес %d предметов %d превышает грузоподъемность автомобиля на %d кг",sum, n, b - sum);


}



void Task11()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask11\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const n = 50;
	int arr[n] = { 0 }, i = 0, sum = 0, b = 500;



	for (i = 0; i < n; i++)
	{

		arr[i] = -50 + rand() % 200;
		sum += arr[i];

		printf("arr[%d]=%d \n", i, arr[i]);

	}

	printf("\n\n a.	все неотрицательные элементы \n");

	for (i = 0; i < n; i++)
	{

		if (arr[i]>0)	printf("arr[%d]=%d \n", i, arr[i]);

	}


	printf("\n\n b.	все элементы, не превышающие число 100 \n");

	for (i = 0; i < n; i++)
	{

		if (arr[i] <= 100)	printf("arr[%d]=%d \n", i, arr[i]);

	}



	printf("\n\n c.	все четные элементы \n");

	for (i = 0; i < n; i++)
	{

		if (arr[i] % 2 == 0)	printf("arr[%d]=%d \n", i, arr[i]);

	}
	

}



void Task12()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask12\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const n = 10;
	int arr[n] = { 0 }, i = 0, sum = 0, b = 500;



	for (i = 0; i < n; i++)
	{

		arr[i] = 2 + rand() % 50;
		sum += arr[i];

		printf("arr[%d]=%d \n", i, arr[i]);

	}

	printf("\n\n элементы, стоящие на четных местах \n");

	for (i = 0; i < n; i=i+2)
	{

		printf("arr[%d]=%d \n", i, arr[i]);

	}

	printf("\n\n элементы, стоящие на нечетных местах \n");

	for (i = 1; i < n; i=i+2)
	{

		printf("arr[%d]=%d \n", i, arr[i]);

	}

}



int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (12) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;
		case 10: {Task10(); } break;
		case 11: {Task11(); } break;
		case 12: {Task12(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");


}