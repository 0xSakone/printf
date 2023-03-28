#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

    int len = 12;
    int len2;
// //     // unsigned int ui;
// //     // void *addr;
//     char lettre[1];
    //char *mot = "Bonjour\0Hello";
    char *s = NULL;
//     //int entier = 42;

//     len = _printf("%s %$%s avb %s %%%%\n", s, lettre, mot);
//     len2 = printf("%s %$%s avb %s %%%%\n", s, lettre, mot);
//     printf("Length:[%d, %i]\n", len, len2);

    // len = _printf("girl %c, 567\n", 'p');
    // len2 = _printf("girl %c, 567\n", 'p');
    // printf("Length:[%d, %i]\n", len, len2);

    // int caracteres_imprimes = _printf("Lettre : %c, Mot : %s, Symbole : %%\n", lettre, mot);
    // printf("Nombre de caractères imprimés : %d\n", caracteres_imprimes);
    // caracteres_imprimes = printf("Lettre : %c, Mot : %s, Symbole : %%\n", lettre, mot);
    // printf("Nombre de caractères imprimés : %d\n", caracteres_imprimes);

    // caracteres_imprimes = _printf("Entier : %d\n", entier);
    // _printf("Nombre de caractères imprimés : %d\n", caracteres_imprimes);
    int nombre1 = 42;
    int nombre2 = -42;

    len = _printf("Test 1 - Nombre en binaire avec %%b : [%b]\n", 42);
    len2 = printf("Test 1 - Nombre en binaire avec %%b : [101010]\n");
    printf("Longueur : [%d, %i]\n", len, len2);

    // Test 2: Imprimer un autre nombre en binaire
    len = _printf("Test 2 - Autre nombre en binaire avec %%b : [%b]\n", 255);
    len2 = printf("Test 2 - Autre nombre en binaire avec %%b : [11111111]\n");
    printf("Longueur : [%d, %i]\n", len, len2);

    // Test 3: Imprimer deux nombres en binaire
    len = _printf("Test 3 - Deux nombres en binaire avec %%b : [%b, %b]\n", 8, 15);
    len2 = printf("Test 3 - Deux nombres en binaire avec %%b : [1000, 1111]\n");
    printf("Longueur : [%d, %i]\n", len, len2);

    len = _printf("Entiers et caractères : [%d, %i, %c, %c]\n", 123, -456, 'a', 'Z');
    len2 = printf("Entiers et caractères : [%d, %i, %c, %c]\n", 123, -456, 'a', 'Z');
    printf("Longueur : [%d, %i]\n", len, len2);

    len = _printf("Entiers grands et petits : [%d, %i]\n", INT_MAX, INT_MIN);
    len2 = printf("Entiers grands et petits : [%d, %i]\n", INT_MAX, INT_MIN);
    printf("Longueur : [%d, %i]\n", len, len2);

    len = _printf("Chaînes et entiers : [%s, %s, %d, %i]\n", "Bonjour", "le monde", 42, -42);
    len2 = printf("Chaînes et entiers : [%s, %s, %d, %i]\n", "Bonjour", "le monde", 42, -42);
    printf("Longueur : [%d, %i]\n", len, len2);

    len = _printf("Caractères spéciaux et entiers : [%c, %d, %c, %i]\n", '\n', 12345, '\t', -67890);
    len2 = printf("Caractères spéciaux et entiers : [%c, %d, %c, %i]\n", '\n', 12345, '\t', -67890);
    printf("Longueur : [%d, %i]\n", len, len2);


    int caracteres_imprimes = _printf("Nombre positif avec %%d: %d, Nombre négatif avec %%d: %d\n", nombre1, nombre2);
    _printf("Nombre de caractères imprimés : %d\n", caracteres_imprimes);

    caracteres_imprimes = printf("Nombre positif avec %%i: %i, Nombre négatif avec %%i: %i\n", nombre1, nombre2);
    printf("Nombre de caractères imprimés : %d\n", caracteres_imprimes);

    len = _printf(" %0 %\n");
    len2 = 2;//printf(" %0 \n");
    printf("[%d, %d]\n", len, len2);
    
    len = _printf("%s %%c\n", "Abdramane");
    len2 = printf("%s %%c\n", "Abdramane");
    printf("[%d, %d]\n", len, len2);
    // More C - character and String test
    len = _printf("Character Test:[%c, %c] %c %c\n", 'A', 'B', 45, 'O');
    len2 = printf("Character Test:[%c, %c] %c %c\n", 'A', 'B', 45, 'O');
    printf("Length:[%d, %i]\n", len, len2);

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d, %i]\n", len, len2);

    len = _printf("Your name:[%s]\n", s);
    len2 = printf("Your name:[%s]\n", s);
    printf("Length:[%d, %i]\n", len, len2);

    len = _printf("Character Test:[%c, %c]\n", 'A', 'B');
    len2 = printf("Character Test:[%c, %c]\n", 'A', 'B');
    printf("Length:[%d, %i]\n", len, len2);
    len2 = printf("Let's try to printf a simple sentence.\n");
    // ui = (unsigned int)INT_MAX + 1024;
    // addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    len = _printf("Your name:[%s]\n", s);
    printf("Length:[%d, %i]\n", len2, len2);
    // _printf("Last length:[%d]\n", len);
    /// _printf("Negative:[%d]\n", -762534);
    // printf("Negative:[%d]\n", -762534);
    // _printf("Unsigned:[%u]\n", ui);
    // printf("Unsigned:[%u]\n", ui);
    // _printf("Unsigned octal:[%o]\n", ui);
    // printf("Unsigned octal:[%o]\n", ui);
    // _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    // printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    // _printf("Character:[%c]\n", 'H');
    // printf("Character:[%c]\n", 'H');
    // _printf("String:[%s]\n", "I am a string !");
    // printf("String:[%s]\n", "I am a string !");
    // _printf("Address:[%p]\n", addr);
    // printf("Address:[%p]\n", addr);
    // len = _printf("Percent:[%%]\n");
    // len2 = printf("Percent:[%%]\n");
    // _printf("Len:[%d]\n", len);
    // printf("Len:[%d]\n", len2);
    // _printf("Unknown:[%r]\n");
    // printf("Unknown:[%r]\n");
    return (0);
}
