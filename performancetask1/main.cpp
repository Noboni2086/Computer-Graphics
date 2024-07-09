#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

static int slices = 16;
static int stacks = 16;

void drawPolygons()
{
    // Polygon 1 (Bangladesh)
    glBegin(GL_POLYGON);
    glColor3ub(0, 100, 0);
    glVertex2f(-10.027266326729, 0.35); // A
    glVertex2f(-1.016, 0.354); // B
    glVertex2f(-1.0125, 5.76); // M
    glVertex2f(-10.026, 5.76); // I
    glEnd();

   ///////////////// yellow red green flag with star


    // Polygon 3 (yellow)
    glBegin(GL_POLYGON);
    //(-0.7341460929439,-4.6019471809703)
    glColor3ub(255, 255, 0);
    glVertex2f(-0.7341460929439, -4.6019471809703); // E1
    glVertex2f(-10.0292981919223, -4.6997266943441); // D1
    glVertex2f(-10.0511512008382, -2.5633546103541); // B1
    glVertex2f(-0.7341460929439, -2.5474281058962); // C1
    glEnd();
    // Polygon 2 (green)
    glBegin(GL_POLYGON);
    glColor3ub(0, 100, 0);
    glVertex2f(-10.0292981919223, -6.676); // E
    glVertex2f(-0.7374390203244, -6.6731959932852); // F
    glVertex2f(-0.7341460929439, -4.6019471809703); // E1
    glVertex2f(-10.0292981919223, -4.60197266943441); // D1
    glEnd();

    // Polygon 4 (red)
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(-10.0511512008382, -2.5633546103541); // B1
    glVertex2f(-0.7341460929439, -2.5574281058962); // C1
    glVertex2f (-0.7374390203244,-0.5869904961369); // O
    glVertex2f(-10.05,-0.606); // N
    glEnd();




    ////////////////////////////////////////american flag
    // Polygon 4 (Blue)
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);
    glVertex2f(0.7777601884016,-0.7130719743611); // V1
    glVertex2f(0.7777601884016,-3.9024176343);
    glVertex2f(3.9939593445595,-3.9024176343293); // T1
    glVertex2f(3.9939593445595,-0.7192533241628); // U1
    glEnd();


 glBegin(GL_POLYGON);//red1
    glColor3ub(255, 0, 0);
    glVertex2f(3.9939593445595,-0.7192533241628); // u1
    glVertex2f(10.8326143923898,-0.7130719743611); // W1
    glVertex2f(10.8249448028522,-1.1214649287659) ;// Z1
    glVertex2f(4.0027979945322,-1.1186038461382); // A2
    glEnd();

glBegin(GL_POLYGON);//red2
    glColor3ub(255, 0, 0);
    glVertex2f(3.9939593445595,-1.4917307174309); //B2
    glVertex2f(10.8249448028522,-1.5042945850452); // C2
    glVertex2f(10.8249448028522,-1.8620648884206); // D2
    glVertex2f(4,-1.8623508343634); // E2
    glEnd();


   glBegin(GL_POLYGON);//red3
    glColor3ub(255, 0, 0);
    glVertex2f(3.9939593445595,-2.3060099289654); //F2
    glVertex2f(10.8285536915221,-2.2929853247356); // C2
    glVertex2f(10.8285536915221,-2.6744843126175); // D2
    glVertex2f(3.9939593445595,-2.6752206549444); // E2
    glEnd();


     glBegin(GL_POLYGON);//red4
    glColor3ub(255, 0, 0);
    glVertex2f(3.9939593445595,-3.0873532003241); //j2
    glVertex2f(10.8285536915221,-3.0773532003241); // M2
    glVertex2f(10.8285536915221,-3.5116056633831); // J2
    glVertex2f(3.9939593445595,-3.5179798896525); // K2

    glEnd();


    glBegin(GL_POLYGON);//red5
    glColor3ub(255, 0, 0);
    glVertex2f(0.7777601884016,-3.8920756139094); //R~1
    glVertex2f(10.8367089931882,-3.8797820648338); // S1
    glVertex2f(10.8367089931882,-4.3295586478627); // Q1
    glVertex2f(0.7777601884016,-4.3219498735946); // P1
   // (0.755741206721,-3.8920756139094)
    glEnd();

     glBegin(GL_POLYGON);//red6
    glColor3ub(255, 0, 0);
    glVertex2f(0.7777601884016,-4.7244279567922); //o~1
    glVertex2f(10.8367089931882,-4.7417846015482); // N1
    glVertex2f(10.8367089931882,-5.1623997702135); // Q1
    glVertex2f(0.7777601884016,-5.1803168712033); // L1

    glEnd();

     glBegin(GL_POLYGON);//red7
    glColor3ub(255, 0, 0);
    glVertex2f(0.7777601884016,-5.5498491104686); //K~1
    glVertex2f(10.8367089931882,-5.5299390053401); // J1
    glVertex2f(10.8367089931882,-6.0024101749061); // I1
    glVertex2f(0.7777601884016,-5.9995596873068); // H1

    glEnd();

      glBegin(GL_POLYGON);//red8
    glColor3ub(255, 0, 0);
    glVertex2f(0.7777601884016,-6.3718594329314); //F~1
    glVertex2f(10.8483529713347,-6.3866614537397); // G1
    glVertex2f(10.8438993017097,-6.7543531884415); // H
    glVertex2f(0.7777601884016,-6.7584031268842); // G

    glEnd();


    /////////Argentina
       glBegin(GL_POLYGON);//Light blue
    glColor3ub(173, 216, 230);
    glVertex2f(0.7539703926691,5.3261511974646); //N~2
    glVertex2f(10.8635344779732,5.3016755854533); // O1
    glVertex2f(10.8635344779732,3.7861830035377); // S2
    glVertex2f(0.7539703926691,3.77805); // G

    glEnd();

      /////////Argentina
       glBegin(GL_POLYGON);//Light blue
    glColor3ub(173, 216, 230);
    glVertex2f(0.7539703926691,2.1510111199); //P~2
    glVertex2f(10.8635344779732,2.1510111199); // Q2
    glVertex2f(10.8635344779732,0.536894162973); // D
    glVertex2f(0.7539703926691,0.5397279476543); // C
    glEnd();

        /////////////// lines of Argentina

glColor3ub (255, 230, 0);
  glBegin(GL_LINES);
glVertex2f(5.166986951732,3.0965609849386);//v2
glVertex2f(5.451,2.9858);//W2

glVertex2f(5.1307698285612,2.8625426506036);//z2
glVertex2f(5.4509698285612,2.915832);//A3

glVertex2f(5.2,2.6);//b3
glVertex2f(5.48825,2.799041);//C3

glVertex2f(5.3731459605509,2.4195793748982);//O3
glVertex2f(5.57610,2.689322);//N3


glVertex2f(5.6350236204019,2.6769983426276);//Q3
glVertex2f(5.576104,2.699322);//Q3

glVertex2f(5.6350236204019,2.2969983426276);//Q3
glVertex2f(5.68450,2.62631);//P3

glVertex2f(5.8244670339111,2.2691390171115);//S3
glVertex2f(5.80,2.60428);//R3

glVertex2f(5.9776933242495,2.3025702077308);//W3
glVertex2f(5.8968,2.61490);//V3

glVertex2f(6.1253477494846,2.4362949702079);//U3
glVertex2f(5.9805,2.64721);//T3

glVertex2f(6.3510082861647,2.5950931256494);//A4
glVertex2f(6.351,2.5950);//Z3

glVertex2f(6.4345862627129,2.7873224717103);//B4
glVertex2f(6.1643508052071,2.8959738412229);//U2

glVertex2f(6.5014486439515,3.0380564013548);//D4
glVertex2f(6.1698,2.9973);//C4


glVertex2f(6.3788676116808,3.305505926309);//F4
glVertex2f(6.13922,3.114784);//E4

glVertex2f(6.2284272538941,3.447588486441);//H4
glVertex2f(6.02201,3.258844);//G4

glVertex2f(5.9860511219043,3.631460034847);//L3
glVertex2f(5.9324,3.3063);//M3

glVertex2f(5.8058607588436,3.650616149762);//J3
glVertex2f(5.8159,3.32789);//K3

glVertex2f(5.6517392157115,3.6509615627082);//H3
glVertex2f(5.727,3.3318489);//I3

glVertex2f(5.4093630837218,3.5311664629891);//F3
glVertex2f(5.611768,3.2692);//G3

glVertex2f(5.2589227259351,3.3556527122379);//D3
glVertex2f(5.5113599,3.17147);//E3

glVertex2f(6.348012821755,2.5957963052211);//Q2
glVertex2f(6.1295916,2.7979);//E3
glEnd();

///// Star for  american
 glBegin(GL_POLYGON);//Light blue
    glColor3ub(173, 216, 230);
    glVertex2f(1.1940952636063,-0.8477614634604); //I4
    glVertex2f(1.1277234600456,-0.9955895713909); // J4
    glVertex2f(0.9648108513058,-0.9955895713909); // K4
    glVertex2f(1.0779446073751,-1.0876050263273); // L4
        glVertex2f(1.0372164551902,-1.291245787252);//M4
                glVertex2f(1.1850445631207,-1.1871627316682);//N4

    glEnd();

    glBegin(GL_POLYGON);//Light blue
    glColor3ub(173, 216, 230);
 glVertex2f(1.1850445631207,-1.1871627316682);//N4    glVertex2f(1.1277234600456,-0.9955895713909); // J4
    glVertex2f(1.3404149214559,-1.289737337171); // o4
    glVertex2f(1.3,-1.1); // L4
        glVertex2f(1.0372164551902,-1.291245787252);//M4
    glEnd();

}



void star()// REd yellow greens star
{

  glColor3ub(0, 0, 0 );

glBegin(GL_POLYGON);


glVertex2f(-5.4040569538472f,-3.5406964237433f); //CQ
glVertex2f(-6.3870747305362f,-3.3956130103218f); // R
glVertex2f(-5.7366352882298f,-3.8400169246876f); //S
glVertex2f(-5.9945260511766f,-4.5680250660093f); // t
glVertex2f(-5.3985139816075f,-4.0506498697966f); //U
glVertex2f(-4.7697741715745,-4.5680250660093); //V
glVertex2f(-5.0326778137867,-3.8677317858861); // w
glVertex2f(-4.424331333738,-3.3956130103218); //Z
glVertex2f(-5.2045099532177,-3.3910361732711); //A1

glEnd();


    glColor3ub(0, 0, 0); // Set color to yellow

   glBegin(GL_POLYGON);
    glVertex2f(-5.3821501113755f, -2.6890253874744f); // P
    glVertex2f(-5.6435994648119,-3.3714403891936); // CQ
    glVertex2f(-5.15658314935,-3.3898183633619); // R
    glVertex2f(-5.6435994648119,-3.3914403891936); // CQ

    glEnd();

     glColor3ub(0, 0, 0); // Set color to yellow

   glBegin(GL_POLYGON);
    glVertex2f(-6.3870747305362,-3.3956130103218); // P
    glVertex2f(-4.424331333738,-3.3956130103218); // CQ
    glVertex2f(-5.0326778137867,-3.8677317858861); // R
    glVertex2f(-5.7366352882298,-3.8400169246876); // CQ

    glEnd();
}


void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glColor3f(r / 255.0f, g / 255.0f, b / 255.0f); // Set the color
    glBegin(GL_POLYGON); // Draw a circle
    for (int i = 0; i < 200; i++)
    {
        float pi = 3.1416;
        float angle = (i * 2 * pi) / 200;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}


void circleWithBorder(float radius, float xc, float yc, float r, float g, float b, float borderThickness, float borderR, float borderG, float borderB)
{
    circle(radius + borderThickness, xc, yc, borderR, borderG, borderB);

    circle(radius, xc, yc, r, g, b);
}
void semicircle(float radius, float xc, float yc, float r, float g, float b)
{
    glColor3f(r / 255.0f, g / 255.0f, b / 255.0f); // Set the color
    glBegin(GL_POLYGON); // Draw a semicircle
    for (int i = 0; i < 100; i++) // Iterate only for half the circle
    {
        float pi = 3.1416;
        float angle = (i * pi) / 100; // Angle ranges from 0 to pi
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    drawPolygons();
    //dpoly();
    circle(1.875, -6, 3, 255, 0, 0);
    circleWithBorder(0.361894, 5.809308, 2.9660594988, 255, 255, 0, 0.05, 255, 165, 0);
    // semicircle(100.0f, 250.0f, 250.0f, 255.0f, 0.0f, 0.0f);
    star();
    glFlush();
}





int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowPosition(5, 200);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Shraboni Biswas Naboni-26");

    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutDisplayFunc(display);
    gluOrtho2D(-12, 12, -12, 12);
    glutMainLoop();

    return 0;
}
