#include "ref_pointers.h"

//

/*
Show that references and pointers modify data pointed to
*/

void ref(int &number, int* numberPtr)
{
	number = 500;
	*numberPtr = 1000;
}

