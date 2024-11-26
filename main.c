#include"test_lib.h"
#include "conversion.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	long a = 1234;
	long b = 1234;
	struct s_test_details details = {"test",""};
	test(details, comp_bytes,long_string(a),long_string(b));
	return 0;
}
