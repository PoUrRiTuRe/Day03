/*
** EPITECH PROJECT, 2025
** B-CPE-100-LYN-1-1-cpoolday03-luca.grange
** File description:
** my_putchar
*/

#include <unistd.h>

// Task 01 - my_print_alpha
// Delivery: my_print_alpha.c
// Write a function that, beginning with a, displays the lowercase alphabet in ascending order, on
// a single line. It must be prototyped as follows:

// int valeur = 5;
// int i = 0;

// while (valeur < i)
// {
//     i++;

// for (int o = 0; o < valeur; o++)
// {
//     my_putchar('a');
// }

// if (i == valeur)
// {
//     my_putchar('c');
// } else {
//     my_putchar('a');
// }

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_alpha(void)
{
    int i = 'a';
    int valeur = 'z';

    while (i < valeur)
    {
        my_putchar(i);
        i++;
    }
    my_putchar('\n');

    return 0;
}

int main(void)
{
    my_print_alpha();

    return 0;
}
