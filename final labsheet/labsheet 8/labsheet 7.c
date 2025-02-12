// Lab Sheet 8 - Graphics Solutions

#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int i, j; // Loop variables

// Function Prototypes
void question1()
{
    // Question 1: Draw a line
    line(100, 100, 300, 100); // Line from (100,100) to (300,100)
    outtextxy(100, 110, "Line");
}


void question2()
{
    // Question 2: Draw a rectangle
    int length, breadth;
    printf("Enter Length and Breadth of Rectangle: ");
    scanf("%d %d", &length, &breadth);
    rectangle(200, 200, 200 + length, 200 + breadth);
    outtextxy(200, 200 + breadth + 10, "Rectangle");
}


void question3()
{
    // Question 3: Draw a circle
    int radius;
    printf("Enter Radius of Circle: ");
    scanf("%d", &radius);
    circle(400, 300, radius);
    outtextxy(400, 300 + radius + 10, "Circle");
}

int main()
{
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Call all functions sequentially
    question1();
    question2();
    question3();

    getch();
    closegraph();
    return 0;
}
