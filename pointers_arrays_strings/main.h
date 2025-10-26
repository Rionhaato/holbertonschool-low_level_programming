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
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *s);
char *leet(char *s);

#endif /* MAIN_H */
