#include<stdio.h>
int main()
{
    int r;
    float ans;
    scanf("%d", &r);
    ans = (4 / 3.0) * 3.14159 * r * r * r;
    printf("VOLUME = %.3f\n",ans);
    return 0;
}