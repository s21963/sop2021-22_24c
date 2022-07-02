#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

/*
Zaj�cia 4: Zadania 1
1. Napisz program obliczaj�cy sum� liczb wprowadzonych przez u�ytkownika (ze standardowego wej�cia) i wypisuj�cy wynik na standardowe wyj�cie.

2. Przer�b ten program tak, aby warto�� by�a zwracana jako kod zako�czenia programu. Wy�wietl t� warto�� w linii komend.

3. Napisz program wy�wietlaj�cy tradycyjn� choink� o zadanej wysoko�ci. Wysoko�� niech b�dzie podana jako parametr wywo�ania programu.
58 304 40 11

Ad 1.
*/

int main (){

    int count, sum;
    int * pCount;
//-------------------Pobieram liczbe elementow--------------------------------
	printf("Declare the number of elements you would like to enter: \n");
	scanf("%d", &count);
	printf("you entered: %d\n", count);

//-------------------Alokuje pamiec i wpisuje elementy w tablice--------------
	pCount = (int*)calloc(count, sizeof(int));
	for(int i = 0; i < count; i++){
        printf("\nEnter the element number %d:  ", i+1);
        scanf(" %d", &pCount[i]);
	}
//-------------------Drukuje wprowadzone numery-------------------------------
	printf("Numbers you've entered: ");
	for(int i = 0; i < count-1; i++){
        printf("%d, ", pCount[i]);
	}
	printf("%d\n", pCount[count-1]);

//------------------Obliczam sume i drukuje wynik-----------------------------
	for(int i = 0; i < count; i++)
        sum += pCount[i];
    printf("The sum of numbers you've entered is: %d\n", sum);

	free(pCount);

	return 0;

	}

