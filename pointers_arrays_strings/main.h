#ifndef MAIN_H
#define MAIN_H

/* -------- Standard Libraries --------*/
#include <stdio.h>

/* -------- Function Prototypes --------*/

/* Task 0 */
void reset_to_98(int *n);

/* Task 1 */
void swap_int(int *a, int *b);

/* Task 2 */
int _strlen(char *s);

/* Task 3 */
void _puts(char *str);

/* Task 4 */
void print_rev(char *s);

/* Task 5 */
void rev_string(char *s);

/* Task 6 */
void puts2(char *str);

/* Task 7 */
void puts_half(char *str);

/* Task 8 */
void print_array(int *a, int n);

/* Task 9 */
char *_strcpy(char *dest, char *src);

/* Advanced Tasks (may appear later in the project) */
int _atoi(char *s);
int _putchar(char c);

/* ===== - More pointers, arrays & strings (this project) ===== */
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *s);
char *leet(char *s);

/* ========== Even More Pointers, Arrays & Strings ========== */

/* 0. memset */
char *_memset(char *s, char b, unsigned int n);

/* 1. memcpy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* 2. strchr */
char *_strchr(char *s, char c);

/* 3. strspn */
unsigned int _strspn(char *s, char *accept);

/* 4. strpbrk */
char *_strpbrk(char *s, char *accept);

/* 5. strstr */
char *_strstr(char *haystack, char *needle);

/* 6. Chess is a mental torture */
void print_chessboard(char (*a)[8]);

/* 7. The line of life is ragged diagonal between duty and desire */
void print_diagsums(int *a, int size);

#endif /* MAIN_H */
