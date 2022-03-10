#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

/* The following are function declarations.
They _declare_ that the functions exist
but they do not _define_ what the functions actually do
(the definitions appear after the main function).
By declaring these functions here,
they may be called in the main before they are defined.
Note: function1 expects an int type,
whereas function2 expects a pointer to an int */

void function1(int);
void function2(int*);

int main()
{
	int number = 10;
	int* numberPtr = &number;

	/* C1. display the contents of number to the screen */
	printf("C1 Value of number is: %d\n", number);

	/* C2. display the address of variable number to the screen */
	printf("C2 Address of number is: %p\n", &number);

	/* C3. call function1 */
	function1(number);

	/* C4. display the contents of number to the screen */
	printf("C4 Value of number after call to function1 is: %d\n", number);

	/* C5. call function2 */
	function2(numberPtr);

	/* C6. display the contents of number to the screen */
	printf("C6 Value of number after call to function2 is: %d\n", number);

	return 0;
}

void function1(int number)
{
	/* C7. increment number by one */
	number += 1;

	/* C8. display the contents of number to the screen (should be 11) */
	printf("C8 Value of number in function1 is: %d\n", number);

	/* C9. display the address of number to the screen */
	printf("C9 Address of number is: %p\n", &number);
}

void function2(int* numberPtr)
{
	/* C10. display the address of number to the screen (should be the same address as you displayed first in main) */
	printf("C10 Address of number is: %p\n", numberPtr);

	/* C11. display the value that the pointer numberPtr points to */
	printf("C11 Value of number in function2 is: %d\n", *numberPtr);

	/* C12. increment the value stored in number */
	*numberPtr += 1;

	/* C13. display the contents of number to the screen */
	printf("C13 Value of number after increment in function2: %d\n", *numberPtr);

}