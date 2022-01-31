#include <stdio.h>
void fun(int);
int main() {
fun(10);
fun(20);
fun(30);
return 0;
}
void fun(int y) {
static int x;
x += y;
printf("x = %d\n", x);
}
