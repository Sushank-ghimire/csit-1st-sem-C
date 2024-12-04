#include <graphics.h>
#include<coino.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm; // Variables for graphics driver and mode
    int x, y, radius;    // Variables for circle's center and radius

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); 

    // Check if the graphics mode is initialized properly
    if (graphresult() != grOk) {
        printf("Graphics error: %s\n", grapherrormsg(graphresult()));
        return 1;
    }

    // Set the circle parameters
    x = 200;       // X-coordinate of the circle's center
    y = 200;       // Y-coordinate of the circle's center
    radius = 100;  // Radius of the circle

    // Draw the circle
    circle(x, y, radius);

    // Add a message for the user
    outtextxy(150, 320, "Press any key to exit...");

    // Wait for a key press
    getch();

    // Close the graphics mode and clean up
    closegraph();

    return 0;
}
