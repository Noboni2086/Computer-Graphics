
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

void lamp()

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
void lamp1()

{

   glColor3ub (153, 76, 0);
    glBegin(GL_POLYGON);
    glVertex2f(30.4434489,81.0454998);

    glVertex2f(31.4054953578683,70.8824530729946);
    glVertex2f(29.8716383417568,70.8674648563336);


    glEnd();

}
void bench ()
{
      glColor3ub (153, 76, 0);
    glBegin(GL_POLYGON);
glVertex2f(44.2278519408587,17.0422448349301);
glVertex2f(67.1940363496479,16.999469559546);
glVertex2f(67.1940363496479,13.97708);
glVertex2f(44.2278,14);
glEnd();


   glColor3ub (153, 76, 0);
    glBegin(GL_POLYGON);
glVertex2f(44.2278519408587,12.58229);
glVertex2f(67.1650,12.455);
glVertex2f(67.1482150657787,9.879631358392);
glVertex2f(44.2278519408587,9.879631358392);
glEnd();


   glColor3ub (101, 67, 33);
    glBegin(GL_POLYGON);
glVertex2f(44.2278519408587,9.879631358392);
glVertex2f(41.2457097333943,4.9757753363439);
glVertex2f(68.7110823024908,4.9757753363439);
glVertex2f(67.1482150657787,9.879631358392);
glEnd();

    glColor3ub(153, 76, 0);
    glBegin(GL_POLYGON);
glVertex2f(41.2457097333943,4.9757753363439);
glVertex2f(41.2457097333943,0);
glVertex2f(42.9443,4.9757753363439);


glEnd();

  glColor3ub(153, 76, 0);
    glBegin(GL_POLYGON);
glVertex2f(68.7110823024908,4.9757753363439);
glVertex2f(68.72423,0);
glVertex2f(67.11056,4.975775);

glEnd();

}
void tree()
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

void house()
{
 glColor3ub(108, 159, 161);
    glBegin(GL_POLYGON);
glVertex2f(175.0366499079701,70.1399034598929);
glVertex2f(160,60);
glVertex2f(160,0);
glVertex2f(190,0);
glVertex2f(190,60);




glEnd();

glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(165,55);
glVertex2f(170,55);
glVertex2f(170,50);
glVertex2f(165,50);

glEnd();


glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(180,55);
glVertex2f(185,55);
glVertex2f(185,50);
glVertex2f(180,50);

glEnd();

glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(165,45);
glVertex2f(170,45);
glVertex2f(170,40);
glVertex2f(165,40);

glEnd();

glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(180,45);
glVertex2f(185,45);
glVertex2f(185,40);
glVertex2f(180,40);

glEnd();

glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(165,35);
glVertex2f(165,30);
glVertex2f(170,30);
glVertex2f(170.3865324137009,35.14165886803);

glEnd();

glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(180,35);
glVertex2f(180,30);
glVertex2f(185,30);
glVertex2f(185,35);

glEnd();

glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(165,25);
glVertex2f(165,20);
glVertex2f(170,20);
glVertex2f(170,25);

glEnd();


glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(180,25);
glVertex2f(180,20);
glVertex2f(185,20);
glVertex2f(185,25);

glEnd();

glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(165,15);
glVertex2f(165.1109952702151,10.1522723988848);
glVertex2f(170,10);
glVertex2f(170,15);

glEnd();


glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(180,15);
glVertex2f(180,10);
glVertex2f(185,10);
glVertex2f(185,15);

glEnd();



glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(172.60,0);
glVertex2f(172.8854710606152,6.6815242781702);
glVertex2f(178.0221782792725,6.8203542029988);
glVertex2f(178.0221,0);

glEnd();


}



void bound()
{
glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
glVertex2f(160,60);
glVertex2f(156.5853009263667,59.9313909113093);
glVertex2f(174.9698152392272,73.287661993303);
glVertex2f(192.7257991482292,60.1670898127563);
glVertex2f(190,60);
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
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
   bound();
    bench();
    lamp();
    ball(7.1253, 24.0455066271736, 71.1042710206256,0.6, 0.3, 0.0);
    ball(6.90, 24.0455066271736, 71.1042710206256, 0.0, 0.0, 0.0);
    ball(7.0976, 37.9522423088534, 70.8333604683851, 0.6, 0.3, 0.0);
    ball(6.90, 37.9522423088534, 70.8333604683851, 0.0, 0.0, 0.0);
   land();
   lamp1();
   ball(4.4773, 16.9457931566967, 75.2812655084949,1.0, 1.0, 0.0);
   ball(4.4851, 44.5786428807245, 75.4164498266933, 1.0, 1.0, 0.0);
   ball(5.0022, 30.3854849916117, 86.0819655829509, 1.0, 1.0, 0.0);
   tree();
   ball(15.34,100,80,0,0.392,0);
   ball(15.04834,131.384,79.6483,0,0.392,0);
   ball(15.04834,118.5107,70.33039,0,0.392,0);
   ball(15.04834,118.5107,85.33039,0,0.392,0);
   house();



    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Shraboni Biswas Naboni-26");

    glutDisplayFunc(display);
    gluOrtho2D(-0,250, -0, 100);

  //  gluOrtho2D(-0, 300, -40, 100);

    glutMainLoop();

    return 0;
}
