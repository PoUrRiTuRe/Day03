/*
** EPITECH PROJECT, 2025
** B-CPE-100-LYN-1-1-cpoolday03-luca.grange
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_digits(void)
{
    int i = 48;
    int valeur = 58;

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
    my_print_digits();

    return 0;
}