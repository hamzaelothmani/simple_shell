#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdbool.h>

#define MAX_C 10

void shell(char **arv, bool interactive);

int _strlen(char *s);

void runCmd(char **rgv, char **arv);

char *trim(char *cmd);

char *_strCp(char *dest, char *src);

char *_strNCp(char *dest, char *src, int n);

char *handlePath(char **rgv, char *cmd);

void handleExit(char *cmd);

char *_strCat(char *dest, char *src);

int _strCmp(char *s1, char *s2);

#endif
