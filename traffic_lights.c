
#include <stdio.h>

enum light {GREEN, YELLOW, RED};

enum light update_light (enum light light)
{
    if (light == GREEN) return YELLOW;
    else if (light == YELLOW) return RED;
    else return GREEN;
    
}

int main()
{
    printf("%d", update_light(2));
}