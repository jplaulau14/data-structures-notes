#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int width;
    int height;
};

int main() {
    struct Rectangle rect;
    rect.width = 5;
    rect.height = 10;
    struct Rectangle *pRect = &rect;
    printf("rect.width: %d\n", rect.width);
    printf("rect.height: %d\n", rect.height);
    printf("pRect->width: %d\n", pRect->width);
    printf("pRect->height: %d\n", pRect->height);
    pRect->width = 15;
    printf("rect.width: %d\n", rect.width);
    // Dynamic allocation of memory for a structure
    struct Rectangle *pRect2;
    pRect2 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    pRect2->width = 20;
    pRect2->height = 30;
    printf("pRect2->width: %d\n", pRect2->width);
    printf("pRect2->height: %d\n", pRect2->height);
    free(pRect2);
    return 0;
}
