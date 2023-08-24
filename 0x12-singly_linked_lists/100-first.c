#include <stdio.h>
#include "lists.h"

/**
 * tortoise_message - Prints the message "You're beat!
 * and yet, you must allow,\nI bore my house upon my back!\n"
 * Return: None
 */
void tortoise_message(void) __attribute__((constructor));

void tortoise_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
