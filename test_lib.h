#include <stdbool.h>

#ifndef ARCHIVO_H
#define ARCHIVO_H

#define MAX_LENGTH 100

struct s_test_details
{
	char name[MAX_LENGTH];
	char desc[MAX_LENGTH];
};

void test_fail(struct s_test_details details, char *expected, char *actual);
void test_pass(struct s_test_details details);
void test(struct s_test_details details, bool (*comp_funct)(char *, char *), char *expected, char *actual);
bool comp_bytes(char *expected, char *actual, unsigned int size);
bool comp_byte(char *expected, char *actual);
bool is_equal(char *actual, char *expected);

#endif