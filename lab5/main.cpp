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

void squar() {
    glColor3ub(230, 64, 79);

    glBegin(GL_POLYGON);

    glVertex2f(0.739114854991f, 4.9786275588968f);//k
    glVertex2f(2.632839768739f, 4.9587823476824f);//l
    glVertex2f(2.625752646574f, 3.3675660739495f);//m
    glVertex2f(0.739114854991f, 3.3675660739495f);//n

    glEnd();
}


void arrow_part_one()
{

  glColor3ub(0, 255, 0);

glBegin(GL_POLYGON);
glVertex2f(3.9824360023191f, 4.5334658327929f);//p
glVertex2f(5.9326683262026f, 4.5170603650935f);//Q
glVertex2f(5.9360452903712f, 3.6745270160469f);//U
glVertex2f(3.9824360023191f, 3.6555387354523f);//O
/*
glVertex2f(5.957171385644f, 5.0054710182353f);
glVertex2f(6.8444673871029f, 4.1604272073221f);
glVertex2f(5.9360452903712f, 3.2520051105903f);*/

glEnd();
}


void arrow_part_two()
{

glColor3ub(0, 255, 0);


glBegin(GL_POLYGON);

glVertex2f(5.9226683262026f, 4.5170603650935f);//Q
glVertex2f(5.9185106312947f, 5.0644128240466f);//R
glVertex2f(6.8444673871029f, 4.1604272073221f);//S
glVertex2f(5.9360452903712f, 3.2520051105903f);//T
glVertex2f(5.9360452903712f, 3.6745270160469f);//U

glEnd();
}

void line_one()
{
    glColor3ub(0, 0, 0);
glBegin(GL_LINES);
glVertex2f(0.2953778525252f, 2.787231014588f);
glVertex2f(6.5020133827303f, 2.7827945345808f);
glEnd();
}

void line_two()
{
    glColor3ub(0, 0, 0);
glBegin(GL_LINES);
glVertex2f(3.3888870341806f, 5.3813929301336f);
glVertex2f(3.3888870341806f, 0.1666412814885f);
glEnd();
}


void Tringle()
{

glColor3ub(128, 0, 128);


glBegin(GL_POLYGON);

glVertex2f(2.5197617594064f, 2.5832335089094f);//H
glVertex2f(2.5185635819729f, 0.5482084752918f);//I
glVertex2f(0.7815112098581f, 1.5445228146671f);//J


glEnd();
}

void Tringle_2()
{

glColor3ub(255, 255, 0);



glBegin(GL_POLYGON);

glVertex2f(5.1059394062955f, 2.1168736053721f);//H
glVertex2f(4.0884268894867f, 0.7389920721935f);//I
glVertex2f(6.0598573908037f, 0.7389920721935f);//J


glEnd();
}



void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

   squar();
   arrow_part_one();
   arrow_part_two();
   line_one();
   line_two();
   Tringle();
   Tringle_2();
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
