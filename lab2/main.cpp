
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


void boundary()
{
  glColor3ub(0, 0, 0);
  glBegin(GL_LINE_LOOP);
  glVertex2f(1.822335212363f, 3.1963498634518f); // A
  glVertex2f(3.221979827209f, 3.1963498634518f); // B
  glVertex2f(4.0395069352567f, 2.3586063713542f); // C
  glVertex2f(4.0392905512067f, 1.193385896575f); // D
  glVertex2f(3.1913306750591f, 0.31532956136f); // E
  glVertex2f(1.812118828313f, 0.30511317731f); // F
  glVertex2f(0.9641589521654f, 1.193385896575f); // G
  glVertex2f(0.9639425681154f, 2.379031394541f); // H
  glEnd();
}

void star()
{
  glColor3ub(230, 64, 79);

  glBegin(GL_POLYGON);
  glVertex2f(1.822335212363f, 3.1963498634518f); // A
  glVertex2f(3.221979827209f, 3.1963498634518f); // B
  glVertex2f(4.0495069352567f, 2.3586063713542f); // C
  glVertex2f(4.0392905512067f, 1.193385896575f); // D
  glVertex2f(3.1913306750591f, 0.31532956136f); // E
  glVertex2f(1.812118828313f, 0.30511317731f); // F
  glVertex2f(0.9641589521654f, 1.193385896575f); // G
  glVertex2f(0.9539425681154f, 2.379031394541f); // H
  glEnd();
}





void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //glLineWidth(4);   // glLineWidth(4);

    star();
    boundary();
    glLineWidth(4);
    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowPosition(5, 200);
    glutInitWindowSize(320, 320);

    glutCreateWindow("Shraboni Biswas Naboni-26");

    glutDisplayFunc(display);
    gluOrtho2D(-12, 12, -12, 12);
    glutMainLoop();

return 0;
}

