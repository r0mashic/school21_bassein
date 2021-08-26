#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <math.h>

int min(int a, int b, int c) {
    if (a <= b && a <= c) 
        return (a);
    else if (b <= a && b <= c) 
        return (b);
    else 
        return (c);
}
int main()
{
    printf("%d", min(1, 1, 1));
}