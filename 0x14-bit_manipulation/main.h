#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * AUthor: olunuga olaoluwa ayomide
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x14-bit_manipulation directory.
 */

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_endianness(void);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);


#endif /* MAIN_H */
