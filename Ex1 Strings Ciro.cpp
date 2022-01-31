#include <stdio.h>
#include <string.h>
int main()
{
char str1[40] = "arte de tudo ";
char str2[40] = "Eu li p";
char * str3 = "ao longo da viagem";
strcat(str1, str3);
strcat(str2, str1);
puts(str2);
return 0;
}
