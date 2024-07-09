
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static int slices = 16;
static int stacks = 16;

#include <windows.h>

#include <GL/glut.h>


void line()
{ glColor3ub(0, 0, 0);
  glBegin(GL_LINES);
glVertex2f(2,0);
glVertex2f(4,0);

glEnd();
}

void line2()
{ glColor3ub(0, 0, 0);
   glBegin(GL_LINES);
glVertex2f(4,1);
glVertex2f(2,1);

glEnd();
}

void line3()
{ glColor3ub(0, 0, 0);
  glBegin(GL_LINES);
glVertex2f(4,0);
glVertex2f(4,1);

glEnd();
}

void line4()
{ glColor3ub(0, 0, 0);
   glBegin(GL_LINES);
glVertex2f(2,0);
glVertex2f(2,1);

glEnd();
}


void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2);

    line();
   line2();
    line3();
    line4();

    glFlush();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowPosition(5, 200);
    glutInitWindowSize(320, 320);

    glutCreateWindow("Shraboni Biswas Naboni-26");

    glutDisplayFunc(display);
    gluOrtho2D(-10, 10, -10, 10);
    glutMainLoop();

return 0;
}
