/*
** EPITECH PROJECT, 2025
** CMake
** File description:
** hello_world
*/

#include "ikea.h"
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac != 2) {
        fputs("Usage: hello <furniture type>\nCurrently supported furniture types: chair, table, bed\n", stderr);
        return (84);
    }
    printf("Selected furniture type: %s\n", av[1]);
    printf("Ikea corresponding furniture name: %s\n", get_furniture(av[1]));
    return (0);
}