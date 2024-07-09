
#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void display() {

	glClear(GL_COLOR_BUFFER_BIT);




	glBegin(GL_POLYGON);
    glColor3ub(211, 84, 0);
     glVertex2f(-2.0,-1.0);
     glVertex2f(-11.0,-1.0);
     glVertex2f(-11.0,-5.0);
     glVertex2f(-2.0,-5.0);
     glVertex2f(-2.0,-1.0);

    glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(237, 187, 153 );
     glVertex2f(-2.0,-5.0);
     glVertex2f(-11.0,-5.0);
     glVertex2f(-12.50,-7.5);
     glVertex2f(-3.50,-7.5);
     glVertex2f(-2.0,-5.0);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(128, 139, 150 );
     glVertex2f(-3.50,-7.5);
     glVertex2f(-3.5,-10.0);
     glVertex2f(-4.2,-10.0);
     glVertex2f(-4.2,-7.5);
     glVertex2f(-3.50,-7.5);
     glEnd();

      glBegin(GL_POLYGON);
     glColor3ub(128, 139, 150);
     glVertex2f(-12.50,-7.5);
     glVertex2f(-11.7,-7.50);
     glVertex2f(-11.7,-10.0);
     glVertex2f(-12.5,-10.0);
     glVertex2f(-12.50,-7.5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(128, 139, 150);
     glVertex2f(-2.0,-5.0);
     glVertex2f(-2.0,-7.5);
     glVertex2f(-2.50,-7.5);
     glVertex2f(-2.50,-5.8);
     glVertex2f(-2.0,-5.0);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(128, 139, 150);
     glVertex2f(-10.50,-7.5);
     glVertex2f(-10.50,-8.5);
     glVertex2f(-11.00,-8.5);
     glVertex2f(-11.0,-7.50);
     glVertex2f(-10.50,-7.5);
     glEnd();






	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1200,1000);
    glutCreateWindow("Bench");
	glClearColor(1.0,1.0,1.0,1.0);
	gluOrtho2D(-20.0,20.0,-20.0,20.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

