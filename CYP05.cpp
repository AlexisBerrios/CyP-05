
#include <stdio.h>
#define Contcalif 2000

void main()
{
	int  i, y, j = 0, k, z = 0, c, contador, num;
	int Numcuenta[Contcalif];
	float calif[Contcalif];
	float final[Contcalif], sust[Contcalif], sust2;
	int sust3;

	scanf_s("%i", &c);                                //pedir limite, la calif a a estar limitando a la cantidad de los alumnos
	for (y = 0; y < c; y++)
	{
		scanf_s("%i", &Numcuenta[y]);                 //rellenar datos num de cuenta y sus respectivas calif
		scanf_s("%f", &calif[y]);
	}

	for (i = 0; i < c - 1; i++)                      //numrepetidos
	{
		for (y = 0; y < c - 1; y++)
		{
			if (calif[y] > calif[y + 1])
			{
				sust3 = Numcuenta[y]; sust2 = calif[y];
				Numcuenta[y] = Numcuenta[y + 1]; calif[y] = calif[y + 1];
				Numcuenta[y + 1] = sust3; calif[y + 1] = sust2;

			}
			if (Numcuenta[y] > Numcuenta[y + 1])
			{
				sust3 = Numcuenta[y]; sust2 = calif[y];
				Numcuenta[y] = Numcuenta[y + 1]; calif[y] = calif[y + 1];
				Numcuenta[y + 1] = sust3; calif[y + 1] = sust2;
			}
		}
	}

	for (i = 0; i < c; i++)                   //ordenar          
	{
		contador = 0;
		num = Numcuenta[i];
		sust[j] = num;
		j++;
		for (k = 0; k < c; k++)
		{
			if (sust[k] == num)
			{
				contador++;
			}
		}
		if (contador == 1)
		{
			final[z] = num;
			z++;
		}
	}

	printf("%i", z);         //imprimir datos
	for (i = 0; i < c; i++)
	{
		if (Numcuenta[i] != Numcuenta[i + 1])
		{
			printf("\n%i %f", Numcuenta[i], calif[i]);
		}
	}


	//for (i = 0; i < contAlumnos; i++) {                        // ORDENA LOS NUMEROS DE CUENTA E MAYOR a menor

	//	for (j = 0, k = 1; k <= contAlumnos; j++, k++)
	//	{
	//		if (numerosdCuenta[j] > numerosdCuenta[k]) {
	//			int sust = numerosdCuenta[k];
	//			numerosdCuenta[k] = numerosdCuenta[j];
	//			numerosdCuenta[j] = sust;
	//		}
	//	}

	//}

	//for (i = 0; i < contAlumnos; i++) {                         //ENCONTRAR NUMEROS DE CUENTA REPETIDOS
	//	int a=numerosdCuenta[i], c;
	//	
	//	c = i + 1;

	//	for (int y=c; y < contAlumnos; y++) {
	//		int b = numerosdCuenta[y];

	//		if (a==b) {

	//			printf_s("repetidos %i\n", a);		
	//		}	
	//		/*for (b=numerosdCuenta[y]; b != a; b++) {
	//			int norep = b;

	//		}*/
	//	}
	//}
}