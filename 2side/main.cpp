#include <windows.h>
#include <GL/glut.h>

float moveBlue = 0.0f;
float moveGreen = 0.0f;

void objectBlue()
{
   // glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef( 0.0f, moveBlue, 0.0f);
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.0f,0.0f);
	glVertex2f(2.5f,0.0f);
	glVertex2f(2.5f,2.5f);
	glVertex2f(0.0f,2.5f);
	glEnd();
	glPopMatrix();
}

void objectGreen()
{
    //glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef( 0.0f, moveGreen, 0.0f);
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.0f,0.0f);
	glVertex2f(-2.5f,0.0f);
	glVertex2f(-2.5f,2.5f);
	glVertex2f(0.0f,2.5f);
	glEnd();
	glPopMatrix();
}

void display()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	objectBlue();
	objectGreen();
	glutSwapBuffers();
	glFlush();
}

void updateBlue(int value)
{
    moveBlue += .04;
    if(moveBlue > 10)//10
    {
        moveBlue = -10.0;
    }
    glutPostRedisplay();
    glutTimerFunc(20, updateBlue, 0);
}

void updateGreen(int value)
{
    moveGreen -= .04;
    if(moveGreen < -10)
    {
       moveGreen = 10.0;
    }
    glutPostRedisplay();
    glutTimerFunc(20, updateGreen, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Shraboni Biswas Naboni-26");
	glutInitWindowSize(470, 470);
	gluOrtho2D(-10,10,-10,10);
	glutDisplayFunc(display);
	glutTimerFunc(20, updateBlue, 0);
	glutTimerFunc(20, updateGreen, 0);
	glutMainLoop();
	return 0;
}
