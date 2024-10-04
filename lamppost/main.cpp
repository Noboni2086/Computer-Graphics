
#include <GL/glut.h>
#include <math.h>
#include <cmath>
void land()
{
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(12.6672574330719,81.2182649709387);
    glVertex2f(12.0351328111774,70.7430569509716);
    glVertex2f(49.6786446978031,71.0558796041059);
     glVertex2f(49.9897441054592,80.8555109452734);
    glEnd();



}
glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    /*Transalation*/
    //glTranslatef(0.0f, 0.0f, 0.0f);
    /*Rotation*/
	//glRotatef(200,0.0f, 0.0f, 1.0f);
	/*Scaling*/
	glScalef(0.1f, -2.0f, 0.0f);
	glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.2f,0.0f);
	glVertex2f(0.5f,0.0f);
	glVertex2f(0.5f,0.2f);
	glVertex2f(0.2f,0.2f);  // x, y

	glEnd();

	glFlush();
	glPopMatrix();
void star()

{
       glColor3ub (153, 76, 0);
    glBegin(GL_POLYGON);
    glVertex2f(29.86,0);
    glVertex2f(31.3569913656179,-0.1156748395893);
    glVertex2f(31.3254953578683,70.8824530729946);
    glVertex2f(29.8716383417568,70.8674648563336);


    glEnd();

   glColor3ub (153, 76, 0);
    glBegin(GL_POLYGON);
    glVertex2f(30.4434489,81.0454998);

    glVertex2f(31.3254953578683,70.8824530729946);
    glVertex2f(29.8716383417568,70.8674648563336);


    glEnd();

}
void star1()

{

   glColor3ub (153, 76, 0);
    glBegin(GL_POLYGON);
    glVertex2f(30.4434489,81.0454998);

    glVertex2f(31.4054953578683,70.8824530729946);
    glVertex2f(29.8716383417568,70.8674648563336);


    glEnd();

}

void ball(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

  star();

    ball(7.1253, 24.0455066271736, 71.1042710206256,0.6, 0.3, 0.0);
    ball(6.90, 24.0455066271736, 71.1042710206256, 0.0, 0.0, 0.0);



    ball(7.0976, 37.9522423088534, 70.8333604683851, 0.6, 0.3, 0.0);
        ball(6.90, 37.9522423088534, 70.8333604683851, 0.0, 0.0, 0.0);

    land();
            star1();
    ball(4.4773, 16.9457931566967, 75.2812655084949,1.0, 1.0, 0.0);
    ball(4.4851, 44.5786428807245, 75.4164498266933, 1.0, 1.0, 0.0);
    ball(5.0022, 30.3854849916117, 86.0819655829509, 1.0, 1.0, 0.0);
  //

    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Shraboni Biswas Naboni-26");

    glutDisplayFunc(display);

    gluOrtho2D(-40, 70, -40, 100);

    glutMainLoop();

    return 0;
}
