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

