#include <stdio.h>

/**
 * myprintf - apply the constuctor attribute to myprintf() so that it
 *             so exexuted before main()
 */
void myprintf(void) __attribute__ ((constructor));
/**
 * myprintf - implementation of myprintf
 */

void myprintf(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
