// test.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include "stdafx.h"


int global_integer = 3;
int main() {
	int global_integer = 67;
	printf("global scope is hidden when the same"
		" name is used in a local scope %d\\n", global_integer);
	return 0;
}

