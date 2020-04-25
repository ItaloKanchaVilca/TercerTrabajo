// tercertarea.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;



//4.26 dinujar un cuadrado con *
/*
int main()
{
	int n;

	cout << "ingrese el tamaño del cuadrado:  ";
	cin >> n;


	if (n != 1)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "*";
		}
		cout << "\r\n";

		for (int i = 0; i < n - 2; i++)
		{
			cout << "*";
			for (int j = 0; j < n - 2; j++)
			{
				cout << " ";
			}
			cout << "*";
		}
		cout << "\r\n";

		for (int i = 0; i < n; i++)
		{
			cout << "*";
		}
	}

	else
		{
			cout << "*";
		}
	return 0;
}
*/

//4.27 numero capicua
/*
int main()
{
	int numero, aux, resto, numeroI = 0;

	cout << "dame un numero: ";
	cin >> numero;

	aux = numero;

	while (aux > 0)
	{
		resto = aux % 10;
		aux = aux / 10;
		numeroI = numeroI * 10 + resto;
	}

	if (numero == numeroI)
	{
		cout << numero << " es capicua" << endl;
	}

	else
	{
		cout << numero << " no es capicua" << endl;

	}

	return 0;
}
*/

//4.18 numero binario a decimal con vectores
/*
int main()
{

	int numero, digito, posicion=0, resultado=0;
	long vector[] = { 1,2,4,8,16,32,64,128,256,512,1024 };

	cout << "inserte un numero binario: ";
	cin >> numero;

	while (numero > 0)
	{
		digito = numero % 10;

		if (digito == 1)
		{
			resultado = resultado + vector[posicion];
		}
		posicion++;
		numero = numero / 10;
	}

	cout << numero << " convertido en decimal es: " << resultado << endl;

	return 0;
}
*/

//4.30 sucesion fibonacci
/*
int main()
{
	int numero = 0, numero1 = 0, numero2 = 1, i = 1;

	cout << "sucesion de fibonacci: " << endl;

	while (i)
	{
		numero1 = numero2;
		numero2 = numero;
		numero = numero1 + numero2;
		i++;
		cout << numero << " ";
	}
	return 0;
}
*/

//5.12 producto de los numeros multiplos de 3 ente e y 50
/*
int main()
{
	cout << "los numeros multiplos de 3 entre 3 y 50:" << endl;

	int i;
	long resultado = 1;

	for (i = 3; i <= 50; i++)
	{
		if (i % 3 == 0)
		{
			resultado *= i;
		}

	}

	cout<<"la multiplicacion de los multiplos de 3 entre 3 y 50 son :" << resultado;
	return 0;
}
*/
