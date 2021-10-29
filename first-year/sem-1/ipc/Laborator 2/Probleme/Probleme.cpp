#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <stdlib.h>

#define pi 3.1415926535

#include <Windows.h>

using namespace std;

//1. Să se scrie un program care sa citească de la tastatura numele si vârsta dvs. si sa le afișeze
void NumeVarsta()
{
    printf("1. Sa se scrie un program care sa citeasca de la tastatura numele si varsta dvs. si sa le afiseze\n");

    string n;
    int v;

    printf("Numele : ");  scanf("%s", n);
    printf("Varsta : ");  scanf("%i", &v);

    printf("\nNumele : %s", n);
    printf("\nVarsta : %i", v);
    
}

//2. Sa se scrie un program C care afișează produsul a doua variabile întregi, citite de la tastatură.
void Prod2()
{
    printf("2. Sa se scrie un program C care afiseaza produsul a doua variabile intregi, citite de la tastatura.\n");

    int a, b;
    printf("Insert Nr1 : "); scanf("%i", &a);
    printf("Insert Nr2 : "); scanf("%i", &b);

    printf("\n%i * %i = %i", a, b, a*b);

    printf("\n\n");
}

//3. Sa se scrie un program C care convertește un unghi din grade în radiani (rad = grad * pi / 180).
void ConvertGradeToRad()
{
    printf("3. Sa se scrie un program C care convertește un unghi din grade in radiani (rad = grad * pi / 180).\n");

    float rad, grad;
    printf("Insert Grad : "); scanf("%f", &grad);
    printf("grad[%.3f] = rad[%.3f] ", grad, rad = grad * pi / 180);
    printf("\n\n");
}

//4. Sa se scrie un program C care face conversia din grade Celsius în grade Fahrenheit, C = (F – 32) * 5 / 9 = > F = (9 * C) / 5 + 32
void ConvertCelsiusToFahrenheit()
{
    printf("4. Sa se scrie un program C care face conversia din grade Celsius in grade Fahrenheit, C = (F – 32) * 5 / 9 = > F = (9 * C) / 5 + 32\n");

    float C, F;
    printf("Insert Celsius : "); scanf("%f", &C);
    printf("Celsius[%.2f] = Fahrenheit[%.2f]", C, F = (9 * C) / 5 + 32);
    printf("\n\n");
}

//5. Sa se scrie un program C care afișează cifra unitarilor unei variabile de tip întreg. 
void ShowUnitary()
{
    printf("5. Sa se scrie un program C care afisează cifra unitarilor unei variabile de tip întreg. \n");

    int a, nr;
    printf("Insert Nr : "); scanf("%i", &a);
    nr = a % 10;
    printf("Cifra unitarilor : %i", nr);
    printf("\n\n");
}

//6. Sa se scrie un program care citește de la tastatura lungimile laturilor unui triunghi si afișează aria acestuia, calculata cu formula lui Heron.
void AriaTriangleHeron()
{
    printf("6. Sa se scrie un program care citește de la tastatura lungimile laturilor unui triunghi si afisează aria acestuia, calculata cu formula lui Heron.\n");

    float a, b, c, p, s;
    printf("Insert Latura 1 = ");   scanf("%f", &a);
    printf("\nInsert Latura 2 = "); scanf("%f", &b);
    printf("\nInsert Latura 3 = "); scanf("%f", &c);

    p = (a + b + c) / 2;
    s = sqrt( p * (p - a) * (p - b) * (p - c) );

    printf("\nAria triunghiului este: %.2f \n", s);

    printf("\n\n");
}


int main()
{
    char  NrEx;

    for (int i = 0; i == 0 ;)
    {
        system("cls"); 
        printf("Introdu Nr Problemei [1 - 6] : ");
        scanf("%c", &NrEx);

        switch (NrEx)
        {
            case 1 : { system("color F0"); system("cls"); NumeVarsta();                 system("pause");  break; }
            case 2 : { system("color F0"); system("cls"); Prod2();                      system("pause");  break; }
            case 3 : { system("color F0"); system("cls"); ConvertGradeToRad();          system("pause");  break; }
            case 4 : { system("color F0"); system("cls"); ConvertCelsiusToFahrenheit(); system("pause");  break; }
            case 5 : { system("color F0"); system("cls"); ShowUnitary();                system("pause");  break; }
            case 6 : { system("color F0"); system("cls"); AriaTriangleHeron();          system("pause");  break; }
            default:
            { printf("Eroor ReIntrodu Nr Problemei [1 - 6] : "); system("color FC"); break;  }
        }
    }

	return 0;
}
