/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    const int els_in_row = 3;
    const int els_in_col = 3;
    int random[els_in_col][els_in_row];

    // fill the array with random numbers
    for(int col=0; col< els_in_col; col++) {
        for(int row=0; row< els_in_row; row++) {
            random[col][row]=rand();
        }
    }
    // print a new line
    printf("\n\n");

    // print the array
    for(int col=0; col<els_in_col; col++) {
        for(int row=0; row<els_in_row; row++) {
            printf("%d\t\t", random[col][row]);
        }

        printf("\n");
    }
    return(0);
}
*/

#include <stdio.h>
#define PI 3.14

// Function prototype
float area_of_circle(float *ptr_radius);

int main() {
    // declare variables
    float radius = 10.0;
    float area;
    float *ptr_radius;
    ptr_radius = &radius;

    // calculate the area
    area = PI * radius * radius;
    printf("\nArea: \t%f", area);

    area = 0;
    ptr_radius = &radius;
    area = area_of_circle(ptr_radius);
    printf("\nArea with pointer: \t%f", area);

    return(0);
}

float area_of_circle(float *ptr_radius) {
    float area = PI * (*ptr_radius) * (*ptr_radius);
    return(area);
}



