#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
#include <stdlib.h>

static int slices = 16;
static int stacks = 16;

bool isCity = true;
float BoxPosition = -40.0f;
float BoxSpeed = 0.0005f;
float trianglePosition = 0.0f;
float triangleSpeed = 0.0001f;

void Box() {
    glColor3ub(00, 00, 00);
    glBegin(GL_POLYGON);
    glVertex2f(10.0f, 69.0f);
    glVertex2f(14.0f, 69.0f);
    glVertex2f(14.0f, 71.0f);
    glVertex2f(10.0f, 71.0f);
    glEnd();
}

void Boxupdate(int value) {
    BoxPosition += BoxSpeed;
    if (BoxPosition > 79.0f) {
        BoxPosition = -79.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(20, Boxupdate, 0);
}

void Triangle() {
    glPushMatrix();
    glTranslatef(trianglePosition, 0.0f, 0.0f);
    glColor3ub(255, 165, 0);

    glBegin(GL_TRIANGLES);
    glVertex2f(17.0f, 8.0f);
    glVertex2f(18.0f, 8.0f);
    glVertex2f(17.5f, 9.0f);
    glEnd();

    glPopMatrix();
}

void Triupdate11(int value) {
    trianglePosition -= triangleSpeed;
    if (trianglePosition < -35.0f) {
        trianglePosition = 10.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(16, Triupdate11, 0);
}

void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
        case 'a':
            BoxSpeed = 0.0f;
            break;
        case 'w':
            BoxSpeed = 0.05f;
            break;
        case 'p':
            BoxSpeed = 0.001f;
            break;
        case 'x':
            triangleSpeed = 2.0f;
            break;
        case 'q':
            triangleSpeed = 0.0015f;
            break;
        case 'c':
            isCity = false;
            glutPostRedisplay();
            break;
        case 'C':
            isCity = true;
            glutPostRedisplay();
            break;
        default:
            break;
    }
}

void setBOXOrtho() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 79, 0, 79);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glutTimerFunc(20, Boxupdate, 0);
}

void setTriOrtho() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10, 30, -10, 30);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glutTimerFunc(20, Triupdate11, 0);
}

void displayBox() {
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(BoxPosition, 0.0f, 0.0f);
    Box();
    glPopMatrix();

    glutSwapBuffers();
}

void displayTri() {
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    Triangle();
    glutSwapBuffers();
}

void display()
{
    if (isCity)
        {
        setBOXOrtho();
        displayBox();
      } else
     {
        setTriOrtho();
        displayTri();
    }
}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(5, 200);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Shraboni Biswas Naboni-26");

    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);

    glutTimerFunc(20, Boxupdate, 0);
   glutTimerFunc(16, Triupdate11, 0);

    glutMainLoop();
    return 0;
}
