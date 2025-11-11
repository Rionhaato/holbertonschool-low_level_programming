/*
 * File: 3-calc.h
 * Desc: Header for simple calculator using function pointers.
 */

#ifndef THREE_CALC_H
#define THREE_CALC_H

/**
 * struct op - operator mapping
 * @op: operator symbol as string
 * @f: function pointer implementing the operator
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif /* THREE_CALC_H */

