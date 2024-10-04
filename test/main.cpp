#include <GL/glut.h>
#include <cmath>

float angle = 0.0;

void circle(float radius, float xc, float yc, float r, float g, float b) {
    glBegin(GL_POLYGON);
    for(int i = 0; i < 200; i++) {
        glColor3f(r, g, b);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float x = radius * cos(A);
        float y = radius * sin(A);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}

void rectangle(float xc, float yc, float width, float height, float r, float g, float b) {
    glColor3f(r, g, b);
    glBegin(GL_POLYGON);
    glVertex2f(xc - width / 2, yc - height / 2);
    glVertex2f(xc + width / 2, yc - height / 2);
    glVertex2f(xc + width / 2, yc + height / 2);
    glVertex2f(xc - width / 2, yc + height / 2);
    glEnd();
}

void rotateRectangles() {
    glPushMatrix();
    glTranslatef(0.5, 0.5, 0.0); // Move to the center of the window
    glRotatef(angle, 0.0, 0.0, 1.0); // Rotate around the z-axis

    float rectWidth = 0.1;
    float rectHeight = 0.2;
    rectangle(0.3, 0.0, rectWidth, rectHeight, 0.0, 1.0, 0.0); // Right
    rectangle(-0.3, 0.0, rectWidth, rectHeight, 0.0, 0.0, 1.0); // Left
    rectangle(0.0, 0.3, rectWidth, rectHeight, 1.0, 1.0, 0.0); // Top
    rectangle(0.0, -0.3, rectWidth, rectHeight, 1.0, 0.0, 1.0); // Bottom

    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the stationary circle
    circle(0.3, 0.5, 0.5, 1.0, 0.0, 0.0);

    // Rotate the rectangles around the circle
    rotateRectangles();

    glutSwapBuffers();

    angle += 0.5; // Increase the rotation angle
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Rotating Rectangles Around Circle");
    //init();
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0);
    glutDisplayFunc(display);
    glutIdleFunc(display); // Redraw the scene continuously
    glutMainLoop();
    return 0;
}
