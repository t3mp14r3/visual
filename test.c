#include <stdio.h>
#include "visual.h"

int main() {
    // Clear the screen
    CLEAR();

    // Hide the cursor
    CURSOR_HIDE();

    // Regular text
    printf("Regular text.\n");

    // Bold text and reset
    printf(BOLD "Bold text.\n" RESET);

    // Dim, blinking and crossed text
    printf(DIM BLINK "Messy text.\n" RESET);

    // Text, colored with 256 colors
    FG_256(51);
    BG_256(92);
    printf("256 text.\n");

    // Disable background
    BG_DISABLE();
    printf("Disabled background.\n");

    // Text, colored with RGB colors
    FG_RGB(71, 221, 2);
    BG_RGB(221, 2, 71);
    printf("Rgb text.\n");

    // Disable foreground
    FG_DISABLE();
    printf("Disabled foreground.\n");

    // Hide the output
    OUTPUT_HIDE();

    // Get some user input to check the hidden input and the output
    int ch = getchar();

    // Reset via function
    RESETF();
    
    // Display the user input normally
    printf("%c\n", ch);

    // Show the cursor and end this test
    CURSOR_SHOW();

    return 0;
}
