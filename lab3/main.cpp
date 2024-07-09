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


void star()
{

  glColor3ub(230, 64, 79 );

glBegin(GL_POLYGON);
//glVertex2f(2.3, 0.78);
glVertex2f(3.53, 1.4);
glVertex2f(4.83, 0.72);
glVertex2f(4.39, 1.99);
glVertex2f(5.58, 2.7);
glVertex2f(4.07, 2.84);
glVertex2f(3.53, 4.04);
//glVertex2f(3.07, 2.76);
//glVertex2f(1.63, 2.72);
//glVertex2f(2.72, 1.99);

glEnd();
}

void star2()
{

  glColor3ub(230, 64, 79 );

glBegin(GL_POLYGON);
glVertex2f(3.53, 1.4);
glVertex2f(2.3, 0.78);

//glVertex2f(4.83, 0.72);
//glVertex2f(4.39, 1.99);
//glVertex2f(5.58, 2.7);
//glVertex2f(4.07, 2.84);
glVertex2f(2.72, 1.99);
glVertex2f(1.63, 2.72);
glVertex2f(3.07, 2.76);
glVertex2f(3.53, 4.04);




glEnd();
}
void boundary()
{

glColor3ub(0, 0, 0);
glBegin(GL_LINE_LOOP);
glVertex2f(2.3, 0.78);
glVertex2f(3.53, 1.4);
glVertex2f(4.83, 0.72);
glVertex2f(4.39, 1.99);
glVertex2f(5.58, 2.7);
glVertex2f(4.07, 2.84);
glVertex2f(3.53, 4.04);
glVertex2f(3.07, 2.76);
glVertex2f(1.63, 2.72);
glVertex2f(2.72, 1.99);

glEnd();
}


void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //glLineWidth(4);   // glLineWidth(4);

    star();
    star2();
    glLineWidth(4);
    boundary();
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
