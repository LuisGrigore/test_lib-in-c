#include <stdbool.h>

#ifndef ARCHIVO_H
#define ARCHIVO_H

#define MAX_LENGTH 100

struct s_test_details
{
	char name[MAX_LENGTH];
	char desc[MAX_LENGTH];
};
enum types
{
	CHAR = sizeof(char),
	LONG = sizeof(long)
};


void test(struct s_test_details details, bool (*comp_funct)(char *, char *), char *expected, char *actual);
bool comp_bytes(char *expected, char *actual);
bool is_equal(char *actual, char *expected);

#endif