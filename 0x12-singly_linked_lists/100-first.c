#include <stdio.h>

void _construct(void) __attribute__((constructor));

/**
 * _construct - constructor function
 */
void _construct(void)
{
	char stage1[] = "You're beat! and yet, you must allow,";
	char stage2[] = "I bore my house upon my back!";

	printf("%s\n%s\n", stage1, stage2);
}
