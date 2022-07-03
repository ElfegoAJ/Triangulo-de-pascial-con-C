#include <stdio.h>
#include<windows.h>

long factorial(int n)
{
	int c;
	long resultado = 1;
	for( c = 1 ; c <= n ; c++ )
	resultado = resultado*c;
	return ( resultado );
}

int main()
{
	int i, n, c, opc=0;

	do{
	printf("\t*************************\n");
	printf ("\t*\tBIENVENIDO\t*\n");
	printf("\t*************************\n");
	printf ("Presione 1 para hacer el triangulo de pascal.\n");
	printf ("Presione 2 para salir.\n");
	scanf ("%i", &opc);
	
	switch (opc)
	{
		case 1:
	printf("\t\tIngrese el n%cmero de filas que desea ver en el tri%cngulo pascal\n", 163, 160);
	scanf("%d",&n);
	for ( i = 0 ; i < n ; i++ )
	{
		for ( c = 0 ; c <= ( n - i - 2 ) ; c++ )
			printf(" ");
		for( c = 0 ; c <= i ; c++ )
			printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
		printf("\n");
	}

		break;
	
	}	
	system("pause");system("cls");	
	}while (opc != 2);
	printf("Saliendo...");
	return 0;
}
