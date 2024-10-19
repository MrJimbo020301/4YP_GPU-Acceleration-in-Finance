/* #include <stdio.h>
#define pi 3.14
const float radiusr = 10;

int main() {
    float radius = 10.0;
    float area;
    printf("The radius of the circle is %f\n", radiusr);
    area = pi * radius * radius; //Statements
    printf("The area of the circle is %f", area);
    return(0);
}
*/

#include <stdio.h>
#define PI 3.14

float area_of_circle(float radius);

int main() {
    float radius[3] = {5.0, 10.0, 15.0};
    float area[3];
    float total_area;

    area[0] = area_of_circle(radius[0]);
    area[1] = area_of_circle(radius[1]);
    area[2] = area_of_circle(radius[2]);
    total_area = area[0] + area[1] + area[2];
    printf("%f \n", area[0]);
    printf("%f \n", area[1]);
    printf("%f \n", area[2]);
    printf("%f \n", radius[3]);

    printf("The total area of the circle is %f", total_area);

    return(0);
}

// Function is independent to the other parts of the program
float area_of_circle(float radius) {
    float area = PI * radius * radius;
    return(area);
}