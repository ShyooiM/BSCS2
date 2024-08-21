#include <stdio.h>

int main() {
    int books, boxes;

    //store
    printf("How many books do you want to store? ");
    scanf("%d", &books);

    // Calculate 
    boxes = (books + 3) / 4; // to indicate can store up to 4.

    // Display
    printf("You need [%d box/es] to store %d book/s.", boxes, books);
}
