// C program to illustrate \b escape sequence
#include <stdio.h>

int main(void)
{
	// \b - backspace character transfers
	// the cursor one character back with
	// or without deleting on different
	// compilers.
	printf("Hello \b\b\b\b\b\bHi Geeks");
	return (0);
}
// C program to illustrate \n escape sequence
#include <stdio.h>
int main(void)
{
	// Here we are using \n, which is a new line character.
	printf("Hello\n");
	printf("GeeksforGeeks");
	return (0);
}
// C program to illustrate \t escape sequence
#include <stdio.h>

int main(void)
{
	// Here we are using \t, which is
	// a horizontal tab character.
	// It will provide a tab space
	// between two words.
	printf("Hello \t GFG");
	return (0);
}

// C program to illustrate \r escape sequence
#include <stdio.h>

int main(void)
{
	// Here we are using \r, which
	// is carriage return character.
	printf("Hello Geeks \rGeeksfor");
	return (0);
}
// C program to illustrate \\(Backslash)
// escape sequence to print backslash.
#include <stdio.h>

int main(void)
{
	// Here we are using \,
	// It contains two escape sequence
	// means \ and \n.
	printf("Hello\\GFG");
	return (0);
}
// C program to illustrate \' escape
// sequence/ and \" escape sequence to
// print single quote and double quote.
#include <stdio.h>
int main(void)
{
	printf("\' Hello Geeks\n");
	printf("\" Hello Geeks");
	return 0;
}
// C program to illustrate
// \? escape sequence
#include <stdio.h>

int main(void)
{
	// Here we are using \?, which is
	// used for the presentation of trigraph
	// in the early of C programming. But
	// now we don't have any use of it.
	printf("\?\?!\n");
	return 0;
}

