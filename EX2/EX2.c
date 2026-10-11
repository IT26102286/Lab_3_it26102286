#include<stdio.h>

int main()

{


float v_kmh, distance_m;
float v_ms, acceleration, time;

printf("Enter takeoff speed (km/hr): ");
scanf("%f", &v_kmh);

printf("Enter distance (meters): ");
scanf("%f", &distance_m);

v_ms = v_kmh / 3.6;

acceleration = (v_ms * v_ms) /(2 * distance_m);
time = v_ms / acceleration;

printf("\n--- Results ---\n");
printf("Acceleration: %.2f m/s^2\n", acceleration);
printf("Time to takeoff: %.2f seconds\n", time);


return 0;





}	
