#include <stdio.h>
#include <stdlib.h>

// Declare the capture_image function
int capture_image(const char *filename);

int main() {
    const char *filename = "captured_image.jpg";
    
    // Capture an image
    if (capture_image(filename) == EXIT_SUCCESS) {
        printf("Image captured successfully and saved as %s\n", filename);
    } else {
        printf("Failed to capture image.\n");
    }

    return 0;
}
