#include <GL/gl.h>

#include <GL/glu.h>

#include <GL/glut.h>

#include <stdlib.h>

#include <windows.h>
#include <math.h>

void Idle();
void display();
void reshape(int w,int h);
void timer(int);
void Circle(float x1,float y1, double r);

void init(){
    glClearColor(0,149,235,1);
}

float step=0;


void Idle(){
    glutPostRedisplay();
}
void Circle(float x1,float y1,double r){
  float x2;
  float y2;
  float angle;
  glBegin(GL_TRIANGLE_FAN);
  glVertex2f(x1,y1);
  for(angle=1.0f;angle<361.0f;angle=angle+0.2){
    x2=x1+sin(angle)*r;
    y2=y1+cos(angle)*r;
    glVertex2f(x2,y2);

  }glEnd();
  }

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    //green land at down//
    glColor3ub(2,130,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(0,400);
    glVertex2f(800,400);
    glVertex2f(800,0);
    glEnd();

    //sidewalk (bottom)//
    glColor3f(0,0,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,400);
    glVertex2f(0,500);
    glVertex2f(800,500);
    glVertex2f(800,400);
    glEnd();

    //sidewalk (top)//
    glColor3f(0,0,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,1050);
    glVertex2f(0,1100);
    glVertex2f(800,1100);
    glVertex2f(800,1050);
    glEnd();

    //lines on the sidewalk//
    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,400);
    glVertex2f(0,500);
    glVertex2f(100,500);
    glVertex2f(100,400);
    glEnd();

    //lines on the sidewalk//
    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(200,400);
    glVertex2f(200,500);
    glVertex2f(300,500);
    glVertex2f(300,400);
    glEnd();

    //lines on the sidewalk//
    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(400,400);
    glVertex2f(400,500);
    glVertex2f(500,500);
    glVertex2f(500,400);
    glEnd();

    //lines on the sidewalk//
    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(600,400);
    glVertex2f(600,500);
    glVertex2f(700,500);
    glVertex2f(700,400);
    glEnd();

    //lines on the sidewalk(top)//
    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,1050);
    glVertex2f(100,1100);
    glVertex2f(200,1100);
    glVertex2f(200,1050);
    glEnd();

    //lines on the sidewalk(top)//
    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(300,1050);
    glVertex2f(300,1100);
    glVertex2f(400,1100);
    glVertex2f(400,1050);
    glEnd();

    //lines on the sidewalk(top)//
    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(500,1050);
    glVertex2f(500,1100);
    glVertex2f(600,1100);
    glVertex2f(600,1050);
    glEnd();

    //lines on the sidewalk(top)//
    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(700,1050);
    glVertex2f(700,1100);
    glVertex2f(800,1100);
    glVertex2f(800,1050);
    glEnd();

    //the road//
    glColor3b(40,40,40);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,500);
    glVertex2f(0,1050);
    glVertex2f(800,1050);
    glVertex2f(800,500);
    glEnd();

    //the strips on the road//
    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_LINES);
    glVertex2f(100,800);
    glVertex2f(200,800);
    glEnd();

    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_LINES);
    glVertex2f(300,800);
    glVertex2f(400,800);
    glEnd();

    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_LINES);
    glVertex2f(500,800);
    glVertex2f(600,800);
    glEnd();

    glColor3f(255,255,0);
    glLineWidth(10.0);
    glBegin(GL_LINES);
    glVertex2f(700,800);
    glVertex2f(800,800);
    glEnd();

    //The wood of trees at Bottom green land//
    glColor3ub(134,84,0);
    glLineWidth(20.0);
    glBegin(GL_LINES);
    glVertex2f(50,50);
    glVertex2f(50,225);
    glVertex2f(150,50);
    glVertex2f(150,225);
    glVertex2f(250,50);
    glVertex2f(250,225);
    glVertex2f(350,50);
    glVertex2f(350,225);
    glVertex2f(450,50);
    glVertex2f(450,225);
    glVertex2f(550,50);
    glVertex2f(550,225);
    glVertex2f(650,50);
    glVertex2f(650,225);
    glVertex2f(750,50);
    glVertex2f(750,225);
    glEnd();

    //green papers of bottom trees//
    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(25,225);
    glVertex2f(50,400);
    glVertex2f(75,225);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(125,225);
    glVertex2f(150,400);
    glVertex2f(175,225);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(225,225);
    glVertex2f(250,400);
    glVertex2f(275,225);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(325,225);
    glVertex2f(350,400);
    glVertex2f(375,225);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(425,225);
    glVertex2f(450,400);
    glVertex2f(475,225);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(525,225);
    glVertex2f(550,400);
    glVertex2f(575,225);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(625,225);
    glVertex2f(650,400);
    glVertex2f(675,225);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(725,225);
    glVertex2f(750,400);
    glVertex2f(775,225);
    glEnd();

    //The wood of trees at Top //
    glColor3ub(134,84,0);
    glLineWidth(20.0);
    glBegin(GL_LINES);
    glVertex2f(50,1100);
    glVertex2f(50,1275);
    glVertex2f(150,1100);
    glVertex2f(150,1275);
    glVertex2f(250,1100);
    glVertex2f(250,1275);
    glVertex2f(350,1100);
    glVertex2f(350,1275);
    glVertex2f(450,1100);
    glVertex2f(450,1275);
    glVertex2f(550,1100);
    glVertex2f(550,1275);
    glVertex2f(650,1100);
    glVertex2f(650,1275);
    glVertex2f(750,1100);
    glVertex2f(750,1275);
    glEnd();

    //green papers of top trees//
    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(25,1275);
    glVertex2f(50,1450);
    glVertex2f(75,1275);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(125,1275);
    glVertex2f(150,1450);
    glVertex2f(175,1275);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(225,1275);
    glVertex2f(250,1450);
    glVertex2f(275,1275);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(325,1275);
    glVertex2f(350,1450);
    glVertex2f(375,1275);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(425,1275);
    glVertex2f(450,1450);
    glVertex2f(475,1275);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(525,1275);
    glVertex2f(550,1450);
    glVertex2f(575,1275);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(625,1275);
    glVertex2f(650,1450);
    glVertex2f(675,1275);
    glEnd();

    glColor3f(0,255,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(725,1275);
    glVertex2f(750,1450);
    glVertex2f(775,1275);
    glEnd();
    //Car//
    glColor3ub(138,18,0);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(50+step,950);
    glVertex2f(50+step,1100);
    glVertex2f(100+step,1100);
    glVertex2f(150+step,1250);
    glVertex2f(250+step,1250);
    glVertex2f(300+step,1100);
    glVertex2f(350+step,1100);
    glVertex2f(350+step,950);
    glEnd();
    //car's back wheal//
    glPushMatrix();
    glColor3f(0,0,0);
    Circle(100.0+step,950.0,35);
    glPopMatrix();

    //car's front wheal//
    glPushMatrix();
    glColor3f(0,0,0);
    Circle(300.0+step,950.0,35);
    glPopMatrix();


    //car's window//
    glColor3ub(198,255,255);
    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glVertex2f(110+step,1100);
    glVertex2f(150+step,1225);
    glVertex2f(250+step,1225);
    glVertex2f(290+step,1100);
    glEnd();


    //windMill//
    glColor3ub(130,130,130);
    glLineWidth(20.0);
    glBegin(GL_LINES);
    glVertex2f(100,1100);
    glVertex2f(100,1400);
    glVertex2f(75,1100);
    glVertex2f(125,1100);
    glEnd();

    //1//
    glColor3ub(130,130,130);
    glLineWidth(20.0);
    glBegin(GL_LINES);
    glVertex2f(100.0,1400.0);
    glVertex2f(150.0,1500.0);
    glEnd();
    //2//
    glColor3ub(130,130,130);
    glLineWidth(20.0);
    glBegin(GL_LINES);
    glVertex2f(100.0,1400.0);
    glVertex2f(150.0,1300.0);
    glEnd();

    //3//
    glColor3ub(130,130,130);
    glLineWidth(20.0);
    glBegin(GL_LINES);
    glVertex2f(100.0,1400.0);
    glVertex2f(50.0,1300.0);
    glEnd();
    //4//
    glColor3ub(130,130,130);
    glLineWidth(20.0);
    glBegin(GL_LINES);
    glVertex2f(100.0,1400.0);
    glVertex2f(50.0,1500.0);
    glEnd();

    glFlush();


}

void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,800,0,1600);
    glMatrixMode(GL_MODELVIEW);
}
void timer(int){
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
    step=step+2;
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,0);
    glutInitWindowSize(1200,800);

    glutCreateWindow("20102642");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(Idle);
    glutTimerFunc(0,timer,0);
    init();

    glutMainLoop();
}

