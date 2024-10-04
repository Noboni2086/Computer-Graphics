#include <iostream>
#include <GL/glut.h>
#include <cmath>

using namespace std;

float angle = 0.0f; // Global variable for rotation angle

void border() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    glPushMatrix(); // Save the current matrix
    glTranslatef(0.5, 0.5, 0.0); // Move to the center of the window
    glRotatef(angle, 0.0, 0.0, 1.0); // Rotate around the z-axis

    // Drawing the polygons
    glColor3ub(211, 211, 211); // Light Gray

    glBegin(GL_POLYGON);
    glVertex2f(12.564211685969, 1.46007090504);
    glVertex2f(12.237389812227, 1.46007090504);
    glVertex2f(12.103094, 1.97630729);
    glVertex2f(12.722221069, 1.97630729);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(12.3280300198462, 1.009566670215);
    glVertex2f(12.56819962477, 1.009566670215);
    glVertex2f(12.7168996755, 0.5176827284387);
    glVertex2f(12.216894812747, 0.5176827284387);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(12.602604050920, 1.3460272212347);
    glVertex2f(12.602604050920, 1.1616801721689);
    glVertex2f(13.1576344384531, 0.94424);
    glVertex2f(13.1796897188582, 1.53394);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(12.3067892620237, 1.3589203311724);
    glVertex2f(12.3067892620237, 1.1647620496533);
    glVertex2f(11.7744314, 0.87544089);
    glVertex2f(11.7744314, 1.4853853);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(4.3329588795738, 1.3344553869646);
    glVertex2f(4.1368434001005, 1.3299469851376);
    glVertex2f(3.9284574, 1.97630729);
    glVertex2f(4.460452367, 1.97630729);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(4.4219459738976, 1.2459779916855);
    glVertex2f(4.4217565831753, 1.0596197036508);
    glVertex2f(4.94976, 0.94424);
    glVertex2f(4.94976, 1.53394);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(4.17101949164, 0.9539908123312);
    glVertex2f(4.3170130813172, 0.9585531120086);
    glVertex2f(4.5017862182523, 0.4316074992676);
    glVertex2f(3.938342208092, 0.4247640497514);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(3.5617825514923, 1.4154645467633);
    glVertex2f(4.0818670836389, 1.2235199381484);
    glVertex2f(4.0896308776401, 1.0565983671225);
    glVertex2f(3.5239432537322, 0.8614193146049);
    glEnd();

    glPopMatrix(); // Restore the saved matrix

    glutSwapBuffers();
    angle += 0.5; // Increment the rotation angle
}

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    // Call your other drawing functions or scenes here
    // For example:
    // drawScene();
    // circle(...);
    // drawBox();
    // ...

    glutSwapBuffers(); // Swap the front and back buffers to display the rendered image
}

void update(int value) {
    glutPostRedisplay(); // Notify GLUT that the display has changed

    glutTimerFunc(20, update, 0); // Notify GLUT to call update again in 20 milliseconds
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Rotating Border");
    glutDisplayFunc(border); // Set the display function to your border function
    gluOrtho2D(-40, 40, -20, 10);

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black

    glutTimerFunc(20, update, 0); // Add a timer for animation

    glutMainLoop();
    return 0;
}
