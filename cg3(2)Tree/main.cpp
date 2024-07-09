
#include <GL/glut.h>
#include <math.h>
void land()
{
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(10.6624357654173, 36.2171808350353);
    glVertex2f(17.5734578235902, 25.0740167953103);
    glVertex2f(12.4234449117334, 8.1402535504169);
    glEnd();

     glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(17.5734578235902, 25.0740167953103);
    glVertex2f(12.4234449117334, 8.1402535504169);
    glEnd();

}

void star()

{
       glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2f(12.6624357654173,36.2171808350353);
    glVertex2f(17.5734578235902,25.0740167953103);
    glVertex2f(16.4234449117334,8.1402535504169);
    glVertex2f(12.98524,0);
    glVertex2f(28.3046055416139,0.3916705309292);
    glVertex2f(24.8177431828446,8.2693966007417);
    glVertex2f(28.3046055416139,0.3916705309292);
    glVertex2f(24.3179508974699,24.9221052461426);
    glVertex2f(28.38,36.655);


    glEnd();



}
void tree1()
{


  glColor3ub(153, 76, 0);
    glBegin(GL_POLYGON);
glVertex2f(100.4669979436415,67.508822524133);
glVertex2f(111.8352664440669,49.847305997484);
//glVertex2f(112.5504920517491,19.09260486715);
glVertex2f(128.825,0);
//glVertex2f(120,20);
glVertex2f(121.3716078798287,51.0393486769544);
glVertex2f(129.4417823898445,66.8021204644695);

glEnd();


  glColor3ub(153, 76, 0);
    glBegin(GL_POLYGON);
glVertex2f(111.8352664440669,49.847305997484);
glVertex2f(112.5504920517491,19.09260486715);
//glVertex2f(128.52386395665,68.919988869009);
glVertex2f(120,20);
glVertex2f(121.3716078798287,51.0393486769544);


glEnd();

  glColor3ub(153, 76, 0);
    glBegin(GL_POLYGON);
glVertex2f(112.716500311142,19.9242171734546);
glVertex2f(120,20);
glVertex2f(112.5504920517491,19.09260486715);
glVertex2f(128.52386395665,0);

glVertex2f(102.77574,0);


glEnd();

 glColor3ub(153, 76, 0);
    glBegin(GL_POLYGON);
glVertex2f(112.716500311142,19.9242171734546);
glVertex2f(120.970805997457,22.5519005336666);
glVertex2f(140,0);
glVertex2f(102.775,0);




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
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
  tree1();
   // star();
   //land();
  /*  tree(10.85, 14.7448525751114, 55.9231827509079, 0.0, 1.0, 0.0);
    tree(10.11, 22.544623138801, 63.4613290801818, 0.0, 1.0, 0.0);
    tree(9.62, 29.55880299099, 56.1814862712405, 0.0, 1.0, 0.0);
    tree(10.59, 8.182699604969, 45.7208811989321, 0.0, 1.0, 0.0);
    tree(10.36, 31.6251799051866, 46.4973946698809, 0.0, 1.0, 0.0);
    tree(7.11, 8.4004009874327, 42.1434672652494, 0.0, 1.0, 0.0);*/
 //   tree(10.36, 19.4, 41.63, 0.0, 1, 0.0);
     ball(15.34,100,80,0,0.392,0);
   ball(15.04834,131.384,79.6483,0,0.392,0);
   ball(15.04834,118.5107,70.33039,0,0.392,0);
   ball(15.04834,118.5107,85.33039,0,0.392,0);

    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Shraboni Biswas Naboni-26");

    glutDisplayFunc(display);

    gluOrtho2D(-40, 400, -40, 100);

    glutMainLoop();

    return 0;
}
