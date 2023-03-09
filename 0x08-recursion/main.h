#ifndef MAIN_H
#define MAIN_H

/**
 * File: MAIN.h
 * Desc: Header file containing prototypes for all functions
 *       used in 0x08-recursion directory.
 */

#include <stddef.h>
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int find_sqrt(int num, int root);
int is_prime_number(int n);
int is_palindrome(char *s);
int get_length(char *s);
int my_pal(char *s, int l);
int wildcmp(char *s1, char *s2);
#endif
