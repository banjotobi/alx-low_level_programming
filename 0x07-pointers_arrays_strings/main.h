#ifndef MAIN_H
#define MAIN_H

/**
 * FILE - MAIN.H
 *
 * Desc: Header file
 */

char *_memset(char *s, char b, unsigned int n);
char _putchar(char);
char *_memcpy(char * dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagssums(int *a, int size);

#endif
