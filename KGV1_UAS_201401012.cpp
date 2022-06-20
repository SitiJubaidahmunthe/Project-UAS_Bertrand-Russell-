#include<glut.h>//atau Include<gl/glut.h> yang mana untuk pemanggilan Glut.
#include <math.h>

const double PI = 3.142557143;
float i, sudut = 0, radius, radian, jumlah_titik, x_tengah, y_tengah, xp = 100, yp = 180, r = 35, n = 1000, o, x, y, ap = -270, bp = 120, z, p, q = 100;

int a = 0;
int b = 0;
int c = 0;
bool kanan = true;
bool kiri = true;
bool terbang = true;



void kota() {

    //langit
    glBegin(GL_QUADS);
    glColor3ub(135, 206, 250);
    glVertex2f(-10, 10);
    glVertex2f(10, 10);
    glColor3ub(125, 69, 0);
    glVertex2f(10, -6.2);
    glVertex2f(-10, -6.2);
    glEnd();


    //matahari

    glColor3ub(225, 0, 0);
    glBegin(GL_POLYGON);
    radian = 30;
    jumlah_titik = 100;
    x_tengah = -0;

    y_tengah = 50;

    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radian * cos(sudut);
        float y = y_tengah + radian * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    glColor3ub(0, 0, 255);

    glEnd();
    //bggedung
    glBegin(GL_POLYGON);
    glColor3ub(105, 105, 105);
    glVertex2f(-9.8, -6);
    glVertex2f(-9.8, 1);
    glVertex2f(-4, 1);
    glVertex2f(-4, -2);
    glVertex2f(3, -2);
    glVertex2f(2, 2);
    glVertex2f(8.2, 2);
    glVertex2f(8.2, -6);
    glEnd();

    //gunung
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 121, 35);
    glVertex2f(-11, -6);
    
    glVertex2f(-4, 1);
    
   
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(7.5, -6);
    glVertex2f(7.5, 0);
    glVertex2f(9, 0);
    glVertex2f(9, -2);
    glVertex2f(9.8, -2);
    glVertex2f(9.8, -6);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(7.7, -5.8);
    glVertex2f(7.7, -0.2);
    glVertex2f(8.8, -0.2);
    glVertex2f(8.8, -5.8);
    glEnd();

    //jalanan
    glLineWidth(20);
    glBegin(GL_LINES);
    glColor3ub(220, 220, 220);
    glVertex2f(9, -8);
    glVertex2f(8, -8);
    //garis putih
    glVertex2f(7, -8);
    glVertex2f(6, -8);

    glVertex2f(5, -8);
    glVertex2f(4, -8);

    glVertex2f(3, -8);
    glVertex2f(2, -8);

    glVertex2f(1, -8);
    glVertex2f(-1, -8);

    glVertex2f(-9, -8);
    glVertex2f(-8, -8);

    glVertex2f(-7, -8);
    glVertex2f(-6, -8);

    glVertex2f(-5, -8);
    glVertex2f(-4, -8);

    glVertex2f(-3, -8);
    glVertex2f(-2, -8);
    glEnd();
    glFlush();
}

void awankiri() {
    //awan1
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    radius = 12;
    jumlah_titik = 100;
    x_tengah = -50;
    y_tengah = 50;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    radius = 10;
    jumlah_titik = 100;
    x_tengah = -60;
    y_tengah = 50;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    radius = 10;
    jumlah_titik = 100;
    x_tengah = -40;
    y_tengah = 50;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    glEnd();
    //awan2
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    radius = 12;
    jumlah_titik = 100;
    x_tengah = -70;
    y_tengah = 80;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    radius = 10;
    jumlah_titik = 100;
    x_tengah = -80;
    y_tengah = 80;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    radius = 10;
    jumlah_titik = 100;
    x_tengah = -60;
    y_tengah = 80;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    glEnd();
}

void awankanan() {
    //awan1
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    radius = 12;
    jumlah_titik = 100;
    x_tengah = 70;
    y_tengah = 80;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    radius = 10;
    jumlah_titik = 100;
    x_tengah = 80;
    y_tengah = 80;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    radius = 10;
    jumlah_titik = 100;
    x_tengah = 60;
    y_tengah = 80;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    glEnd();
    //awan2
    glBegin(GL_POLYGON);
    radius = 12;
    jumlah_titik = 100;
    x_tengah = 50;
    y_tengah = 50;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    radius = 10;
    jumlah_titik = 100;
    x_tengah = 60;
    y_tengah = 50;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    radius = 10;
    jumlah_titik = 100;
    x_tengah = 40;
    y_tengah = 50;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut);
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x / 10, y / 10);
    }
    glEnd();
    glFlush();
}

void pesawat() {
    glBegin(GL_POLYGON);
    glColor3f(255, 0, 0);
    glVertex2f(-9, -7);
    glVertex2f(-6, -7);
    glVertex2f(-5.8, -7.3);
    glVertex2f(-5.5, -7.5);
    glVertex2f(-5.2, -7.9);
    glVertex2f(-9, -7.9);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0, 0, 255);
    glVertex2f(-7.6, -7.5);
    glVertex2f(-6.8, -7.5);
    glVertex2f(-7.7, -8.2);
    glVertex2f(-8.4, -8.2);

    glVertex2f(-9, -7);
    glVertex2f(-9, -6);
    glVertex2f(-8.5, -6);
    glVertex2f(-8.2, -7);
    glEnd();
    glFlush();
}


void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON) //klik kiri
        terbang = false;
    if (button == GLUT_RIGHT_BUTTON) //klik kanan
        terbang = true;
}



void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    glPopMatrix();

    kota();
    glTranslatef(0, 0, 0);
    glPopMatrix();

    glPushMatrix();


    glPopMatrix();

    glPushMatrix();
    glTranslatef(a, 0, 0);
    awankiri();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(b,0, 0);
    awankanan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(a, c, 0);
    pesawat();
    glPopMatrix();

}

void waktu(int t) {
    if (kiri) {
        a += 2;
    }
    else
    {
        a -= 2;
    }
    if (a > 20) {
        kiri = false;
    }
    else if (a<-20)
    {
        kiri = true;
    }
    if (kanan) 
    {
        b -= 1;
    }
    else
    {
        b += 1;
    }
    if (b<-20)
    {
        kanan = false;
    }
    else if (b>20)
    {
        kanan = true;
    }
    if (terbang)
    {
        c += 2;
    }
    else
    {
        c -= 2;
    } if (c>20)
    {
        terbang = false;
    }
    else if (c<-20)
    {
        terbang = true;
    }
    glutPostRedisplay();
    glutTimerFunc(350, waktu, 0);
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(650, 600);
    glutCreateWindow("UAS KGV");
    glutMouseFunc(mouse);
    glutDisplayFunc(renderScene);
    glutTimerFunc(1, waktu, 0);
    gluOrtho2D(-10, 10, -10, 10);
    glutMainLoop();
    return 0;
}
