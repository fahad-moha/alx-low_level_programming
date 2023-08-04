#include "main.h"
#include <stdio.h>

/**
  * main - prints its name.
  * @*argv[]: the argv array that is passed to the main function
  * @argc __attribute__((unused)): to indicate that the
  * argc parameter is intentionally unused
  * Return: Always 0 (success)
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
