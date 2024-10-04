
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>
#include <stdlib.h>

static int slices = 16;
static int stacks = 16;


#include <windows.h>

#include <GL/glut.h>
//////////////////hay///////////////

void hay ()
{
glColor3ub(100,84,60);

glBegin(GL_POLYGON);
glVertex2f(6,10);
glVertex2f(6.1754510811989,9.991435934838);
glVertex2f(6.1754510811989,9.6011971948506);
glVertex2f(6,9.6);
glEnd();
}
void hay_1 ()
{
glColor3ub(168, 124, 72);
glBegin(GL_POLYGON);
glVertex2f(6,9.6);
glVertex2f(5.8118613828333,9.519457645926);
glVertex2f(5.6416663195295,9.4254546838021);
glVertex2f(5.547475197829,9.3470283316322);
glVertex2f(5.4780657966332,9.2705567695994);
glVertex2f(5.362883330345,9.0791282290035);
glVertex2f(5.31825,8.94517);
glVertex2f(4.7846001873979,7.5399361579945);
glVertex2f(4.3743492043343,6.3692199380325);
glVertex2f(6.5957081858007,6.3091832088037);
glVertex2f(7.4662407596186,6.7794709210961);
glVertex2f(6.9238,8.978298);
glVertex2f(6.900950538347,9.0471504574132);
glVertex2f(6.8377158986364,9.1772661572066);
glVertex2f(6.7352412046991,9.3141144113266);
glVertex2f(6.6153416459631,9.4299095508148);
glVertex2f(6.4865234596365,9.4983049997245);
glVertex2f(6.3196553311176,9.5579528729572);
glVertex2f(6.1754510811989,9.6011971948506);
glEnd();
}

void hay_1_borader ()
{

glColor3ub(222, 184, 135);
glLineWidth(1.5f);
glBegin(GL_LINES);
glVertex2f(6.0578601860222,9.2064307134872);
glVertex2f(5.6551327612158,8.7706891071853);//E1
glVertex2f(5.4450042089149,8.6706278918039);
glVertex2f(5.304918507381,8.1903340579734);
glVertex2f(5.4450042089149,7.8301136826004);
glVertex2f(5.1848450489234,6.9996055949351);//N
glVertex2f(5.1148021981564,7.5599484010707);
glVertex2f(4.9747164966225,7.2597647549266);
glVertex2f(4.8146185520123,6.699421948791);
glVertex2f(4.7045512150928,6.4892933964901);
glVertex2f(5.965322528898,8.5505544333463);
glVertex2f(5.8052245842879,7.870138168753);
glVertex2f(6.2254816888896,8.4404870964268);
glVertex2f(6.2254816888896,8.0502483564394);
glVertex2f(6.4956469704193,9.1209033610201);
glVertex2f(6.615720428877,8.6706278918039);
    glEnd();
}


////////////////////////house1
void House1_a_floorBoerder2()
 {
glColor3ub(100,84,60);

glBegin(GL_POLYGON);
glVertex2f(12.8549479328069,6.4090624079468);
glVertex2f(8.4990976153896,4.0457915799425);
glVertex2f(8.4781632759155,3.3565548410679);
glVertex2f(13.2389650854716,6.008774203482);

    glEnd();

}

void House1_a_body()
 {
glColor3ub(124,108,100);

glBegin(GL_POLYGON);
glVertex2f(11.4145784757734,10.0131782380899);
glVertex2f(12.7046949885471,8.2965315016013);
glVertex2f(12.7046949885471,6.17823315);
glVertex2f(9.9550254646359, 4.844027781);
glVertex2f(9.9550254646359, 7.8130863324863);
    glEnd();
}


void House1_a_body1()
 {
    glColor3ub(124,108,100);

glBegin(GL_POLYGON);
glVertex2f(9.9550254646359, 4.844027781);
glVertex2f(9.9550254646359, 7.8130863324863);
glVertex2f(5.9169347296818,6.7953922135831);
glVertex2f(5.9169347296818,5.1357475349045);
glEnd();
}


void House_a_roof()
 {
 glColor3ub(86,87,87);
glBegin(GL_POLYGON);
glVertex2f(4.5370054462862,6.7953922135831);
glVertex2f(8.7140886825109,6.8140399066019);
glVertex2f(9.9448364217557,7.8210153296204);
glVertex2f(6.4483939807194,8.138026110941);

    glEnd();
}

void House_a_roof1()
 {
glColor3ub(86,87,87);
glBegin(GL_POLYGON);
glVertex2f(9.9448364217557,7.8210153296204);
glVertex2f(6.4483939807194,8.138026110941);
glVertex2f(8.1173625059074,10.478311584808);
glVertex2f(11.6231287934532,10.3384538871665);

glEnd();
}


void House1_a()
 {
    glColor3ub(52,52,52);
    glBegin(GL_POLYGON);
    glVertex2f(11.6231287934532,10.3384538871665);
    glVertex2f(11.4145784757734,10.0131782380899);
    glVertex2f(12.7046949885471,8.2965315016013);
    glVertex2f(13.0666443555262,8.4047722353576);

    glEnd();

}

void House1_a_windows1()
{
    glColor3ub(73,12,27);

    glBegin(GL_POLYGON);

    glVertex2f(10.7887207192488,7.7082547390006);
    glVertex2f(11.9738783026123,7.860198018919);
    glVertex2f(11.9738783026123,6.9871025184835);
    glVertex2f(10.7887207192488,6.7882726027094);

    glEnd();

}

void House1_a_Door()
 {//0,90,68
    glColor3ub(73,12,27);

    glBegin(GL_POLYGON);
   glVertex2f(7.2726565325505,6.4133965610686);// glVertex2f(9.9550254646359, 7.8130863324863);
    glVertex2f(8.2780534334467,6.4148987017423);
  glVertex2f(8.30800,4.8273);
   glVertex2f(7.205533817561,4.822265760809245);

    glEnd();

}
void House1_a_floor()
 {
    glColor3ub(133,112,96);

    glBegin(GL_POLYGON);
   glVertex2f(5.9169347296818,5.1357475349045);// glVertex2f(9.9550254646359, 7.8130863324863);
    glVertex2f(9.9550254646359, 4.844027781);
 glVertex2f(8.7160448886212,3.9216774465456); //glVertex2f(8.7160448886212,4.1490002156381);
   glVertex2f(4.7205533817561,4.065760809245);

    glEnd();

}

void House1_a_floorBoerder()
 {
    glColor3ub(100,84,60);

    glBegin(GL_POLYGON);
  //    //glVertex2f(8.7160448886212,4.1490002156381);
   glVertex2f(4.7205533817561,4.065760809245);
    glVertex2f(8.7160448886212,3.9216774465456);
   glVertex2f(4.6710165846036,3.7521025492561);// glVertex2f(9.9550254646359, 7.8130863324863);
    glVertex2f(4.7946252434124,3.4554417681149);
  glVertex2f(8.4781632759155,3.3565548410679);
  glVertex2f(8.7160448886212,3.9216774465456);

    glEnd();

}

void House22()
{

       glPushMatrix();
   // glTranslatef(-12.0f, 1.0f, 0.0f);
   glTranslatef(-21.9f, -7.5f, 0.0f);
   glScalef(2.5f, 2.7f, 1.0f);

 glColor3ub(86,87,87);

    glBegin(GL_POLYGON);
  //    //glVertex2f(8.7160448886212,4.1490002156381);
   glVertex2f(10.6982214931548,5.6310946688854);
    glVertex2f(13.0798825666815,5.7484905020816);
   glVertex2f(14.0827828679884,4.7455902007747);// glVertex2f(9.9550254646359, 7.8130863324863);
    glVertex2f(11.4401461790254,4.3661738929748);


    glEnd();



    glColor3ub(52,52,52);

    glBegin(GL_POLYGON);
  //    //glVertex2f(8.7160448886212,4.1490002156381);
   glVertex2f(10.6982214931548,5.6310946688854);
    glVertex2f(9.7417708348313,4.561584045206);
   glVertex2f(9.8921101852408,4.4287474951264);// glVertex2f(9.9550254646359, 7.8130863324863);
    glVertex2f(10.7699324101925,5.4544134632278);


    glEnd();



    glColor3ub(124,108,100);

    glBegin(GL_POLYGON);
  //    //glVertex2f(8.7160448886212,4.1490002156381);
   glVertex2f(10.7699324101925,5.4544134632278);
    glVertex2f(9.8921101852408,4.4287474951264);
   glVertex2f(9.9645104791189,3.393166161192);// glVertex2f(9.9550254646359, 7.8130863324863);
    glVertex2f(11.3981040734776,3.4625335931771);
glVertex2f(11.3210291490497,4.5878274898243) ;

    glEnd();


  glColor3ub(124,108,100);

    glBegin(GL_POLYGON);
  //    //glVertex2f(8.7160448886212,4.1490002156381);
   glVertex2f(11.3210291490497,4.5878274898243);
    glVertex2f(11.3983720708031,3.4545164638937);
     glVertex2f(13.8447681876064,3.7627336593518);
   glVertex2f(13.7381294802146,4.7906294317533);// glVertex2f(9.9550254646359, 7.8130863324863);

//glVertex2f(11.3210291490497,4.5878274898243) ;

    glEnd();



  glColor3ub(100,84,60);

    glBegin(GL_POLYGON);
  //    //glVertex2f(8.7160448886212,4.1490002156381);
   glVertex2f(9.9645104791189,3.393166161192);
    glVertex2f(11.3983720708031,3.4545164638937);
     glVertex2f(11.3900952006235,3.2494405439009);
   glVertex2f(10.0124008243165,3.2021377326972);// glVertex2f(9.9550254646359, 7.8130863324863);

//glVertex2f(11.3210291490497,4.5878274898243) ;

    glEnd();


 glColor3ub(100,84,60);

    glBegin(GL_POLYGON);
  //    //glVertex2f(8.7160448886212,4.1490002156381);
   glVertex2f(11.3983720708031,3.4545164638937);
    glVertex2f(13.8447681876064,3.7627336593518);
     glVertex2f(14.0311217589571,3.6404688777603);
   glVertex2f(11.3900952006235,3.2494405439009);// glVertex2f(9.9550254646359, 7.8130863324863);

//glVertex2f(11.3210291490497,4.5878274898243) ;

    glEnd();

 glColor3ub(73,12,27);

    glBegin(GL_POLYGON);
  //    //glVertex2f(8.7160448886212,4.1490002156381);
   glVertex2f(10.4287264181323,4.2440777940414);
    glVertex2f(10.8882651398016,4.2831874724814);
     glVertex2f(10.9379381313605,3.4638649505561);
   glVertex2f(10.4564337418418,3.4285389256527);// glVertex2f(9.9550254646359, 7.8130863324863);

//glVertex2f(11.3210291490497,4.5878274898243) ;

    glEnd();
     glColor3ub(73,12,27);

    glBegin(GL_POLYGON);
  //    //glVertex2f(8.7160448886212,4.1490002156381);
   glVertex2f(11.7458310843148,4.1841579536881);
    glVertex2f(12.3323948122248,4.222337540578);
     glVertex2f(12.3445514157178,3.9222178086993);
   glVertex2f(11.7458310843148,3.8754427828085);// glVertex2f(9.9550254646359, 7.8130863324863);

//glVertex2f(11.3210291490497,4.5878274898243) ;

    glEnd();


         glColor3ub(73,12,27);

    glBegin(GL_POLYGON);
  //    //glVertex2f(8.7160448886212,4.1490002156381);
   glVertex2f(12.9291956169865,4.3026744032173);
    glVertex2f(13.5479729154336,4.364997296586);
     glVertex2f(13.5479729154336,4.0978991821484);
   glVertex2f(12.9380988874677,4.0088664773359);// glVertex2f(9.9550254646359, 7.8130863324863);

//glVertex2f(11.3210291490497,4.5878274898243) ;

    glEnd();
    glColor3ub(0, 0, 0);
glLineWidth(1.5f);
glBegin(GL_LINES);
glVertex2f(11.3210291490497,4.5878274898243);
glVertex2f(11.3983720708031,3.4545164638937);

glVertex2f(13.7381294802146,4.7906294317533);
glVertex2f(13.8447681876064,3.7627336593518);

glVertex2f(13.3205771110693,1.8725296441902);
glVertex2f(14.9909823805358,1.8931519314676);
glEnd();
    glPopMatrix();

}

void DrawLine1()
 {
glColor3ub(0, 0, 0);
glLineWidth(1.5f);
glBegin(GL_LINES);
glVertex2f(9.9550254646359, 7.8130863324863);
glVertex2f(9.9550254646359, 4.844027781);//E1

glVertex2f(8.7140886825109,6.8140399066019);
glVertex2f(8.7160448886212,3.9216774465456);

glVertex2f(5.9169347296818,6.7953922135831);
glVertex2f(5.9169347296818,5.1357475349045);//N

glVertex2f(5.0218454647765,6.7301252880171);
glVertex2f(5.0218454647765,4.08110504422);


glVertex2f(12.7046949885471,8.2965315016013);
glVertex2f(12.7046949885471,6.17823315);


    glEnd();
}

////////////////////////////////// Banana Tree
float leafOffset1=0.0f;

void BAnaa_Tree() {
    glColor3ub(34, 139, 34); // Set the color for the tree

    glBegin(GL_POLYGON); // Start drawing the polygon
   glVertex2f(11.6136826260869+ leafOffset1, 10.328268976953); // V4
  //  glVertex2f(11.8846219350799, 10.8040528480322); // W4
    glVertex2f(12.258763846591+ leafOffset1, 10.743568281115);   // Z4
    glVertex2f(12.8890223727909+ leafOffset1, 10.916222333087);  // A4


    glVertex2f(13.4,11); // C4

    // Add vertex using the coordinates you provided
    glVertex2f(13.89353375751621+ leafOffset1, 11.0297031743066); // C1
    glVertex2f(13.97847787871992+ leafOffset1, 10.32091296978);   // D1
    glVertex2f(13.505080925146+ leafOffset1, 10.1808896222483);   // E1
    glVertex2f(13.2433426571343+ leafOffset1, 10.8328193020716);  // F1
    glVertex2f(13.0813578191061+ leafOffset1, 10.1021222460297);  // G1
    glVertex2f(12.8+ leafOffset1, 10);                            // H1
    glVertex2f(12.3769330933792+ leafOffset1,10.5309513560842);   // I1
    glVertex2f(12.3638056771102+ leafOffset1,9.9139627914405);     // J1
    glVertex2f(12.0837541303079+ leafOffset1, 9.080943612883);    // K1

    glEnd(); // End drawing the polygon
}


void  BAnaa_Tree1()
 {
    glColor3ub(50, 205, 50);

    glBegin(GL_POLYGON);

glVertex2f(11.6313157712323+ leafOffset1,11.9522779876076);
glVertex2f(12.2394704087606+ leafOffset1,12.5466109288284);
glVertex2f(12.6001462182656+ leafOffset1,12.7071454940444);
glVertex2f(14.4+ leafOffset1,13.4);
glVertex2f(14.285346787779+ leafOffset1,12.4476015589106);
glVertex2f(13.1479675665626+ leafOffset1,12.7862081454155);
glVertex2f(13.0385383911296+ leafOffset1,11.8953819230244);
glVertex2f(12.6071168005935+ leafOffset1,11.6710426959457);
glVertex2f(12.0721540283287+ leafOffset1,12.1801201727782);
glVertex2f(11.5814946964072+ leafOffset1,10.3343640905879);


  glEnd();

}
void BANANA_TREE()
{  glColor3ub(50, 205, 50);

    glBegin(GL_POLYGON);
glVertex2f(9.9704700386321+ leafOffset1,13.2705940147554);
glVertex2f(10.6931999444529+ leafOffset1,12.5210589461397);
glVertex2f(10.9556317937865+ leafOffset1,11.8807252337658);
glVertex2f(11.2983456659721+ leafOffset1,10.6343703428305);
glVertex2f(11.3276370401046+ leafOffset1,10.3414566015055);
glVertex2f(11.6153826260859+ leafOffset1,10.3238268976953);
glVertex2f(11.8744093572446+ leafOffset1,11.3861822788979);
glVertex2f(11.8255904003571+ leafOffset1,11.9720097615479);
glVertex2f(11.6791335296946+ leafOffset1,12.7042941148604);
glVertex2f(11.2246829256294+ leafOffset1,13.3834828590523);
glVertex2f(10.6832268091896+ leafOffset1,13.7978387491403);
  glEnd();

}
void  BAnaa_Tree2()
 {
   glColor3f(0.68f, 0.85f, 0.90f);;

    glBegin(GL_POLYGON);

glVertex2f(9.9704700386321+ leafOffset1,13.2705940147554);
glVertex2f(11+ leafOffset1,13);
glVertex2f(10.6931999444529+ leafOffset1,12.5210589461397);
glVertex2f(11.5349908172074+ leafOffset1,12.3780583570722);
glVertex2f(10.9556317937865+ leafOffset1,11.8807252337658);
glVertex2f(11.2983456659721+ leafOffset1,10.6343703428305);
glVertex2f(11.3276370401046+ leafOffset1,10.3414566015055);
//glVertex2f(11.5026490354251,10.3651223588966);
  glEnd();

}
void  BAnaa_Tree3()
 {

    glColor3ub(50, 205, 50);

    glBegin(GL_POLYGON);

glVertex2f(11.3276370401046+ leafOffset1,10.3414566015055);
glVertex2f(11.2983456659721+ leafOffset1,10.6343703428305);
glVertex2f(10.3903130678646+ leafOffset1,11.5619305236929);
glVertex2f(9.6775562973071+ leafOffset1,12.0891752580779);
glVertex2f(9.0917288146571+ leafOffset1,12.2942148770054);
glVertex2f(8.3984996268546+ leafOffset1,12.3039786683829);
glVertex2f(8.0665307200196+ leafOffset1,12.1575217977204);
glVertex2f(8.1251134682846+ leafOffset1,11.2690167823679);
  glEnd();

}
void BNANA_TREE3()
{
   glColor3f(0.76f, 0.60f, 0.0f);;

    glBegin(GL_POLYGON);

glVertex2f(8.1251134682846+ leafOffset1,11.2690167823679);
glVertex2f(9.1483853285335+ leafOffset1,11.9900507888264);
glVertex2f(9.0917288146571+ leafOffset1,11.2494891996129);
glVertex2f(9.5+ leafOffset1,11);
glVertex2f(10.2261015534177+ leafOffset1,11.4268222089875);
glVertex2f(10.1462182834271+ leafOffset1,10.566023803188);
  glEnd();
}


void timer1(int value) {
    leafOffset1 = 0.5f * sin(value * 0.1f);
    glutPostRedisplay();

    glutTimerFunc(30, timer1, value + 1);
}



void ground()
{
     glPushMatrix();
    glTranslatef(-15.0f, -3.0f, 0.0f);
     // Draw the river
glColor3f(0.76f, 0.60f, 0.42f); // Light Soil Color

   // glColor3f(0.68f, 0.85f, 0.90f); // Light Blue

    glBegin(GL_POLYGON);
    glVertex2f(2.9377253937676,-12.2968462340103);
glVertex2f(5.1255587400566,12.6082407105097);
glVertex2f(16.8056470235871,12.4708592366456);
glVertex2f(19.4109102741348,12.2059172111662);
glVertex2f(21.8246131546763,11.5827054903058);
glVertex2f(23.6740628379427,10.8128432151872);
glVertex2f(25.7797835331923,9.7298563026319);
glVertex2f(26.5567867302783,8.6496323457075);
glVertex2f(27.5233029022634,6.830307786677);
glVertex2f(28.8840259803505,3.5371028403488);
glVertex2f(33.8930556437459,-2.5044703922029);
glVertex2f(34.8799100302433,-6.6250480333713);
glVertex2f(36.061829390744,-10.9088042159977);
glEnd();
    glPopMatrix();

}

void ground1()
{
     glPushMatrix();
    glTranslatef(-15.0f, -2.0f, 0.0f);
     // Draw the river
glColor3f(0.76f, 0.60f, 0.0f); // Light Soil Color

   // glColor3f(0.68f, 0.85f, 0.90f); // Light Blue

    glBegin(GL_POLYGON);
    glVertex2f(2.9377253937676,-12.2968462340103);
glVertex2f(5.1255587400566,12.6082407105097);
glVertex2f(16.8056470235871,12.4708592366456);
glVertex2f(19.4109102741348,12.2059172111662);
glVertex2f(21.8246131546763,11.5827054903058);
glVertex2f(23.6740628379427,10.8128432151872);
glVertex2f(25.7797835331923,9.7298563026319);
glVertex2f(26.5567867302783,8.6496323457075);
glVertex2f(27.5233029022634,6.830307786677);
glVertex2f(28.8840259803505,3.5371028403488);
glVertex2f(33.8930556437459,-2.5044703922029);
glVertex2f(34.8799100302433,-6.6250480333713);
glVertex2f(36.061829390744,-10.9088042159977);
glEnd();
    glPopMatrix();

}

void River
()
{
glPushMatrix();
glTranslatef(-8.0f, 9.90f, 0.0f);
glColor4f(0.043f, 0.431f, 0.663f, 1.0f);

glBegin(GL_POLYGON);
    glVertex2f(2.9377253937676, -12.2968462340103);
    glVertex2f(5.1255587400566, 12.6082407105097);
    glVertex2f(16.8056470235871, 12.4708592366456);
    glVertex2f(19.4109102741348, 12.2059172111662);
    glVertex2f(21.8246131546763, 11.5827054903058);
    glVertex2f(23.6740628379427, 10.8128432151872);
    glVertex2f(25.7797835331923, 9.7298563026319);
    glVertex2f(26.5567867302783, 8.6496323457075);
    glVertex2f(27.5233029022634, 6.830307786677);
    glVertex2f(28.8840259803505, 3.5371028403488);
    glVertex2f(33.8930556437459, -2.5044703922029);
    glVertex2f(34.8799100302433, -6.6250480333713);
    glVertex2f(40.061829390744, -28.9088042159977);
glEnd();
glPopMatrix();

// Second Layer - Medium Blue
glPushMatrix();
glTranslatef(-15.0f, 8.90f, 0.0f); // Adjusted position
glColor3f(0.145f, 0.588f, 0.745f);

glBegin(GL_POLYGON);
    glVertex2f(2.9377253937676, -12.2968462340103);
    glVertex2f(5.1255587400566, 12.6082407105097);
    glVertex2f(16.8056470235871, 12.4708592366456);
    glVertex2f(19.4109102741348, 12.2059172111662);
    glVertex2f(21.8246131546763, 11.5827054903058);
    glVertex2f(23.6740628379427, 10.8128432151872);
    glVertex2f(25.7797835331923, 9.7298563026319);
    glVertex2f(26.5567867302783, 8.6496323457075);
    glVertex2f(27.5233029022634, 6.830307786677);
    glVertex2f(28.8840259803505, 3.5371028403488);
    glVertex2f(33.8930556437459, -2.5044703922029);
    glVertex2f(34.8799100302433, -6.6250480333713);
    glVertex2f(40.061829390744, -28.9088042159977);
glEnd();
glPopMatrix();

// Third Layer - Light Blue
glPushMatrix();
glTranslatef(-15.0f, 3.0f, 0.0f); // Adjusted position
glColor3f(0.68f, 0.85f, 0.90f); // Light Blue

glBegin(GL_POLYGON);
    glVertex2f(2.9377253937676, -12.2968462340103);
    glVertex2f(5.1255587400566, 12.6082407105097);
    glVertex2f(16.8056470235871, 12.4708592366456);
    glVertex2f(19.4109102741348, 12.2059172111662);
    glVertex2f(21.8246131546763, 11.5827054903058);
    glVertex2f(23.6740628379427, 10.8128432151872);
    glVertex2f(25.7797835331923, 9.7298563026319);
    glVertex2f(26.5567867302783, 8.6496323457075);
    glVertex2f(27.5233029022634, 6.830307786677);
    glVertex2f(28.8840259803505, 3.5371028403488);
    glVertex2f(33.8930556437459, -2.5044703922029);
    glVertex2f(34.8799100302433, -6.6250480333713);
    glVertex2f(40.061829390744, -28.9088042159977);
glEnd();
glPopMatrix();


}

void Hill() {

    glPushMatrix();
    glTranslatef(-15.0f, 3.0f, 0.0f);

    // Draw the first green area
    glColor3f(0.5f, 0.8f, 0.5f); // Light Green

    glBegin(GL_POLYGON);
    glVertex2f(13.0832446226441, 18.7251733705525);
    glVertex2f(13.811461568567, 19.6023437826868);
    glVertex2f(14.5231281293553, 19.9664522556483);
    glVertex2f(15.1354923793359, 19.7347468637637);
    glVertex2f(15.6816550887781, 19.172033769187);
    glVertex2f(15.9520330025243, 18.3324479811372);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-15.0f, 3.0f, 0.0f);

    // Draw the second green area
    glColor3f(0.4f, 0.7f, 0.4f); // Medium Green

    glBegin(GL_POLYGON);
    glVertex2f(5.1326160420567, 18.2635600535641);
    glVertex2f(5.9657786068976, 19.1617540978621);
    glVertex2f(6.608851452953, 19.6922891958577);
    glVertex2f(7.1715401932514, 19.8852110496743);
    glVertex2f(7.6377680066415, 19.6119050901008);
    glVertex2f(8.2004567469399, 19.1617540978621);
    glVertex2f(8.7631454872383, 18.8402176748345);
    glVertex2f(9.084681910266, 18.3418362191417);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-15.0f, 3.0f, 0.0f);

    // Draw the third green area
    glColor3f(0.3f, 0.6f, 0.3f); // Dark Green

    glBegin(GL_POLYGON);
    glVertex2f(9.084681910266, 18.3418362191417);
    glVertex2f(9.7599083986241, 19.2421382036191);
    glVertex2f(10.6280567407988, 20.0620560823395);
    glVertex2f(11.1746686599458, 20.5282838957296);
    glVertex2f(12, 21);
    glVertex2f(13.0717335558091, 20.5282838957296);
    glVertex2f(13.3932699788367, 19.9495183342799);
    glVertex2f(13.8434209710754, 18.8080640325317);
    glVertex2f(14.8434209710754, 18.3080640325317);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-15.0f, 3.0f, 0.0f);

    // Draw the fourth green area
    glColor3f(0.35f, 0.65f, 0.35f); // Intermediate Green

    glBegin(GL_POLYGON);
    glVertex2f(15.3799497225165, 18.6298104521036);
    glVertex2f(16.6333195860415, 19.5368544322861);
    glVertex2f(14.5231281293553, 19.9664522556483);
    glVertex2f(17.4084298963793, 19.7347549370532);
    glVertex2f(17.9526562844889, 20.3944232862769);
    glVertex2f(19.0576007694386, 20.2130144902404);
    glVertex2f(19.7997276623153, 19.4708875973638);
    glVertex2f(20.6806960652137, 18.5894580810757);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-15.0f, 3.0f, 0.0f);

    // Draw the fifth green area
    glColor3f(0.4f, 0.7f, 0.4f); // Medium Green

    glBegin(GL_POLYGON);
    glVertex2f(18.7341840275915, 19.0436442231875);
    glVertex2f(20.9760323481959, 20.2060637189787);
    glVertex2f(22.487357805035, 19.7140042679148);
    glVertex2f(23.3660353962205, 18.8353266767294);
    glVertex2f(24.3894504903138, 20.1964764058497);
    glVertex2f(25.359444462215, 20.2324021085127);
    glVertex2f(25.6827757861821, 19.3701852446006);
    glVertex2f(26.6168440554203, 19.0827796232965);
    glVertex2f(27.6227637299846, 19.1546310286225);
    glVertex2f(28, 20);
    glVertex2f(29.8501572950912, 20.6275848378058);
    glVertex2f(30.5327456456884, 18.9031511099815);
    glVertex2f(30.5127456456884, 18.3695854);
    glEnd();
    glPopMatrix();
}

void hill2()
{
    glPushMatrix();
    glTranslatef(1.0f, 3.0f, 0.0f);
    // Draw the first green area
    glColor3f(0.5f, 0.8f, 0.5f); // Light Green

    glBegin(GL_POLYGON);
    glVertex2f(13.0832446226441, 18.7251733705525);
    glVertex2f(13.811461568567, 19.6023437826868);
    glVertex2f(14.5231281293553, 19.9664522556483);
    glVertex2f(15.1354923793359, 19.7347468637637);
    glVertex2f(15.6816550887781, 19.172033769187);
    glVertex2f(15.9520330025243, 18.3324479811372);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.0f, 3.0f, 0.0f);
    // Draw the second green area
    glColor3f(0.4f, 0.7f, 0.4f); // Medium Green

    glBegin(GL_POLYGON);
    glVertex2f(5.1326160420567, 18.2635600535641);
    glVertex2f(5.9657786068976, 19.1617540978621);
    glVertex2f(6.608851452953, 19.6922891958577);
    glVertex2f(7.1715401932514, 19.8852110496743);
    glVertex2f(7.6377680066415, 19.6119050901008);
    glVertex2f(8.2004567469399, 19.1617540978621);
    glVertex2f(8.7631454872383, 18.8402176748345);
    glVertex2f(9.084681910266, 18.3418362191417);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.0f, 3.0f, 0.0f);
    // Draw the third green area
    glColor3f(0.3f, 0.6f, 0.3f); // Dark Green

    glBegin(GL_POLYGON);
    glVertex2f(9.084681910266, 18.3418362191417);
    glVertex2f(9.7599083986241, 19.2421382036191);
    glVertex2f(10.6280567407988, 20.0620560823395);
    glVertex2f(11.1746686599458, 20.5282838957296);
    glVertex2f(12, 21);
    glVertex2f(13.0717335558091, 20.5282838957296);
    glVertex2f(13.3932699788367, 19.9495183342799);
    glVertex2f(13.8434209710754, 18.8080640325317);
    glVertex2f(14.8434209710754, 18.3080640325317);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.5f, 3.0f, 0.0f);
    // Draw the first green area again
    glColor3f(0.5f, 0.8f, 0.5f); // Light Green

    glBegin(GL_POLYGON);
    glVertex2f(13.0832446226441, 18.7251733705525);
    glVertex2f(13.811461568567, 19.6023437826868);
    glVertex2f(14.5231281293553, 19.9664522556483);
    glVertex2f(15.1354923793359, 19.7347468637637);
    glVertex2f(15.6816550887781, 19.172033769187);
    glVertex2f(15.9520330025243, 18.3324479811372);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6.0f, 3.0f, 0.0f);
    // Draw the second green area again
    glColor3f(0.4f, 0.7f, 0.4f); // Medium Green

    glBegin(GL_POLYGON);
    glVertex2f(5.1326160420567, 18.2635600535641);
    glVertex2f(5.9657786068976, 19.1617540978621);
    glVertex2f(6.608851452953, 19.6922891958577);
    glVertex2f(7.1715401932514, 19.8852110496743);
    glVertex2f(7.6377680066415, 19.6119050901008);
    glVertex2f(8.2004567469399, 19.1617540978621);
    glVertex2f(8.7631454872383, 18.8402176748345);
    glVertex2f(9.084681910266, 18.3418362191417);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(8.0f, 3.0f, 0.0f);
    glColor3f(0.3f, 0.6f, 0.3f); // Dark Green

    glBegin(GL_POLYGON);
    glVertex2f(9.084681910266, 18.3418362191417);
    glVertex2f(9.7599083986241, 19.2421382036191);
    glVertex2f(10.6280567407988, 20.0620560823395);
    glVertex2f(11.1746686599458, 20.5282838957296);
    glVertex2f(12, 21);
    glVertex2f(13.0717335558091, 20.5282838957296);
    glVertex2f(13.3932699788367, 19.9495183342799);
    glVertex2f(13.8434209710754, 18.8080640325317);
    glVertex2f(14.8434209710754, 18.3080640325317);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(9.0f, 3.0f, 0.0f);
    // Draw the first green area again
    glColor3f(0.5f, 0.8f, 0.5f); // Light Green

    glBegin(GL_POLYGON);
    glVertex2f(5.1326160420567, 18.2635600535641);
    glVertex2f(5.9657786068976, 19.1617540978621);
    glVertex2f(6.608851452953, 19.6922891958577);
    glVertex2f(7.1715401932514, 19.8852110496743);
    glVertex2f(7.6377680066415, 19.6119050901008);
    glVertex2f(8.2004567469399, 19.1617540978621);
    glVertex2f(8.7631454872383, 18.8402176748345);
    glVertex2f(9.084681910266, 18.3418362191417);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10.0f, 3.0f, 0.0f);
    // Draw the second green area again
    glColor3f(0.4f, 0.7f, 0.4f); // Medium Green

    glBegin(GL_POLYGON);
    glVertex2f(9.084681910266, 18.3418362191417);
    glVertex2f(9.7599083986241, 19.2421382036191);
    glVertex2f(10.6280567407988, 20.0620560823395);
    glVertex2f(11.1746686599458, 20.5282838957296);
    glVertex2f(12, 21);
    glVertex2f(13.0717335558091, 20.5282838957296);
    glVertex2f(13.3932699788367, 19.9495183342799);
    glVertex2f(13.8434209710754, 18.8080640325317);
    glVertex2f(14.8434209710754, 18.3080640325317);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(12.0f, 3.0f, 0.0f);
    // Draw the third green area again
    glColor3f(0.3f, 0.6f, 0.3f); // Dark Green

    glBegin(GL_POLYGON);
    glVertex2f(15.3799497225165, 18.6298104521036);
    glVertex2f(16.6333195860415, 19.5368544322861);
    glVertex2f(14.5231281293553, 19.9664522556483);
    glVertex2f(17.4084298963793, 19.7347549370532);
    glVertex2f(17.9526562844889, 20.3944232862769);
    glVertex2f(19.0576007694386, 20.2130144902404);
    glVertex2f(19.7997276623153, 19.4708875973638);
    glVertex2f(20.6806960652137, 18.5894580810757);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(8.0f, 3.0f, 0.0f);
    // Draw the third green area again
    glColor3f(0.3f, 0.6f, 0.3f); // Dark Green

    glBegin(GL_POLYGON);
    glVertex2f(15.3799497225165, 18.6298104521036);
    glVertex2f(16.6333195860415, 19.5368544322861);
    glVertex2f(14.5231281293553, 19.9664522556483);
    glVertex2f(17.4084298963793, 19.7347549370532);
    glVertex2f(17.9526562844889, 20.3944232862769);
    glVertex2f(19.0576007694386, 20.2130144902404);
    glVertex2f(19.7997276623153, 19.4708875973638);
    glVertex2f(20.6806960652137, 18.5894580810757);
    glEnd();
    glPopMatrix();
}

//tree
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
void ball1(float radius, float xc, float yc, float r, float g, float b)
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
//////////////////////////////BOAT1


float _angle11 = 0.0;
float carPosition1 = 1.0f;  // Start at the right boundary
float carSpeed1 = 0.1f;


void Boat()
{

 glPushMatrix();
glTranslatef(-carPosition1, 0.0f, 0.0f);


  glPushMatrix();
// glTranslatef(-12.0f, 1.0f, 0.0f);
   glTranslatef(-15.9f, 4.5f, 0.0f);
    glScalef(2.0f, 1.7f, 1.0f);
glColor3ub(150, 150, 150);
glBegin(GL_POLYGON);
glVertex2f(6.7398096243899,9.136544721219);
glVertex2f(7.459713083644,8.9696105857397);
glVertex2f(8.4613178965193,8.9278770518699);
glVertex2f(10,9);


glVertex2f(11.3409317335356,9.2617453228284);
glVertex2f(10.5062610561396,8.8444099841303);
glVertex2f(9.3690222581875,8.698342615586);
glVertex2f(8.1691831594306,8.6774758486511);
glVertex2f(7.5223133844487,8.7609429163907);
glVertex2f(6.7398096243899,9.136544721219);
glEnd();


glPushMatrix();
//glTranslatef(-11.9f, 1.5f, 0.0f);
//glScalef(2.0f,1.7f, 1.0f);
glColor3ub(153,76, 0);
glBegin(GL_POLYGON);
glVertex2f(7.6512969562834,9.1233568019073);
glVertex2f(7.5035684129529,8.7550993210165);
glVertex2f(7.5955845796332,8.7389057195354);
glVertex2f(7.72,9.1);
glEnd();


 glColor3ub(153, 76, 0);
glBegin(GL_POLYGON);
glVertex2f(8.2860836570653,9.1880895003803);
glVertex2f(8.1296657631722,8.6582368914456);
glVertex2f(8.2566024748279,8.6513754475723);
glVertex2f(8.3969932762772,9.1675953316152);
glEnd();

glColor3ub(153, 76, 0);
glBegin(GL_POLYGON);
glVertex2f(9.0347445807249,9.2176326186888);
glVertex2f(8.7425898342679,8.6253806526993);
glVertex2f(8.9145380929912,8.6146338865291);
glVertex2f(9.1874177440855,9.1893598106622);
glEnd();

glColor3ub(153, 76, 0);
glBegin(GL_POLYGON);
glVertex2f(9.9148515166208,9.2149467596331);
glVertex2f(9.6500175187054,8.6475312285153);
glVertex2f(9.8960366390883,8.685545281279);
glVertex2f(10.1588081725059,9.1875016358491);
glEnd();

glColor3ub(153, 76, 0);
glBegin(GL_POLYGON);
glVertex2f(10.5668469010413,9.2777449655939);
glVertex2f(10.3342993467666,8.7537334558924);
glVertex2f(10.4560789340066,8.7410480822216);
glVertex2f(10.7240680561866,9.2777449655939);
glEnd();
glPopMatrix();
glPopMatrix();
glPopMatrix();


}

void boat_Half1()
{

     glPushMatrix();
glTranslatef(-carPosition1, 0.0f, 0.0f);


  glPushMatrix();
// glTranslatef(-12.0f, 1.0f, 0.0f);
   glTranslatef(-15.9f, 4.5f, 0.0f);
    glScalef(2.0f, 1.7f, 1.0f);
    glColor3ub (54, 69, 79);
glBegin(GL_POLYGON);


glVertex2f(11.3409317335356,9.2617453228284);
glVertex2f(10.5062610561396,8.8444099841303);
glVertex2f(9.3690222581875,8.698342615586);
glVertex2f(8.1691831594306,8.6774758486511);
glVertex2f(7.5223133844487,8.7609429163907);
glVertex2f(6.7398096243899,9.136544721219);

glVertex2f(7.5,8.5);
glVertex2f(8.1408530675859,8.2148848823088);
glVertex2f(8.1408530675859,8.2148848823088);
glVertex2f(8.5969633977667,8.1196617919769);
glVertex2f(9.1833347675018,8.10241557522);
glVertex2f(9.8559372210216,8.2662546344107);
glVertex2f(10.5,8.5);
glVertex2f(11.3409317335356,9.2617453228284);
glEnd();
glPopMatrix();
glPopMatrix();


}

//////////////////Boat 2
void boat2()
{
     glPushMatrix();
glTranslatef(carPosition1, 0.0f, 0.0f);

 glPushMatrix();
// glTranslatef(-12.0f, 1.0f, 0.0f);
   glTranslatef(-11.9f, 5.0f, 0.0f);
 glScalef(2.0f, 1.7f, 1.0f);
glColor3ub(0, 0, 0);
glLineWidth(1.5f);
glBegin(GL_LINES);

glVertex2f(17.0641820559292,9.9307940657954);
glVertex2f(17.1384368298587,8.7102312194637);
glEnd();
     glColor3ub (128, 0, 0);
glBegin(GL_POLYGON);
//(16.9574381923337,7.7846147406154)
glVertex2f(15.8577197672742,7.9996487705883);
glVertex2f(16.0658253491739,8.4247470381978);
glVertex2f(16.279202781725,8.6228832255447);
glVertex2f(16.5078214594583,8.6914688288571);
glVertex2f(16.766922627556,8.5695388674129);
glVertex2f(16.9193350793782,8.3028170767535);
glVertex2f(16.8371554683382, 7.991265279593);
glEnd();

       glColor3ub (153, 50, 50);
glBegin(GL_POLYGON);
/*
glVertex2f(15.8577197672742,7.9996487705883);
glVertex2f(16.0658253491739,8.4247470381978);
glVertex2f(16.5078214594583,8.6914688288571);*/
glVertex2f(16.5078214594583,8.6914688288571);
glVertex2f(16.766922627556,8.5695388674129);
glVertex2f(16.9193350793782,8.3028170767535);
glVertex2f(16.9645396061519,8.018329274196);
glVertex2f(16.9486443988239,7.7370905340257);


glVertex2f(18.3822042931784,7.834146859589);
glVertex2f(18.386845216549,8.0883474878726);
glVertex2f(18.386845216549,8.3018299628964);
glVertex2f(18.3125904426195,8.5431579781407);
glVertex2f(18.2012082817252,8.6823856792432);
glVertex2f(16.5078214594583,8.6914688288571);
glEnd();


       glColor3ub   (200, 220, 255);
glBegin(GL_POLYGON);

glVertex2f(16.618653412352,10.1489174641893);

glVertex2f(16.9110315846995,9.8054891348031);

glVertex2f(17,9.6);
glVertex2f(17.0038500521114,9.2764238706137);
glVertex2f(16.859981427623,8.9979684684088);
glVertex2f(17.2358962206412,9.0258140086293);
glVertex2f(17.5421971631006,8.895868154267);
glVertex2f(17.6907067109596,8.7566404531645);

glVertex2f(17.7463977914068,8.6684629091329);

glVertex2f(17.8438571821893,9.0954278591805);

glVertex2f(17.8438571821893,9.0954278591805);
glVertex2f(17.8352319004017, 9.3279694251529);
glVertex2f(17.6442974772537, 9.7497980543622);
glVertex2f(17.4540196190592, 9.9354349891655);
glVertex2f(17.0641820559292, 10.134994694079);
glEnd();
glPopMatrix();
glPopMatrix();

}

void Boat_half2()
{
/////////////////////////
 glPushMatrix();
glTranslatef(carPosition1, 0.0f, 0.0f);

 glPushMatrix();
// glTranslatef(-12.0f, 1.0f, 0.0f);
   glTranslatef(-11.9f, 5.0f, 0.0f);
 glScalef(2.0f, 1.7f, 1.0f);

 glColor3ub(150, 150, 150);
glBegin(GL_POLYGON);
glVertex2f(18.3601482852036,8.1345801056589);
glVertex2f(19.1149825207484,8.316669144187);
glVertex2f(18.965377549157,8.1749187365628);
glVertex2f(18.3822042931784,7.884146859589);
glEnd();




 glColor3ub(54, 69, 79);
glBegin(GL_POLYGON);
glVertex2f(14.8033813144006,8.1039050788756);
glVertex2f(15.3415492443656,7.8473366471764);
glVertex2f(18.965377549157,8.1749187365628);
glVertex2f(19.1149825207484,8.316669144187);
glVertex2f(18.7679184258553,7.8187079932944);
glVertex2f(18.2704674834287,7.4605433147869);
glVertex2f(17.6138322394256,7.2516139189909);
glVertex2f(15.9224990351752,7.3411550886177);
glVertex2f(15.3753029985059,7.6097785974984);
glVertex2f(14.8033813144006,8.1039050788756);
glEnd();





glColor3ub(150, 150, 150);
glBegin(GL_POLYGON);


//glPushMatrix();
//glTranslatef(-11.9f, 1.5f, 0.0f);
//glScalef(2.0f,1.7f, 1.0f);
glColor3ub(150, 150, 150);
glBegin(GL_POLYGON);
glVertex2f(16.9645396061519,8.018329274196);
glVertex2f(16.3928540377857,7.9662342130858);
glVertex2f(15.6419220424856,7.9787497463394);
glVertex2f(14.8033813144006,8.1039050788756);

glVertex2f(15.3415492443656,7.8473366471764);
glVertex2f(16.1300278394307,7.7472123811475);
glVertex2f(16.1300278394307,7.7472123811475);
glVertex2f(16.9574381923337,7.7846147406154);
glVertex2f(17.7445316293258,7.797274514162);
glVertex2f(17.7445316293258,7.797274514162);
glVertex2f(18.3822042931784,7.884146859589);
glEnd();

glPopMatrix();
glPopMatrix();

}



void update11(int value) {
    _angle11 += 2.0f;
    carPosition1 -= carSpeed1;


    if (carPosition1 < -35.0f) {

        carPosition1 = 10.0f;
    }


    glutPostRedisplay();


    glutTimerFunc(16, update11, 0);
}

////////////////////////////sky
float _move1 = 0.0;
float SkyPosition1 = 1.0f;
float SkySpeed1 = 0.1f;


void  Sky1()
{
    glColor3ub(255,255,255);
glBegin(GL_POLYGON);
glVertex2f(9.0705143121208, 11.7462566699976);
glVertex2f(8.914498040044, 11.9797408800869);
glVertex2f(8.671285396174, 12.0672973598704);
glVertex2f(8.37943022353, 11.940826785072);
glVertex2f(8.0194755106024, 12.0770258565242);
glVertex2f(7.7373488437132, 12.1937679346689);
glVertex2f(7.3190230962568, 12.1353969001465);
glVertex2f(7.2314656444636, 11.901927620572);
glVertex2f(7.3968511422952, 11.6684286239678);
glVertex2f(7.114724475406, 11.5711435664306);
glVertex2f(7.2022810271992, 11.2598313823114);
glVertex2f(7.5427787286172, 11.2209173592965);
glVertex2f(7.6692493034296, 11.0458042557295);
glVertex2f(7.8930049359719, 10.9387096924386);
glVertex2f(8.1459460854148, 10.9679762096997);
glVertex2f(8.4086157407944, 11.182033362816);
glVertex2f(8.6323713731548,11.065261267237);
glVertex2f(9,11);
glVertex2f(9.2160817184428,11.2792883938189);
glVertex2f(9.35228079901,11.590600577938);
glEnd();
}

void Sunupdate1(int value) {
    _move1 += 0.02f;
    SkyPosition1 -= SkySpeed1;

    if (SkyPosition1 < -30.0f) {
        SkyPosition1 = 30.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(16, Sunupdate1, 0);
}


bool isDay = true; // Default is sunny day

void renderNightScene() {
    // Clear the screen and set the background to dark blue (night sky)
    glClearColor(0.0f, 0.0f, 0.2f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glPushMatrix();
    glTranslatef(0.0f, SkyPosition1, 0.0f);
     glPushMatrix();
 glTranslatef(1.0f, 17.5f, 0.0f);
glScalef(3.0f, 2.2f, 1.0f);
  ball1(0.7957, 3.4697, 3.28447, 1.0, 1.0, 1.0);////////////for SUn
   glPopMatrix();
glPopMatrix();
    // Draw some stars
    glColor3f(1.0f, 1.0f, 1.0f); // White for stars
    glBegin(GL_POINTS);

    // Specific star coordinates
    glVertex2f(27.0f, 62.0f);
    glVertex2f(51.0f, 50.0f);
    glVertex2f(35.0f, 36.0f);
    glVertex2f(65.0f, 68.0f);
    glVertex2f(13.0f, 43.0f);
    glVertex2f(27.0f, 68.0f);
    glVertex2f(47.0f, 57.0f);
    glVertex2f(31.0f, 51.0f);
    glVertex2f(59.0f, 62.0f);
    glVertex2f(19.0f, 50.0f);
    glVertex2f(39.5f, 15.0f);
    glVertex2f(71.0f, 43.0f);
    glVertex2f(39.0f, 57.0f);
    glVertex2f(53.0f, 51.0f);
    glVertex2f(22.0f, 62.0f);

    // Additional stars
    glVertex2f(10.0f, 70.0f);
    glVertex2f(80.0f, 60.0f);
    glVertex2f(30.0f, 80.0f);
    glVertex2f(75.0f, 30.0f);
    glVertex2f(55.0f, 20.0f);

    glEnd();

}


void renderDayScene() {
     glClearColor(0.53f, 0.81f, 0.92f, 1.0f);


    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(0.0f, SkyPosition1, 0.0f);
     glPushMatrix();
 glTranslatef(1.0f, 17.5f, 0.0f);
glScalef(3.0f, 2.2f, 1.0f);
  ball1(0.7957, 3.4697, 3.28447, 1.0, 0.8745, 0);
   glPopMatrix();
glPopMatrix();


}


void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
        case 'D': // Toggle to day scene
            isDay = true;
            glutPostRedisplay();
            break;
        case 'N': // Toggle to night scene
            isDay = false;
            glutPostRedisplay();
            break;
                 case 'b':
            carSpeed1 = 0.0f;
            SkySpeed1=0.0f;
           // trainSpeed=0.0f;
           // Speed=0.0f;
            break;

        case 'x':
            carSpeed1 = 2.0f;
            SkySpeed1=2.0f;
           // trainSpeed=2.0f;
           // Speed=2.0f;
            break;
        case 'q':
            carSpeed1 = 0.5f;
            SkySpeed1 = 0.1f;
            //Speed = 0.5f;
            //trainSpeed=0.5f;
            break;

        default:
            break;
    }
}

void display()
{
 if (isDay) {
        renderDayScene(); // Render the day scene
    } else {
        renderNightScene(); // Render the night scene
    }

    River();


  glPushMatrix();
    glTranslatef(SkyPosition1, 0.0f, 0.0f);
    glPushMatrix();
glTranslatef(-11.9f, 4.5f, 0.0f);
glScalef(2.0f, 1.7f, 1.0f);
Sky1();
glPopMatrix();

    glPushMatrix();
glTranslatef(9.9f, 9.5f, 0.0f);
glScalef(2.0f, 1.7f, 1.0f);
Sky1();
glPopMatrix();
glPopMatrix();
    Hill();
    hill2();
    ground1();
    ground();
    House22();
    ///////////////////bOAT


    boat_Half1();
    Boat();


  Boat_half2();
   boat2();
  //glPopMatrix();

/////////SKY

  glPushMatrix();
    glTranslatef(SkyPosition1, 0.0f, 0.0f);
glPushMatrix();
glTranslatef(-20.9f, 8.0f, 0.0f);
glScalef(2.0f, 1.7f, 1.0f);
Sky1();
glPopMatrix();
glPopMatrix();




////////////////////////////////tree
    glPushMatrix();
   // glTranslatef(-12.0f, 1.0f, 0.0f);
   glTranslatef(-1.2f,-3.2f, 0.0f);
   glScalef(0.10f, 0.25f, 1.0f);
   tree1();

  ball1(15.34,100+ leafOffset1,80,0,0.392,0);
   ball1(15.04834,131.384+leafOffset1,79.6483,0,0.392,0);
  ball1(15.04834,118.5107+leafOffset1,70.33039,0,0.392,0);
  ball1(15.04834,118.5107+leafOffset1,85.33039,0,0.392,0);


   glPopMatrix();
/*
glPushMatrix();
 glTranslatef(-15.9f, -9.5f, 0.0f);
//glScalef(2.0f, 1.7f, 1.0f);
  ball(0.7957, 3.4697, 3.28447, 1.0, 0.8745, 0);////////////for SUn
   glPopMatrix();
*/

   glPushMatrix();
   glTranslatef(-17.9f, -9.5f, 0.0f);
   glScalef(1.5f, 1.7f, 1.0f);

    BAnaa_Tree3();
    BNANA_TREE3();
    BAnaa_Tree();
glPopMatrix();
   glPushMatrix();
   glTranslatef(-15.9f, -9.5f, 0.0f);
   glScalef(1.5f, 1.7f, 1.0f);


   // BAnaa_Tree1();
    hay();
    hay_1();
    hay_1_borader();
    House1_a_body();
    House1_a_body1();
    House_a_roof();
    House_a_roof1();
    House1_a();
    House1_a_Door();
    House1_a_windows1();
    House1_a_floor();
    House1_a_floorBoerder();
    House1_a_floorBoerder2();
        DrawLine1();
    glPopMatrix();

 glPushMatrix();
   glTranslatef(-17.9f, -9.5f, 0.0f);
   glScalef(1.5f, 1.7f, 1.0f);
    BANANA_TREE();
   BAnaa_Tree2();

    glPopMatrix();



    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowPosition(5, 200);
    glutInitWindowSize(320, 320);

    glutCreateWindow("Shraboni Biswas Naboni-26");

    glutDisplayFunc(display);

 gluOrtho2D(-10, 30, -10, 30);
    glutTimerFunc(20, update11, 0);
    glutTimerFunc(16, Sunupdate1, 0);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(0, timer1, 0);


    glutMainLoop();

    return 0;

}



