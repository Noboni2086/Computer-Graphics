#include <windows.h>
#include <GL/glut.h>

void drawBoard1(){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.0, 0.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(1.0, 1.0);
    glVertex2f(0.0, 1.0);
    glEnd();
}

void drawBoard2(){
    glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);
    glVertex2f(1.0, 0.0);
    glVertex2f(2.0, 0.0);
    glVertex2f(2.0, 1.0);
    glVertex2f(1.0, 1.0);
    glEnd();
}

void drawBoard3(){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(1.0, 1.0);
    glVertex2f(2.0, 1.0);
    glVertex2f(2.0, 2.0);
    glVertex2f(1.0, 2.0);
    glEnd();
}

void drawBoard4(){
    glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);
    glVertex2f(0.0, 1.0);
    glVertex2f(1.0, 1.0);
    glVertex2f(1.0, 2.0);
    glVertex2f(0.0, 2.0);
    glEnd();
}

void drawBoard5(){
    glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);
    glVertex2f(0.0, 0.0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, 1.0);
    glVertex2f(0.0, 1.0);
    glEnd();
}

void drawBoard6(){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-1.0, 1.0);
    glVertex2f(0.0, 1.0);
    glVertex2f(0.0, 2.0);
    glVertex2f(-1.0, 2.0);
    glEnd();
}

void drawBoard7(){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-2.0, 0.0);
    glVertex2f(-2.0, 1.0);
    glVertex2f(-1.0, 1.0);
    glEnd();
}

void drawBoard8(){
    glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);
    glVertex2f(-1.0, 1.0);
    glVertex2f(-2.0, 1.0);
    glVertex2f(-2.0, 2.0);
    glVertex2f(-1.0, 2.0);
    glEnd();
}

void drawBoard9(){
    glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, 0.0);
    glEnd();
}

void drawBoard10(){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(2.0, -1.0);
    glVertex2f(2.0, 0.0);
    glEnd();
}

void drawBoard11(){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.0, -1.0);
    glVertex2f(0.0, -2.0);
    glVertex2f(1.0, -2.0);
    glVertex2f(1.0, -1.0);
    glEnd();
}

void drawBoard12(){
    glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);
    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, -2.0);
    glVertex2f(2.0, -2.0);
    glVertex2f(2.0, -1.0);
    glEnd();
}

void drawBoard13(){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.0, 0.0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -1.0);
    glVertex2f(0.0, -1.0);
    glEnd();
}

void drawBoard14(){
    glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -1.0);
    glVertex2f(-2.0, -1.0);
    glVertex2f(-2.0, 0.0);
    glEnd();
}

void drawBoard15(){
    glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);
    glVertex2f(0.0, -1.0);
    glVertex2f(0.0, -2.0);
    glVertex2f(-1.0, -2.0);
    glVertex2f(-1.0, -1.0);
    glEnd();
}

void drawBoard16(){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-1.0, -1.0);
    glVertex2f(-1.0, -2.0);
    glVertex2f(-2.0, -2.0);
    glVertex2f(-2.0, -1.0);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawBoard1();
    drawBoard2();
    drawBoard3();
    drawBoard4();
    drawBoard5();
    drawBoard6();
    drawBoard7();
    drawBoard8();
    drawBoard9();
    drawBoard10();
    drawBoard11();
    drawBoard12();
    drawBoard13();
    drawBoard14();
    drawBoard15();
    drawBoard16();

    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600); // Set window size to 600x600 pixels
    glutCreateWindow("SHraboiBisaws NAboni -26"); // Set window title

    glClearColor(1.0, 1.0, 1.0, 1.0); // Set background color to white

    gluOrtho2D(-4.0, 4.0, -4.0, 4.0); // Set the orthographic viewing area

    glutDisplayFunc(display); // Register the display callback function
    glutMainLoop(); // Enter the GLUT event processing loop

    return 0;
}
