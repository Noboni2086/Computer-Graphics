
#include <windows.h>
#include <GL/freeglut.h>
#include <cmath>

GLfloat bladeRotation = 0.0;
float bladeLength = 3.0;

void Blade()
 {
    glColor3ub(192, 192, 192);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);
    glVertex2f(bladeLength, 0.5);
    glVertex2f(bladeLength - 0.5, 0.0);
    glEnd();
}

void Body()
{
    glColor3ub(181, 101, 29);
    glBegin(GL_QUADS);
    glVertex2f(7.0, 7.0); // A
    glVertex2f(7.0, 0.0); // B
    glVertex2f(7.164499373788, 0.0); // D
    glVertex2f(7.164499373788, 7.0); // C
    glEnd();
}
void wheel(float radius, float xc, float yc, float r, float g, float b)
 {
  glColor3ub(192, 192, 192);
  glBegin(GL_POLYGON);
  for (int i = 0; i < 200; i++) {
    float pi = 3.1416;
    float A = (i * 2 * pi) / 200;
    float x = radius * cos(A);
    float y = radius * sin(A);
    glVertex2f(x + xc, y + yc);
  }
  glEnd();
}

void display()
 {
    glClearColor(1, 1, 1, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(7.0979109840932, 7.110603473, 0.0);

    for (int i = 0; i < 4; i++)
    {
        glPushMatrix();
        glRotatef(90.0 * i + bladeRotation, 0, 0, 1);
        Blade();
        glPopMatrix();
    }

    glPopMatrix();

    Body();
   wheel(sqrt(0.175916878038), 7.0979109840932, 7.110603473, 128/255, 128/255, 128/255);

    glutSwapBuffers();
    glFlush();
}

void update(int value)
{
    bladeRotation += 0.5;
    if (bladeRotation > 360.0)
    {
        bladeRotation = -360.0;
    }
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Shraboni Biswas NAboni-26");
    gluOrtho2D(-10, 20, -5, 15);    glutDisplayFunc(display);
    glutTimerFunc(0, update, 0);
    glutMainLoop();

    return 0;
}
