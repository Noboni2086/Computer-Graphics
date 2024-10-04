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


 glBegin(GL_POLYGON);
    glColor3ub(225, 225, 225);
    glVertex2f(1.1940952636063,-0.8477614634604); //I4
    glVertex2f(1.1277234600456,-0.9955895713909); // J4
    glVertex2f(0.9648108513058,-0.9955895713909); // K4
    glVertex2f(1.0779446073751,-1.0876050263273); // L4
        glVertex2f(1.0372164551902,-1.291245787252);//M4
                glVertex2f(1.1850445631207,-1.1871627316682);//N4

    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(225, 225, 225);
 glVertex2f(1.1850445631207,-1.1871627316682);//N4    glVertex2f(1.1277234600456,-0.9955895713909); // J4
 glVertex2f(1.3404149214559,-1.289737337171); // o4
glVertex2f(1.3,-1.1); // L4
glVertex2f(1.4399726267968,-1.0197247726857);//M4
glVertex2f(1.2499079166004,-0.9925726712291);//M4
glVertex2f(1.1940952636063,-0.8477614634604);


    glEnd();






glBegin(GL_POLYGON);
    glColor3ub(225, 225, 225);
    glVertex2f(2.1654366472627,-0.8169162534089); //I4
    glVertex2f(2.0695965756422,-0.9807718597279); // J4
    glVertex2f(1.8794622400079,-0.9807718597279); // K4
    glVertex2f(2.0309513854726,-1.1106196986976); // L4
        glVertex2f(1.9582984279538,-1.2914791886911);//M4
                glVertex2f(2.1376121103406,-1.2219178463859);//N4


  glEnd();
glBegin(GL_POLYGON);
    glColor3ub(225, 225, 225);
    glVertex2f(2.1654366472627,-0.8169162534089); //I4
    glVertex2f(2.2179941058933,-0.9946841281889); // J4
    glVertex2f(2.4313154297448,-1.0187010936495); // K4
    glVertex2f(2.2674599493103,-1.129169389979); // L4
        glVertex2f(2.2952844862324,-1.342490839715);//M4
                glVertex2f(2.1376121103406,-1.2219178463859);//N4


  glEnd();




glBegin(GL_POLYGON);
    glColor3ub(225, 225, 225);
    glVertex2f(1.7032957382742,-1.4290449993901); //I4
    glVertex2f(1.6254999706995,-1.6004387998281); // J4
    glVertex2f(1.4261483162894,-1.6028699175648); // K4
    glVertex2f(1.5647220272818,-1.7134857745851); // L4
        glVertex2f(1.5282552612312,-1.9128374289953);//M4
                glVertex2f(1.6668289722236,-1.785203747818);//N4


  glEnd();
glBegin(GL_POLYGON);
    glColor3ub(225, 225, 225);
    glVertex2f(1.7032957382742,-1.4290449993901); //I4
    glVertex2f(1.767720358297,-1.5955765643547); // J4
    glVertex2f(1.9609942183654,-1.6113788296433); // K4
    glVertex2f(1.7896004179274,-1.7171324511902); // L4
        glVertex2f(1.801756006611,-1.9176996644687);//M4
                glVertex2f(1.6668289722236,-1.785203747818);//N4


  glEnd();



glBegin(GL_POLYGON);
    glColor3ub(225, 225, 225);
    glVertex2f(1.2112207179509,-2.0456557189697); //I4
    glVertex2f(1.124866705133,-2.2130496515091); // J4
    glVertex2f(0.9455160631265,-2.2210207911538);
    glVertex2f(1.0531264483304,-2.3047177574235); // K4

        glVertex2f(1,-2.5);//M4
                glVertex2f(1.1726935430013,-2.385757677145);//N4


  glEnd();


  glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
    glVertex2f(1.2112207179509,-2.0456557189697); //I4
    glVertex2f(1.2590475558193,-2.2183637446056); // J4
    glVertex2f(1.4583260469376,-2.2542338730069);
    glVertex2f(1.2842894980276,-2.3366023160024); // K4

        glVertex2f(1.3,-2.5);//M4
                glVertex2f(1.1726935430013,-2.385757677145);//N4


  glEnd();


glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
  glVertex2f(3.1355077739732,-0.8436347325283);
  glVertex2f(3.0563052734464,-1.0034232887302);
  glVertex2f(2.883466457147,-0.9981323045578);
  glVertex2f(3.0130955693716,-1.1171794484375);
  glVertex2f(2.9513666510201,-1.2996364411484);
  glVertex2f(3.1197970835156,-1.196544211024);
glEnd();
glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
  glVertex2f(3.1355077739732,-0.8436347325283);
  glVertex2f(3.2,-1);
  glVertex2f(3.4,-1);
  glVertex2f(3.2278799700847,-1.12562874787);
  glVertex2f(3.2548139475999,-1.3303332995335);
  glVertex2f(3.1197970835156,-1.196544211024);
glEnd();


glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
  glVertex2f(2.6529865882805,-1.4477329332465);
  glVertex2f(2.5764820372887,-1.6024421363633);
  glVertex2f(2.3605691933784,-1.6126427431622);
  glVertex2f(2.4946010204999,-1.6917996193411);
  glVertex2f(2.4489744523023,-1.8880591267328);
  glVertex2f(2.6155843633512,-1.7945535644095);
glEnd();


glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
  glVertex2f(2.6529865882805,-1.4477329332465);
  glVertex2f(2.7090899256745,-1.6126427431622);
  glVertex2f(2.9182023650522,-1.6177430465617);
  glVertex2f(2.7651932630686,-1.7129487100182);
  glVertex2f(2.7634931619354,-1.9271614527953);
  glVertex2f(2.6155843633512,-1.7945535644095);
glEnd();

glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);

glVertex2f(2.1613879056263,-2.0351372847064);
glVertex2f(2.0503708254532,-2.2209209698939);
glVertex2f(1.8623214855683,-2.2254522792887);
glVertex2f(2.0027920768076,-2.3342037047643);
glVertex2f(1.9506820187672,-2.5335813181363);
glVertex2f(2.1138091569807,-2.4316268567529);
glEnd();


glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);

glVertex2f(2.1613879056263,-2.0351372847064);
glVertex2f(2.2406858200356,-2.2209209698939);
glVertex2f(2.4196725411309,-2.2322492433809);
glVertex2f(2.2565454029174,-2.3274067406721);
glVertex2f(2.2769362951941,-2.5449095916234);
glVertex2f(2.1138091569807,-2.4316268567529);
glEnd();
glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);

glVertex2f(1.7100480142479,-2.6343396619266);

glVertex2f(1.6,-2.8);
glVertex2f(1.4184280179924,-2.8430218610819);
glVertex2f(1.557549484096,-2.9473629606596);
glVertex2f(1.506716640712,-3.1506943341956);
glVertex2f(1.6993463630092,-3.0276253449501);
glEnd();
glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
glVertex2f(1.7100480142479,-2.6343396619266);

glVertex2f(1.8,-2.8);
glVertex2f(1.4184280179924,-2.8430218610819);
glVertex2f(1.9909663592647,-2.8296447970335);
glVertex2f(1.8304415906837,-2.9420121350402);
glVertex2f(1.8224153522546,-3.1480189213859);
glVertex2f(1.6993463630092,-3.0276253449501);
glEnd();

glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
glVertex2f(1.2310572963013,-3.2338814089441);
glVertex2f(1.1360050562368,-3.4239858890731);
glVertex2f(0.943690058897,-3.4328279579163);
glVertex2f(1.0763210915451,-3.5588274389321);
glVertex2f(1.0166371268534,-3.7290372641639);
glVertex2f(1.189057469296,-3.6361955413102);
glEnd();
glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
glVertex2f(1.2310572963013,-3.2338814089441);
glVertex2f(1.2774781577281,-3.4129333030191);
glVertex2f(1.4675826378571,-3.4659857160784);
glVertex2f(1.2951622954145,-3.5521958872997);
glVertex2f(1.3548462601062,-3.7179846781098);
glVertex2f(1.189057469296,-3.6361955413102);
glEnd();
glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
glVertex2f(3.576416920591,-1.4164275328994);
glVertex2f(3.5154759506605,-1.5907093550891);
glVertex2f(3.3043936036694,-1.6078241399803);
glVertex2f(3.4770040243982,-1.7024576201908);
glVertex2f(3.36144288664,-1.8930705548331);
glVertex2f(3.566820305334,-1.778971988892);
glEnd();

glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
glVertex2f(3.576416920591,-1.4164275328994);
glVertex2f(3.6860963797511,-1.5903350718705);
glVertex2f(3.8269786376825,-1.6011721686345);
glVertex2f(3.7124556206444,-1.7373393381532);
glVertex2f(3.7322632259486,-1.9273001246154);
glVertex2f(3.566820305334,-1.778971988892);
glEnd();
glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
glVertex2f(3.1089821044806,-2.0584063144305);
glVertex2f(3.0557408074808,-2.1956218222074);
glVertex2f(2.8604353873053,-2.2126766906083);
glVertex2f(3.0089920458468,-2.2983824551515);
glVertex2f(2.9174418837928,-2.4899503008253);
glVertex2f(3.1004115280263,-2.4240842431482);
glEnd();
glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);

glVertex2f(3.1089821044806,-2.0584063144305);
glVertex2f(3.1718329984789,-2.1955355376996);
glVertex2f(3.3575288216559,-2.2469589964255);
glVertex2f(3.2032584454781,-2.3326647609688);
glVertex2f(3.2460495828122,-2.5088629741502);
glVertex2f(3.1004115280263,-2.4240842431482);
glEnd();
glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
glVertex2f(2.6510988377487,-2.6695383227535);
glVertex2f(2.571744117424,-2.8197454719395);
glVertex2f(2.3846937052302,-2.848086443484);
glVertex2f(2.515062174335,-2.904768386573);
glVertex2f(2.4640484255548,-3.0918187987669);
glVertex2f(2.6312601576675,-3.0152981755967);
glEnd();

glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
glVertex2f(2.6510988377487,-2.6695383227535);
glVertex2f(2.7106148779922,-2.8367500548662);
glVertex2f(2.8863289015683,-2.8622569292563);
glVertex2f(2.7672968210813,-2.9642844268166);
glVertex2f(2.7332876552278,-3.1456666447015);
glVertex2f(2.7332876552278,-3.1456666447015);
glVertex2f(2.6312601576675,-3.0152981755967);

glEnd();
glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);

glVertex2f(2.17288011876,-3.2834740727967);
glVertex2f(2.064440726777,-3.4432468459191);
glVertex2f(1.857551634502,-3.4432468459191);
glVertex2f(2.0020905893791,-3.567947120715);
glVertex2f(1.94540864629,-3.7549975329088);
glVertex2f(2.1409613499472,-3.6614723268119);
glEnd();
glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);

glVertex2f(2.17288011876,-3.2834740727967);
glVertex2f(2.2231501674264,-3.448915040228);
glVertex2f(2.4187028710836,-3.4659196231547);

glVertex2f(2.2911684991332,-3.5707812178694);
glVertex2f(2.3010654574145,-3.7491269356637);
glVertex2f(2.1409613499472,-3.6614723268119);
glEnd();

glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);

glVertex2f(3.5934281694324,-2.6735360630713);
glVertex2f(3.5151460630601,-2.8252076441676);
glVertex2f(3.3463502711948,-2.8398855391124);
glVertex2f(3.4686660624015,-2.9303992246054);
glVertex2f(3.4124007984464,-3.1285508063603);
glVertex2f(3.5640723795427,-3.0453760683397);
glEnd();

glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);

glVertex2f(3.5934281694324,-2.6735360630713);
glVertex2f(3.6668176441564,-2.8105297492228);
glVertex2f(3.8380597518458,-2.8349929074642);
glVertex2f(3.7255292239356,-2.9573086986709);
glVertex2f(3.7255292239356,-3.1627992278982);
glVertex2f(3.5640723795427,-3.0453760683397);
glEnd();

glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);
glVertex2f(3.1115039520779,-3.2728834399842);
glVertex2f(3.0527923722987,-3.4343402843771);
glVertex2f(2.8693186854886,-3.4367866002012);
glVertex2f(2.9940807925194,-3.5321929173425);
glVertex2f(2.9647250026298,-3.7278981832732);
glVertex2f(3.1052044638866,-3.6203858912251);
glEnd();

glBegin(GL_POLYGON);//Light blue
    glColor3ub(225, 225, 225);

    glVertex2f(3.1115039520779,-3.2728834399842);
glVertex2f(3.1897860584502,-3.4294476527288);
glVertex2f(3.3585818503155,-3.4270013369047);
glVertex2f(3.2436050065811,-3.5468708122873);
glVertex2f(3.2484976382294,-3.7205592358008);
glVertex2f(3.1052044638866,-3.6203858912251);
glEnd();

}



void half_star_problem()
{
glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(3.1115039520779,-3.2728834399842);
glVertex2f(3.0527923722987,-3.4343402843771);
glVertex2f(2.8693186854886,-3.4367866002012);
glEnd();

    glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);

glVertex2f(3.1115039520779,-3.2728834399842);
glVertex2f(3.1897860584502,-3.4294476527288);
glVertex2f(3.3585818503155,-3.4270013369047);
glEnd();

glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);

glVertex2f(3.5934281694324,-2.6735360630713);
glVertex2f(3.5151460630601,-2.8252076441676);
glVertex2f(3.3463502711948,-2.8398855391124);
glEnd();

glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);

glVertex2f(3.5934281694324,-2.6735360630713);
glVertex2f(3.6668176441564,-2.8105297492228);
glVertex2f(3.8380597518458,-2.8349929074642);
glEnd();


    glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);

glVertex2f(2.17288011876,-3.2834740727967);
glVertex2f(2.064440726777,-3.4432468459191);
glVertex2f(1.857551634502,-3.4432468459191);
glEnd();
glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);

glVertex2f(2.17288011876,-3.2834740727967);
glVertex2f(2.2231501674264,-3.448915040228);
glVertex2f(2.4187028710836,-3.4659196231547);
glEnd();

glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(2.6510988377487,-2.6695383227535);
glVertex2f(2.7106148779922,-2.8367500548662);
glVertex2f(2.8863289015683,-2.8622569292563);
glEnd();

    glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(2.6510988377487,-2.6695383227535);
glVertex2f(2.571744117424,-2.8197454719395);
glVertex2f(2.3846937052302,-2.848086443484);
glEnd();

glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(3.1089821044806,-2.0584063144305);
glVertex2f(3.1718329984789,-2.1955355376996);
glVertex2f(3.3575288216559,-2.2469589964255);
glEnd();

 glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(3.576416920591,-1.4164275328994);
glVertex2f(3.5154759506605,-1.5907093550891);
glVertex2f(3.3043936036694,-1.6078241399803);
glEnd();
glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(3.1089821044806,-2.0584063144305);
glVertex2f(3.0557408074808,-2.1956218222074);
glVertex2f(2.8604353873053,-2.2126766906083);
glEnd();
glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(3.576416920591,-1.4164275328994);
glVertex2f(3.6860963797511,-1.5903350718705);
glVertex2f(3.8269786376825,-1.6011721686345);
glEnd();

glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(1.2310572963013,-3.2338814089441);
glVertex2f(1.1360050562368,-3.4239858890731);
glVertex2f(0.943690058897,-3.4328279579163);
glEnd();
glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(1.2310572963013,-3.2338814089441);
glVertex2f(1.2774781577281,-3.4129333030191);
glVertex2f(1.4675826378571,-3.4659857160784);
glEnd();
glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(1.7100480142479,-2.6343396619266);
glVertex2f(1.6,-2.8);
glVertex2f(1.4184280179924,-2.8430218610819);
glEnd();


glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(2.1613879056263,-2.0351372847064);
glVertex2f(2.0503708254532,-2.2209209698939);
glVertex2f(1.8623214855683,-2.2254522792887);
glEnd();

    glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);

glVertex2f(2.1613879056263,-2.0351372847064);
glVertex2f(2.2406858200356,-2.2209209698939);
glVertex2f(2.4196725411309,-2.2322492433809);
glEnd();

    glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
  glVertex2f(2.6529865882805,-1.4477329332465);
  glVertex2f(2.7090899256745,-1.6126427431622);
  glVertex2f(2.9182023650522,-1.6177430465617);
   glEnd();


glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
  glVertex2f(2.6529865882805,-1.4477329332465);
  glVertex2f(2.5764820372887,-1.6024421363633);
  glVertex2f(2.3605691933784,-1.6126427431622);
   glEnd();

    glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
  glVertex2f(3.1355077739732,-0.8436347325283);
  glVertex2f(3.2,-1);
  glVertex2f(3.4,-1);
   glEnd();


glBegin(GL_POLYGON);//Deep blue
glColor3ub(0, 0, 255);
 glVertex2f(2.1654366472627,-0.8169162534089);//N4
 glVertex2f(2.0825038492255,-0.9672388211276); // o4
glVertex2f(1.8794622400079,-0.9807718597279);

  glEnd();

  glBegin(GL_POLYGON);//Deep blue
glColor3ub(0, 0, 255);
 glVertex2f(2.1654366472627,-0.8169162534089);//N4
 glVertex2f(2.2179941058933,-0.9946841281889); // o4
glVertex2f(2.4313154297448,-1.0187010936495);

  glEnd();


    glBegin(GL_POLYGON);//Deep blue
glColor3ub(0, 0, 255);
 glVertex2f(1.1940952636063,-0.8477614634604);//N4
 glVertex2f(1.1317361018572,-0.9924701349374); // o4
glVertex2f(0.9648108513058,-0.9955895713909);

  glEnd();

    glBegin(GL_POLYGON);//Deep blue
glColor3ub(0, 0, 255);
 glVertex2f(1.7032957382742,-1.4290449993901); //I4
    glVertex2f(1.6254999706995,-1.6004387998281); // J4
    glVertex2f(1.4261483162894,-1.6028699175648); // K4
  glEnd();


    glBegin(GL_POLYGON);//Deep blue
glColor3ub(0, 0, 255);
  glVertex2f(1.7032957382742,-1.4290449993901); //I4
    glVertex2f(1.767720358297,-1.5955765643547); // J4
    glVertex2f(1.9609942183654,-1.6113788296433); // K4
  glEnd();


   glBegin(GL_POLYGON);//Light blue
   glColor3ub(0, 0, 255);
    glVertex2f(1.2112207179509,-2.0456557189697); //I4
    glVertex2f(1.2590475558193,-2.2183637446056); // J4
    glVertex2f(1.4583260469376,-2.2542338730069);
  glEnd();

  glBegin(GL_POLYGON);//Light blue
   glColor3ub(0, 0, 255);
    glVertex2f(1.2112207179509,-2.0456557189697); //I4
    glVertex2f(1.124866705133,-2.2130496515091); // J4
glVertex2f(0.9455160631265,-2.2210207911538);
  glEnd();

glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(1.7100480142479,-2.6343396619266);

glVertex2f(1.8,-2.8);
glVertex2f(1.9909663592647,-2.8296447970335);
glEnd();

  glBegin(GL_POLYGON);//Light blue
     glColor3ub(0, 0, 255);
  glVertex2f(3.1355077739732,-0.8436347325283);
  glVertex2f(3.0563052734464,-1.0034232887302);
  glVertex2f(2.883466457147,-0.9981323045578);
  glEnd();

  glBegin(GL_POLYGON);//Light blue
glColor3ub(0, 0, 255);
glVertex2f(1.7100480142479,-2.6343396619266);

glVertex2f(1.6,-2.8);
glVertex2f(1.4184280179924,-2.8430218610819);

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


    glColor3ub(0, 0, 0);

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


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    drawPolygons();
    circle(1.875, -6, 3, 255, 0, 0);
    circleWithBorder(0.361894, 5.809308, 2.9660594988, 255, 255, 0, 0.05, 255, 165, 0);
    half_star_problem();
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
