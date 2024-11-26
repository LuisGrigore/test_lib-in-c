#include "test_lib.h"
#include <stdio.h>
#include <string.h>
#define SUCCESS_MESSAGE "SUCCESS"
#define FAIL_MESSAGE "FAIL"

void test_fail(struct s_test_details details, char *expected, char *actual)
{
	printf("%s", details.name);
	printf("\n");
	printf("%s", FAIL_MESSAGE);
	printf("\n");
	printf("Expected \"%s\"", expected);
	printf("\n");
	printf("But recieved \"%s\"", actual);
	printf("\n");
}
void test_pass(struct s_test_details details)
{
	printf("%s", details.name);
	printf("\n");
	printf("%s", SUCCESS_MESSAGE);
	printf("\n");
}
void test(struct s_test_details details, bool (*comp_funct)(char *, char *), char *expected, char *actual)
{
	if(comp_funct(expected,actual))
	{
		test_pass(details);
		return;
	}
	test_fail(details, expected, actual);
}
bool comp_bytes(char *expected, char *actual)
{
	if(actual == expected)
	return true;
	if(strcmp(expected,actual) == 0)
		return true;
	return false;
}
