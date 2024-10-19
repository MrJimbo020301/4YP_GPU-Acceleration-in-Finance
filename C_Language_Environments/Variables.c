/*
#include <stdio.h>
#include <stdlib.h> // Include this for the exit function

void print_number(int x);

int main() {
    int choice;
    printf("\nEnter a choice: 1, 2, or 3 to exit: ");
    scanf("%d", &choice);
    switch(choice) {
    case 1:
        printf("You entered 1\n");
        break;
    case 2:
        printf("You entered 2\n");
        break;
    case 3:
        printf("You entered 3. Exiting.\n");
        exit(0);
    default:
        printf("Invalid choice\n");
    }
    return 0;
}

void print_number(int x) {
    static int y = 0;
    printf("\nx, y are:\t%d %d\n", x, y);
    y--;
}
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[200], mode[4];

    printf("\nEnter your file: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0; // Remove newline character

    printf("\nEnter a file mode: ");
    fgets(mode, sizeof(mode), stdin);
    mode[strcspn(mode, "\n")] = 0; // Remove newline character

    if((fp=fopen(filename, mode)) != NULL) {
        printf("\nOpened %s in mode %s", filename, mode);
    } else {
        printf("\nERROR: File not recognised");
    }
    fclose(fp);
    return 0;
}
