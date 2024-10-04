#include <GL/glut.h>

void star()

{

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    /*Transalation*/
    glTranslatef(20.0f, -0.5f, 0.0f);
    /*Rotation*/
	glRotatef(180,0.0f, 0.0f, 1.0f);
	/*Scaling*/
	glScalef(1.0f, 1.0f, 0.0f);

       glColor3ub(64, 97, 98);
    glBegin(GL_POLYGON);
    glVertex2f(10, 30);
    glVertex2f(8.3649338660357,29.909448719786);
    glVertex2f(17.3050236792905,37.8622804748893);
    glVertex2f(25.715089269601,29.8479233460145);
    glVertex2f(23.9308534302272,29.8479233460145);
    glEnd();


    glColor3ub(108, 159, 161);
    glBegin(GL_POLYGON);
    glVertex2f(10, 30);
    glVertex2f(10, 0);
    glVertex2f(23.95, 0);
    glVertex2f(23.9308534302272, 29.8479233460145);
    glVertex2f(17.2576431322463, 36.2513418753873);
    glEnd();

    glColor3ub(70, 109, 110);
    glBegin(GL_POLYGON);
    glVertex2f(15.8670100989413,4.9018418613286);
    glVertex2f(15.9065727883206, 0);
    glVertex2f(19.083339, 0);
    glVertex2f(19.0833950494843,4.9018418613286);

    glEnd();

    glColor3ub(70, 109, 110);

    glBegin(GL_POLYGON);
    glVertex2f(12.0000653927463,29.3611728495387);
    glVertex2f(15.008066122851,29.3871038903155);
    glVertex2f(15.008066122851,26.690275649532);
    glVertex2f(12.0000653927463,26.6643446087552);

    glEnd();


glColor3ub(70, 109, 110);

    glBegin(GL_POLYGON);
    glVertex2f(19.0551705655797,29.4648970126458);
    glVertex2f(19.079239524803,26.7421377310855);
    glVertex2f(22.0094471325773,26.7421377310855);
    glVertex2f(21.9675850510238,29.4648970126458);

    glEnd();

    glColor3ub(70, 109, 110);

    glBegin(GL_POLYGON);
    glVertex2f(12.0168061896062,25.0058359014549);
    glVertex2f(11.9776327769908,22.372146725182);
    glVertex2f(15.0030836746763,22.3991596796256);
    glVertex2f(15,25);

    glEnd();

    glColor3ub(70, 109, 110);

    glBegin(GL_POLYGON);
    glVertex2f(18.9940578951764,25.0350983536193);
    glVertex2f(21.980307793431,25.0350983536193);
    glVertex2f(21.99981505534304,22.4680096601003);
    glVertex2f(18.9859057852118,22.4680096601003);

    glEnd();

    glColor3ub(70, 109, 110);

    glBegin(GL_POLYGON);
    glVertex2f(12.0576168633597,20.4645976052241);
    glVertex2f(12.0634135741319,17.502221197649);
    glVertex2f(15.1171910974128,17.5365333046522);
    glVertex2f(15.151503204416,20.4873745069236);

    glEnd();

     glColor3ub(70, 109, 110);

    glBegin(GL_POLYGON);
    glVertex2f(19.0630834027758,20.55599872093);
    glVertex2f(21.9796124980441,20.5216866139268);
    glVertex2f(21.9796124980441,17.5365333046522);
    glVertex2f(19.0787712957727,17.5708454116553);

    glEnd();

   glColor3ub(70, 109, 110);

    glBegin(GL_POLYGON);
    glVertex2f(11.9954923899377,15.4832148128185);
    glVertex2f(15.2175321275785,15.4421162444083);
    glVertex2f(15.2032508316866,12.499398209638);
    glVertex2f(12.0116656595923,12.5248129787126);

    glEnd();
   glColor3ub(70, 109, 110);

    glBegin(GL_POLYGON);
    glVertex2f(19.0311934661477,15.346069958997);
    glVertex2f(21.9538618567183,15.346069958997);
     glVertex2f(21.9538618567183,12.4890795097876);
    glVertex2f(19.0640324368283,12.5219184804681);


    glEnd();

      glColor3ub(70, 109, 110);

    glBegin(GL_POLYGON);
    glVertex2f(11.9837098641759,10.4949835711236);
    glVertex2f(15.2043236120565,10.4949835711236);
     glVertex2f(15.1561989161678,7.498743910909);
    glVertex2f(11.9837098641759,7.498743910909);


    glEnd();

      glColor3ub(70, 109, 110);

    glBegin(GL_POLYGON);
    glVertex2f(19.0239271821272,10.4794898275747);
    glVertex2f(22.0187540572174,10.4450665301598);
     glVertex2f(22.0187540572174,7.587932844729);
    glVertex2f(18.9895038847124,7.5535095473141);


    glEnd();
glPopMatrix();

}



void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    star();
   // starh();
    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Shraboni Biswas Naboni-26");

    glutDisplayFunc(display);

    gluOrtho2D(-40, 50, -40, 60);

    glutMainLoop();

    return 0;
}
