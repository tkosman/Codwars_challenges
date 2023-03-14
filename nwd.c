#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int nwd(int a, int b)
{
    if(b == 0)
        return a;
    return nwd(b, a % b);
}

int x = 1, y = 0;
void euklides(int a, int b)
{
	if(b!=0)
	{
		euklides(b, a % b);
		int temp = y;
		y = x  - a / b * y;
		x = temp;
	}
}

int main()
{
    printf("%d\n", nwd(570, 348));
    euklides(570, 348);
    printf("%d %d", x, y);
}