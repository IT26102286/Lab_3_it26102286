#include <stdio.h>
#include <math.h>


int main()

{
double area, height, base;

printf("Enter the area of the sail: ");
scanf("%lf", &area);

height = sqrt((16.0 * area) / 5.0);
base = (5.0 / 8.0) * height;

printf("Height of the sail: %.2lf meters\n", height);
printf("Base of the sail: %.2lf meters\n", base);

return 0;







}	
