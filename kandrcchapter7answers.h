#if !defined(_KANDREX_H7)
#define _KANDREX_H7

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdlib.h>

void ex7_1(int argc, char *argv[]);
void ex7_2(int argc, char *argv[]);
void part7_3(int argc, char *argv[]);
void minprintfch7(char *, ...);
void ex7_3();
void minprintfch7ex3(char *, ...);
void ex7_4();
void minscanfch7ex4(char *, ...);
void ex7_5();
void pushex7_5(double);
double popex7_5();
void ex7_6(int, char **);
int differentline(char *, char *, int);
int differentlineFaster(char *, char *, int);
void ex7_7(int, char **);
void ex7_8(int, char **);
void printfileex7_8(char *);
void ex7_9();
int isupperex7_9one(int c);
int isupperex7_9two(int c);

#endif
