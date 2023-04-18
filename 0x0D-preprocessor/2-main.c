#include <stdio.h>
/**
* main prints the name of the file
*
*/
#define FILE_NAME_MACRO __FILE__
int main(void)
{
printf("%s\n", FILE_NAME_MACRO);
return (0);
}
