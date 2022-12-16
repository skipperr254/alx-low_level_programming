#include "main.h"
#include <stdio.h>

int main(void) {
	char c;
	c = 'a';
	printf("%c: %d", c, _isupper(c));
	c = 'a';
	printf("%c: %d", c, _isupper(c));
	return (0);
}
