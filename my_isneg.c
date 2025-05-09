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

int my_isneg(int n)
{
    if (n >= 0)
    {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return 0;
}

int main(void)
{
    my_isneg(37846);
    my_putchar('\n');
    my_isneg(-83572);
    my_putchar('\n');
    my_isneg(893764);
    my_putchar('\n');

    return 0;
}