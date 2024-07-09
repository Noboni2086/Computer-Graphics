#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

void circle(float radius, float xc, float yc, float r, float g, float b) {
    glBegin(GL_POLYGON); // Draw a colored circle
    glColor3f(r, g, b);
    float pi = 3.1416;
    for (int i = 0; i < 200; ++i) {
        float angle = (i * 2 * pi) / 200;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}
void circle2(float radius, float xc, float yc, float r, float g, float b) {
    glBegin(GL_POLYGON); // Draw a colored circle
    glColor3f(r, g, b);
    float pi = 3.1416;
    for (int i = 0; i < 200; ++i) {
        float angle = (i * 2 * pi) / 200;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}
    void circle3(float radius, float xc, float yc, float r, float g, float b) {
    glBegin(GL_POLYGON); // Draw a colored circle
    glColor3f(r, g, b);
    float pi = 3.1416;
    for (int i = 0; i < 200; ++i) {
        float angle = (i * 2 * pi) / 200;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}
/* Handler for window-repaint event. Called when the window first appears and whenever it needs to be re-painted. */
void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(7.5);

    // Draw the circle with the specified coordinates
    circle(0.3, 1.99f, 0.70, 1.0, 0.5, 0.2); // Reduced radius to make it smaller
     //circle2(0.384,0.36,1.06,1.0, 0.5, 0.2);
    //circle2(0.535, 3.45f, 0.11, 1.0, 0.5, 0.2);
    circle3(0.613, 1.99f, 0.07030, 1.0, 0.5, 0.2);
    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                     // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode
    glutInitWindowSize(800, 800);              // Set the window's initial width & height
    glutInitWindowPosition(100, 100);          // Position the window's initial top-left corner
    glutCreateWindow("OpenGL Setup Test");     // Create a window with the given title
    gluOrtho2D(0.0, 5.0, 0.0, 2.0);            // Adjust orthographic view for wider view to the left
    glutDisplayFunc(display);                  // Register display callback handler for window re-paint
    glutMainLoop();                            // Enter the event-processing loop
    return 0;
}
