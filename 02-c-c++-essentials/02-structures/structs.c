
struct Rectangle {
    int width; 
    int height; 
};

int main() {
    struct Rectangle rect; 
    rect.width = 10; 
    rect.height = 20; 
    printf("Area: %d\n", rect.width * rect.height);
    printf("Size of Rectangle: %lu bytes\n", sizeof(rect));
    return 0; 
}
