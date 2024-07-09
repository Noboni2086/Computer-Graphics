
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static int slices = 16;
static int stacks = 16;

void drawPolygons()
{
    // Polygon 1 (bangladesh )
    glBegin(GL_POLYGON);
    glColor3ub(0, 100, 0);
    glVertex2f(0,3.5); // A
    glVertex2f(3.79, 3.51); // B
    glVertex2f(3.76,5.781f); // c
    glVertex2f(0.01458f,5.5655f); // B
    glEnd();

   /* // Polygon 2 (Blue)
    glBegin(GL_POLYGON);
    glColor3ub(51, 100, 255);
    glVertex2f(3.2427746790462f, 2.6874864605295f); // B
    glVertex2f(6.7999337671648f, 2.7028190428058f); // J
    glVertex2f(6.795989317176f, 2.4114999795547f); // K
    glVertex2f(3.2581072613226f, 2.4114999795547f); // C
    glEnd();

    // Polygon 3 (Light Blue)
    glBegin(GL_POLYGON);
    glColor3ub(51, 212, 255);
    glVertex2f(3.2581072613226f, 2.4114999795547f); // C
    glVertex2f(6.795989317176f, 2.4114999795547f); // K
    glVertex2f(6.79152634944112f, 2.0f); // L
    glVertex2f(3.2427746790462f, 2.0895175175709f); // D
    glEnd();

    // Polygon 4 (Green)
    glBegin(GL_POLYGON);
    glColor3ub(51, 255, 100);
    glVertex2f(3.2427746790462f, 2.0895175175709f); // D
    glVertex2f(6.792634944112f, 2.0895175175709f); // L
    glVertex2f(6.79152634944112f, 1.7521989416707f); // M
    glVertex2f(3.2581072613226f, 1.7828641062234f); // E
    glEnd();

    // Polygon 5 (Orange)
    glBegin(GL_POLYGON);
    glColor3ub(255, 190, 51);
    glVertex2f(3.2427746790462f, 1.7828641062234f); // E
    glVertex2f(6.79152634944112, 1.7521989416707f); // M
    glVertex2f(6.79152634944112, 1.446214600696f); // N
    glVertex2f(3.227442096798f, 1.4608798784196f); // F
    glEnd();

    // Polygon 6 (Yellow)
    glBegin(GL_POLYGON);
    glColor3ub(249, 255, 51);
    glVertex2f(3.2427746790462f, 1.4608798784196f); // F
    glVertex2f(6.79152634944112f, 1.446214600696f); // N
    glVertex2f(6.7999337671648f, 1.134893794137f); // O
    glVertex2f(3.2427746790462f, 1.138956506157f); // G
    glEnd();

    // Polygon 7 (Red)
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(3.2427746790462f, 1.138956506157f); // G
    glVertex2f(6.7999337671648f, 1.134893794137f); // O
    glVertex2f(6.7999337671648f, 0.8322440050883f); // P
    glVertex2f(3.2427746790462f, 0.8475675837647f); // H
    glEnd();*/
}
// Display function
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawPolygons();
    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowPosition(5, 200);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Shraboni Biswas Naboni-26");

    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutDisplayFunc(display);
    gluOrtho2D(-12,40, -12, 12);//lef right bottom top
    glutMainLoop();

    return 0;
}


/////////////////chess
