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

void RED() {
    glColor3ub(230, 64, 79);

    glBegin(GL_POLYGON);

    glVertex2f(3.5210695204163f, 3.6763014224961f);
    glVertex2f(5.6255858905021f, 2.6603280024547f);
    glVertex2f(3.4605949120805f, 1.692734269082f);
    glVertex2f(1.3439836203276f, 2.6482330807876f);
    glEnd();
}

void line_one()
{
    glColor3ub(255, 165, 0);
glLineWidth(3.0f);
glBegin(GL_LINES);
glVertex2f(4.6942769221308f, 4.1842881325168f);
glVertex2f(1.9971093903542f, 1.1726526373941f);
glEnd();
}

void line_two()
{
glColor3ub(255, 165, 0);

glBegin(GL_LINES);
glVertex2f(2.2752925886989f, 3.9544846208408f);
glVertex2f(5.0450296504784f, 1.2815069323985f);
glEnd();
}

void line_tlo()
{
  glColor3ub(173, 216, 230);
glBegin(GL_LINES);

glVertex2f(2.589760552045, 3.0957451824725);
glVertex2f(2.589760552045, 2.3942397257772);

glEnd();
}

void line_tlo1()
{
  glColor3ub(173, 216, 230);
glBegin(GL_LINES);

glVertex2f(4.3435241937832f, 3.1320299474739);
glVertex2f(4.3456191154503f, 2.38214480411f);
glEnd();
}

void lines()
{
  glColor3ub(173, 216, 230);
glBegin(GL_LINES);

glVertex2f(2.589760552045f, 2.3942397257772f);
glVertex2f(4.3556191154503f, 2.40214480411f);
glEnd();
}
void liness()
{
  glColor3ub(173, 216, 230);
glBegin(GL_LINES);

glVertex2f(2.589760552045, 3.0957451824725);
glVertex2f(4.3435241937832, 3.1020299474739);
glEnd();
}


void Tringle_2()
{

glColor3ub(255, 255, 0);



glBegin(GL_POLYGON);
glVertex2f(3.496879677082, 2.39758600391086);
glVertex2f(2.3478621187018, 0.6646659273734);
glVertex2f(4.633802313795, 0.6646659273734);


glEnd();
}

void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

RED();
line_one();
line_two();
Tringle_2();
line_tlo();
line_tlo1();
lines();
liness();
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
