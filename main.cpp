#include <cstdio>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846


GLfloat position = 0.0f;
GLfloat speed=0.01f;
float counter=0.0;
GLfloat positionRain = 1.00f;
GLfloat speedRain = 0.10f;
GLfloat position1=0.0f;
GLfloat speed1=0.01;
GLfloat position2=0.0f;
GLfloat speed2=0.05f;

void Idle()
{
    glutPostRedisplay();
}

void day_demo(int val);
void night_demo(int val);
void rain_demo(int val);

void updateRain(int value)
{

    if(positionRain <=-1.6f)
        positionRain = 0.9f;

    positionRain -= speedRain;

    glutPostRedisplay();


    glutTimerFunc(90, updateRain, 0);
}

void cloud1()
{

    int i;

	GLfloat x=.5f; GLfloat y=.90f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			        y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.87f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.87f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.84f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



}

void cloud2()
{

    int i;

	GLfloat x=-.5f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			        y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			        d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void Rain()
{

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0,0.9f);
    glVertex2f(0.0f,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.9,0.9f);
    glVertex2f(-0.9f,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8,0.9f);
    glVertex2f(-0.8,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.1,0.9f);
    glVertex2f(0.1f,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.2,0.9f);
    glVertex2f(0.2f,0.87f);
    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.3,0.9f);
    glVertex2f(0.3,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.4,0.9f);
    glVertex2f(0.4,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.5,0.9f);
    glVertex2f(0.5,0.87f);
    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.6,0.9f);
    glVertex2f(0.6,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.7,0.9f);
    glVertex2f(0.7,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8,0.9f);
    glVertex2f(0.8,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.9,0.9f);
    glVertex2f(0.9,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1,0.9f);
    glVertex2f(-0.1,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.2,0.9f);
    glVertex2f(-0.2,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.3,0.9f);
    glVertex2f(-0.3,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.4,0.9f);
    glVertex2f(-0.4,0.87f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.5,0.9f);
    glVertex2f(-0.5,0.87f);
    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.6,0.9f);
    glVertex2f(-0.6,0.87f);
    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.7,0.9f);
    glVertex2f(-0.7,0.87f);
    glEnd();
}

void update(int value)
{

    position+=speed;
    if(position>1.0)
    {
        position=-1.0f;
    }
    position1+=speed1;
    if(position1>1.0){
        position1=-1.0f;
    }
    position2+=speed2;
    if(position2>1.0){
        position2=-1.0f;
    }

    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}
void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}



void sound()
{

    PlaySound("Encore+Srotoshinni+Lofi+Remix.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void circledraw()
{
    int i;

    GLfloat x=0.90;
    GLfloat y=0.85;
    GLfloat radius =0.05;
    int triangleAmount = 20;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void circledraw2()
{
    int i;

    GLfloat x=0.90;
    GLfloat y=0.85;
    GLfloat radius =0.05;
    int triangleAmount = 20;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(11, 128, 26);
    glVertex2f(1.0,0);
    glVertex2f(-1.0,0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(152, 158, 154);
    glVertex2f(1.0,0);
    glVertex2f(-1.0,0);
    glVertex2f(-1.0,0.05);
    glVertex2f(1.0,0.05);
    glEnd();
    //Nodir par
    glBegin(GL_QUADS);
    glColor3ub(115, 159, 243);
    glVertex2f(1.0,0.05);
    glVertex2f(-1.0,0.05);
    glVertex2f(-1.0,0.30);
    glVertex2f(1.0,0.30);
    glEnd();
     //Nodi
    glBegin(GL_QUADS);
    glColor3ub(152, 158, 154);
    glVertex2f(1.0,0.30);
    glVertex2f(-1.0,0.30);
    glVertex2f(-1.0,0.35);
    glVertex2f(1.0,0.35);
    glEnd();
    //Nodir par
    glBegin(GL_QUADS);
    glColor3ub(0, 190, 255); //22, 62, 139 for Night
    glVertex2f(1.0,0.35);
    glVertex2f(-1.0,0.35);
    glVertex2f(-1.0,1);
    glVertex2f(1.0,1);
    glEnd();
    circledraw();
    glBegin(GL_LINES);
    glColor3ub(238,88,9);
    glVertex2f(0.955,0.87);
    glVertex2f(0.98,0.89);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(238,88,9);
    glVertex2f(0.955,0.81);
    glVertex2f(0.98,0.79);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(238,88,9);
    glVertex2f(0.820,0.79);
    glVertex2f(0.850,0.81);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(238,88,9);
    glVertex2f(0.815,0.89);
    glVertex2f(0.845,0.87);
    glEnd();
    glPushMatrix();
    glTranslatef(position1,0,0);
    cloud1();
    cloud2();
    glPopMatrix();
    //Hills
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(-1.0,0.35);
    glVertex2f(-0.5,0.35);
    glVertex2f(-0.75,0.9);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(-0.5,0.35);
    glVertex2f(0,0.35);
    glVertex2f(-0.25,0.9);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(0,0.35);
    glVertex2f(0.5,0.35);
    glVertex2f(0.25,0.9);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(0.5,0.35);
    glVertex2f(1,0.35);
    glVertex2f(0.75,0.9);
    glEnd();
    //Bird1
    glPushMatrix();
    glTranslatef(position2,0,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-0.73,0.75);
    glVertex2f(-0.72,0.75);
    glVertex2f(-0.725,0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.725,0.77);
    glVertex2f(-0.735,0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.725,0.77);
    glVertex2f(-0.715,0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.735,0.78);
    glVertex2f(-0.742,0.74);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.715,0.78);
    glVertex2f(-0.708,0.74);
    glEnd();
    //Bird2
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-0.23,0.75);
    glVertex2f(-0.22,0.75);
    glVertex2f(-0.225,0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.225,0.77);
    glVertex2f(-0.235,0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.225,0.77);
    glVertex2f(-0.215,0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.235,0.78);
    glVertex2f(-0.242,0.74);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.215,0.78);
    glVertex2f(-0.208,0.74);
    glEnd();
    glPopMatrix();
    //Boat
    glPushMatrix();
    glTranslatef(position,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(66, 37, 18);
    glVertex2f(0.8,0.18);
    glVertex2f(0.4,0.18);
    glVertex2f(0.45,0.08);
    glVertex2f(0.75,0.08);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(190, 64, 56);
    glVertex2f(0.65,0.18);
    glVertex2f(0.55,0.18);
    glVertex2f(0.55,0.23);
    glVertex2f(0.65,0.23);
    glEnd();
    //Human
    glBegin(GL_QUADS);
    glColor3ub(87, 82, 82);
    glVertex2f(0.73,0.22);
    glVertex2f(0.72,0.22);
    glVertex2f(0.72,0.23);
    glVertex2f(0.73,0.23);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.725,0.18);
    glVertex2f(0.725,0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.74,0.20);
    glVertex2f(0.725,0.215);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.71,0.07);
    glVertex2f(0.74,0.219);
    glEnd();
    //2nd Boat
    glBegin(GL_QUADS);
    glColor3ub(66, 37, 18);
    glVertex2f(-0.8,0.20);
    glVertex2f(-0.4,0.20);
    glVertex2f(-0.45,0.10);
    glVertex2f(-0.75,0.10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(190, 64, 56);
    glVertex2f(-0.65,0.20);
    glVertex2f(-0.55,0.20);
    glVertex2f(-0.55,0.25);
    glVertex2f(-0.65,0.25);
    glEnd();
    //2nd Human
    glBegin(GL_QUADS);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.73,0.24);
    glVertex2f(-0.72,0.24);
    glVertex2f(-0.72,0.25);
    glVertex2f(-0.73,0.25);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.725,0.20);
    glVertex2f(-0.725,0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.71,0.22);
    glVertex2f(-0.725,0.225);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.74,0.07);
    glVertex2f(-0.713,0.235);
    glEnd();
    glPopMatrix();
    //House
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 102);
    glVertex2f(-0.5,-0.4);
    glVertex2f(-0.9,-0.4);
    glVertex2f(-0.9,-0.8);
    glVertex2f(-0.5,-0.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,0,0);
    glVertex2f(-0.5,-0.3);
    glVertex2f(-0.9,-0.3);
    glVertex2f(-0.95,-0.4);
    glVertex2f(-0.45,-0.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.5,-0.8);
    glVertex2f(-0.9,-0.8);
    glVertex2f(-0.95,-0.85);
    glVertex2f(-0.45,-0.85);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(12,11,1);
    glVertex2f(-0.65,-0.65);
    glVertex2f(-0.75,-0.65);
    glVertex2f(-0.75,-0.8);
    glVertex2f(-0.65,-0.8);
    glEnd();
    //Right Window
    glBegin(GL_QUADS);
    glColor3ub(12,11,1);
    glVertex2f(-0.54,-0.5);
    glVertex2f(-0.61,-0.5);
    glVertex2f(-0.61,-0.6);
    glVertex2f(-0.54,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.563,-0.5);
    glVertex2f(-0.563,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.586,-0.5);
    glVertex2f(-0.586,-0.6);
    glEnd();
    //Left Window
    glBegin(GL_QUADS);
    glColor3ub(12,11,1);
    glVertex2f(-0.79,-0.5);
    glVertex2f(-0.86,-0.5);
    glVertex2f(-0.86,-0.6);
    glVertex2f(-0.79,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.813,-0.5);
    glVertex2f(-0.813,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.836,-0.5);
    glVertex2f(-0.836,-0.6);
    glEnd();
    //Tree
    glBegin(GL_QUADS);
    glColor3ub(128,0,0);
    glVertex2f(-0.25,-0.35);
    glVertex2f(-0.3,-0.35);
    glVertex2f(-0.3,-0.5);
    glVertex2f(-0.25,-0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(18,90,21);
    glVertex2f(-0.275,-0.1);
    glVertex2f(-0.32,-0.15);
    glVertex2f(-0.28,-0.2);
    glVertex2f(-0.32,-0.25);
    glVertex2f(-0.28,-0.3);
    glVertex2f(-0.35,-0.35);
    glVertex2f(-0.20,-0.35);
    glVertex2f(-0.27,-0.3);
    glVertex2f(-0.23,-0.25);
    glVertex2f(-0.27,-0.2);
    glVertex2f(-0.23,-0.15);
    glEnd();
    //House 2
    glBegin(GL_QUADS);
    glColor3ub(150,75,0);
    glVertex2f(0.05,-0.25);
    glVertex2f(-0.15,-0.25);
    glVertex2f(-0.15,-0.45);
    glVertex2f(0.05,-0.45);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,0);
    glVertex2f(-0.15,-0.25);
    glVertex2f(0.05,-0.25);
    glVertex2f(-0.05,-0.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.00,-0.35);
    glVertex2f(-0.1,-0.35);
    glVertex2f(-0.1,-0.45);
    glVertex2f(0.0,-0.45);
    glEnd();
    //Tree 2
    glBegin(GL_QUADS);
    glColor3ub(128,0,0);
    glVertex2f(-0.05,-0.75);
    glVertex2f(-0.1,-0.75);
    glVertex2f(-0.1,-0.9);
    glVertex2f(-0.05,-0.9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(18,90,21);
    glVertex2f(-0.075,-0.5);
    glVertex2f(-0.12,-0.55);
    glVertex2f(-0.08,-0.60);
    glVertex2f(-0.12,-0.65);
    glVertex2f(-0.08,-0.70);
    glVertex2f(-0.15,-0.75);
    glVertex2f(-0.0,-0.75);
    glVertex2f(-0.07,-0.70);
    glVertex2f(-0.03,-0.65);
    glVertex2f(-0.07,-0.60);
    glVertex2f(-0.03,-0.55);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.7,-0.45);
    glVertex2f(0.67,-0.45);
    glVertex2f(0.67,-0.85);
    glVertex2f(0.7,-0.85);
    glEnd();
    //Tree 3
    glBegin(GL_QUADS);
    glColor3ub(101,67,33);
    glVertex2f(0.17,-0.25);
    glVertex2f(0.21,-0.25);
    glVertex2f(0.21,-0.35);
    glVertex2f(0.17,-0.35);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(18,90,21);
    glVertex2f(0.14,-0.25);
    glVertex2f(0.24,-0.25);
    glVertex2f(0.19,-0.05);
    glEnd();
    //Tree 4
    glBegin(GL_QUADS);
    glColor3ub(101,67,33);
    glVertex2f(0.17,-0.75);
    glVertex2f(0.21,-0.75);
    glVertex2f(0.21,-0.85);
    glVertex2f(0.17,-0.85);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(18,90,21);
    glVertex2f(0.14,-0.75);
    glVertex2f(0.24,-0.75);
    glVertex2f(0.19,-0.55);
    glEnd();
    //Fans
    glPushMatrix();
    glTranslatef(0.685,-0.45,0);
    glRotatef(counter,0.0,0.0,-1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(139,139,139);
    glVertex2f(-0.2,0.35);
    glVertex2f(-0.175,0.25);
    glVertex2f(0.0,0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(139,139,139);
    glVertex2f(0.2,0.35);
    glVertex2f(0.175,0.25);
    glVertex2f(0.0,0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(139,139,139);
    glVertex2f(-0.025,-0.33);
    glVertex2f(0.025,-0.33);
    glVertex2f(0.0,0.0);
    glEnd();
    glLoadIdentity();
    glPopMatrix();
    counter+=0.08;
    glPointSize(25.0);
    glBegin(GL_POINTS);
    glColor3ub(204, 204, 102);
    glVertex2f(0.685,-0.45);
    glEnd();

    glutTimerFunc(5000,night_demo,0);
    glFlush();
}

void day_demo(int val)
{
    glutDisplayFunc(display);
}


void night()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(11, 128, 26);
    glVertex2f(1.0,0);
    glVertex2f(-1.0,0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(152, 158, 154);
    glVertex2f(1.0,0);
    glVertex2f(-1.0,0);
    glVertex2f(-1.0,0.05);
    glVertex2f(1.0,0.05);
    glEnd();
    //Nodir par
    glBegin(GL_QUADS);
    glColor3ub(115, 159, 243);
    glVertex2f(1.0,0.05);
    glVertex2f(-1.0,0.05);
    glVertex2f(-1.0,0.30);
    glVertex2f(1.0,0.30);
    glEnd();
    //Nodi
    glBegin(GL_QUADS);
    glColor3ub(152, 158, 154);
    glVertex2f(1.0,0.30);
    glVertex2f(-1.0,0.30);
    glVertex2f(-1.0,0.35);
    glVertex2f(1.0,0.35);
    glEnd();
    //Nodir par
    glBegin(GL_QUADS);
    glColor3ub(22, 62, 139); //22, 62, 139 for Night
    glVertex2f(1.0,0.35);
    glVertex2f(-1.0,0.35);
    glVertex2f(-1.0,1);
    glVertex2f(1.0,1);
    glEnd();
    //Hills
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(-1.0,0.35);
    glVertex2f(-0.5,0.35);
    glVertex2f(-0.75,0.9);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(-0.5,0.35);
    glVertex2f(0,0.35);
    glVertex2f(-0.25,0.9);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(0,0.35);
    glVertex2f(0.5,0.35);
    glVertex2f(0.25,0.9);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(0.5,0.35);
    glVertex2f(1,0.35);
    glVertex2f(0.75,0.9);
    glEnd();
    glPushMatrix();
    glTranslatef(position2,0,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(-0.73,0.75);
    glVertex2f(-0.72,0.75);
    glVertex2f(-0.725,0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.725,0.77);
    glVertex2f(-0.735,0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.725,0.77);
    glVertex2f(-0.715,0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.735,0.78);
    glVertex2f(-0.742,0.74);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.715,0.78);
    glVertex2f(-0.708,0.74);
    glEnd();
    //Bird2
    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(-0.23,0.75);
    glVertex2f(-0.22,0.75);
    glVertex2f(-0.225,0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.225,0.77);
    glVertex2f(-0.235,0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.225,0.77);
    glVertex2f(-0.215,0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.235,0.78);
    glVertex2f(-0.242,0.74);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.215,0.78);
    glVertex2f(-0.208,0.74);
    glEnd();
    glPopMatrix();
    //Boat
    glPushMatrix();
    glTranslatef(position,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(66, 37, 18);
    glVertex2f(0.8,0.18);
    glVertex2f(0.4,0.18);
    glVertex2f(0.45,0.08);
    glVertex2f(0.75,0.08);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(190, 64, 56);
    glVertex2f(0.65,0.18);
    glVertex2f(0.55,0.18);
    glVertex2f(0.55,0.23);
    glVertex2f(0.65,0.23);
    glEnd();
    //Human
    glBegin(GL_QUADS);
    glColor3ub(87, 82, 82);
    glVertex2f(0.73,0.22);
    glVertex2f(0.72,0.22);
    glVertex2f(0.72,0.23);
    glVertex2f(0.73,0.23);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.725,0.18);
    glVertex2f(0.725,0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.74,0.20);
    glVertex2f(0.725,0.215);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.71,0.07);
    glVertex2f(0.74,0.219);
    glEnd();
    //2nd Boat
    glBegin(GL_QUADS);
    glColor3ub(66, 37, 18);
    glVertex2f(-0.8,0.20);
    glVertex2f(-0.4,0.20);
    glVertex2f(-0.45,0.10);
    glVertex2f(-0.75,0.10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(190, 64, 56);
    glVertex2f(-0.65,0.20);
    glVertex2f(-0.55,0.20);
    glVertex2f(-0.55,0.25);
    glVertex2f(-0.65,0.25);
    glEnd();
    //2nd Human
    glBegin(GL_QUADS);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.73,0.24);
    glVertex2f(-0.72,0.24);
    glVertex2f(-0.72,0.25);
    glVertex2f(-0.73,0.25);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.725,0.20);
    glVertex2f(-0.725,0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.71,0.22);
    glVertex2f(-0.725,0.225);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.74,0.07);
    glVertex2f(-0.713,0.235);
    glEnd();
    glPopMatrix();
    //House
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 102);
    glVertex2f(-0.5,-0.4);
    glVertex2f(-0.9,-0.4);
    glVertex2f(-0.9,-0.8);
    glVertex2f(-0.5,-0.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,0,0);
    glVertex2f(-0.5,-0.3);
    glVertex2f(-0.9,-0.3);
    glVertex2f(-0.95,-0.4);
    glVertex2f(-0.45,-0.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.5,-0.8);
    glVertex2f(-0.9,-0.8);
    glVertex2f(-0.95,-0.85);
    glVertex2f(-0.45,-0.85);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(12,11,1);
    glVertex2f(-0.65,-0.65);
    glVertex2f(-0.75,-0.65);
    glVertex2f(-0.75,-0.8);
    glVertex2f(-0.65,-0.8);
    glEnd();
    //Right Window
    glBegin(GL_QUADS);
    glColor3ub(12,11,1);
    glVertex2f(-0.54,-0.5);
    glVertex2f(-0.61,-0.5);
    glVertex2f(-0.61,-0.6);
    glVertex2f(-0.54,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.563,-0.5);
    glVertex2f(-0.563,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.586,-0.5);
    glVertex2f(-0.586,-0.6);
    glEnd();
    //Left Window
    glBegin(GL_QUADS);
    glColor3ub(12,11,1);
    glVertex2f(-0.79,-0.5);
    glVertex2f(-0.86,-0.5);
    glVertex2f(-0.86,-0.6);
    glVertex2f(-0.79,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.813,-0.5);
    glVertex2f(-0.813,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.836,-0.5);
    glVertex2f(-0.836,-0.6);
    glEnd();
    //Tree
    glBegin(GL_QUADS);
    glColor3ub(128,0,0);
    glVertex2f(-0.25,-0.35);
    glVertex2f(-0.3,-0.35);
    glVertex2f(-0.3,-0.5);
    glVertex2f(-0.25,-0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(18,90,21);
    glVertex2f(-0.275,-0.1);
    glVertex2f(-0.32,-0.15);
    glVertex2f(-0.28,-0.2);
    glVertex2f(-0.32,-0.25);
    glVertex2f(-0.28,-0.3);
    glVertex2f(-0.35,-0.35);
    glVertex2f(-0.20,-0.35);
    glVertex2f(-0.27,-0.3);
    glVertex2f(-0.23,-0.25);
    glVertex2f(-0.27,-0.2);
    glVertex2f(-0.23,-0.15);
    glEnd();
    //House 2
    glBegin(GL_QUADS);
    glColor3ub(150,75,0);
    glVertex2f(0.05,-0.25);
    glVertex2f(-0.15,-0.25);
    glVertex2f(-0.15,-0.45);
    glVertex2f(0.05,-0.45);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,0);
    glVertex2f(-0.15,-0.25);
    glVertex2f(0.05,-0.25);
    glVertex2f(-0.05,-0.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.00,-0.35);
    glVertex2f(-0.1,-0.35);
    glVertex2f(-0.1,-0.45);
    glVertex2f(0.0,-0.45);
    glEnd();
    //Tree 2
    glBegin(GL_QUADS);
    glColor3ub(128,0,0);
    glVertex2f(-0.05,-0.75);
    glVertex2f(-0.1,-0.75);
    glVertex2f(-0.1,-0.9);
    glVertex2f(-0.05,-0.9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(18,90,21);
    glVertex2f(-0.075,-0.5);
    glVertex2f(-0.12,-0.55);
    glVertex2f(-0.08,-0.60);
    glVertex2f(-0.12,-0.65);
    glVertex2f(-0.08,-0.70);
    glVertex2f(-0.15,-0.75);
    glVertex2f(-0.0,-0.75);
    glVertex2f(-0.07,-0.70);
    glVertex2f(-0.03,-0.65);
    glVertex2f(-0.07,-0.60);
    glVertex2f(-0.03,-0.55);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.7,-0.45);
    glVertex2f(0.67,-0.45);
    glVertex2f(0.67,-0.85);
    glVertex2f(0.7,-0.85);
    glEnd();
    //Tree 3
    glBegin(GL_QUADS);
    glColor3ub(101,67,33);
    glVertex2f(0.17,-0.25);
    glVertex2f(0.21,-0.25);
    glVertex2f(0.21,-0.35);
    glVertex2f(0.17,-0.35);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(18,90,21);
    glVertex2f(0.14,-0.25);
    glVertex2f(0.24,-0.25);
    glVertex2f(0.19,-0.05);
    glEnd();
    //Tree 4
    glBegin(GL_QUADS);
    glColor3ub(101,67,33);
    glVertex2f(0.17,-0.75);
    glVertex2f(0.21,-0.75);
    glVertex2f(0.21,-0.85);
    glVertex2f(0.17,-0.85);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(18,90,21);
    glVertex2f(0.14,-0.75);
    glVertex2f(0.24,-0.75);
    glVertex2f(0.19,-0.55);
    glEnd();
    //Fans
    glPushMatrix();
    glTranslatef(0.685,-0.45,0);
    glRotatef(counter,0.0,0.0,-1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(139,139,139);
    glVertex2f(-0.2,0.35);
    glVertex2f(-0.175,0.25);
    glVertex2f(0.0,0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(139,139,139);
    glVertex2f(0.2,0.35);
    glVertex2f(0.175,0.25);
    glVertex2f(0.0,0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(139,139,139);
    glVertex2f(-0.025,-0.33);
    glVertex2f(0.025,-0.33);
    glVertex2f(0.0,0.0);
    glEnd();
    glLoadIdentity();
    glPopMatrix();
    counter+=0.08;

    glPointSize(25.0);
    glBegin(GL_POINTS);
    glColor3ub(204, 204, 102);
    glVertex2f(0.685,-0.45);
    glEnd();
    circledraw2();
    glutTimerFunc(5000,rain_demo,0);
    glFlush();
}

void night_demo(int val)
{
    glutDisplayFunc(night);
}

void daywithrain()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(11, 128, 26);
    glVertex2f(1.0,0);
    glVertex2f(-1.0,0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(152, 158, 154);
    glVertex2f(1.0,0);
    glVertex2f(-1.0,0);
    glVertex2f(-1.0,0.05);
    glVertex2f(1.0,0.05);
    glEnd();
    //Nodir par
    glBegin(GL_QUADS);
    glColor3ub(115, 159, 243);
    glVertex2f(1.0,0.05);
    glVertex2f(-1.0,0.05);
    glVertex2f(-1.0,0.30);
    glVertex2f(1.0,0.30);
    glEnd();
    //Nodi
    glBegin(GL_QUADS);
    glColor3ub(152, 158, 154);
    glVertex2f(1.0,0.30);
    glVertex2f(-1.0,0.30);
    glVertex2f(-1.0,0.35);
    glVertex2f(1.0,0.35);
    glEnd();
    //Nodir par
    glBegin(GL_QUADS);
    glColor3ub(0, 128, 255); //22, 62, 139 for Night
    glVertex2f(1.0,0.35);
    glVertex2f(-1.0,0.35);
    glVertex2f(-1.0,1);
    glVertex2f(1.0,1);
    glEnd();
    //Hills
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(-1.0,0.35);
    glVertex2f(-0.5,0.35);
    glVertex2f(-0.75,0.9);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(-0.5,0.35);
    glVertex2f(0,0.35);
    glVertex2f(-0.25,0.9);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(0,0.35);
    glVertex2f(0.5,0.35);
    glVertex2f(0.25,0.9);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(111, 73, 48);
    glVertex2f(0.5,0.35);
    glVertex2f(1,0.35);
    glVertex2f(0.75,0.9);
    glEnd();
    //Boat
    glPushMatrix();
    glTranslatef(position,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(66, 37, 18);
    glVertex2f(0.8,0.18);
    glVertex2f(0.4,0.18);
    glVertex2f(0.45,0.08);
    glVertex2f(0.75,0.08);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(190, 64, 56);
    glVertex2f(0.65,0.18);
    glVertex2f(0.55,0.18);
    glVertex2f(0.55,0.23);
    glVertex2f(0.65,0.23);
    glEnd();
    //Human
    glBegin(GL_QUADS);
    glColor3ub(87, 82, 82);
    glVertex2f(0.73,0.22);
    glVertex2f(0.72,0.22);
    glVertex2f(0.72,0.23);
    glVertex2f(0.73,0.23);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.725,0.18);
    glVertex2f(0.725,0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.74,0.20);
    glVertex2f(0.725,0.215);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.71,0.07);
    glVertex2f(0.74,0.219);
    glEnd();
    //2nd Boat
    glBegin(GL_QUADS);
    glColor3ub(66, 37, 18);
    glVertex2f(-0.8,0.20);
    glVertex2f(-0.4,0.20);
    glVertex2f(-0.45,0.10);
    glVertex2f(-0.75,0.10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(190, 64, 56);
    glVertex2f(-0.65,0.20);
    glVertex2f(-0.55,0.20);
    glVertex2f(-0.55,0.25);
    glVertex2f(-0.65,0.25);
    glEnd();
    //2nd Human
    glBegin(GL_QUADS);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.73,0.24);
    glVertex2f(-0.72,0.24);
    glVertex2f(-0.72,0.25);
    glVertex2f(-0.73,0.25);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.725,0.20);
    glVertex2f(-0.725,0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.71,0.22);
    glVertex2f(-0.725,0.225);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.74,0.07);
    glVertex2f(-0.713,0.235);
    glEnd();
    glPopMatrix();
    //House
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 102);
    glVertex2f(-0.5,-0.4);
    glVertex2f(-0.9,-0.4);
    glVertex2f(-0.9,-0.8);
    glVertex2f(-0.5,-0.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,0,0);
    glVertex2f(-0.5,-0.3);
    glVertex2f(-0.9,-0.3);
    glVertex2f(-0.95,-0.4);
    glVertex2f(-0.45,-0.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.5,-0.8);
    glVertex2f(-0.9,-0.8);
    glVertex2f(-0.95,-0.85);
    glVertex2f(-0.45,-0.85);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(12,11,1);
    glVertex2f(-0.65,-0.65);
    glVertex2f(-0.75,-0.65);
    glVertex2f(-0.75,-0.8);
    glVertex2f(-0.65,-0.8);
    glEnd();
    //Right Window
    glBegin(GL_QUADS);
    glColor3ub(12,11,1);
    glVertex2f(-0.54,-0.5);
    glVertex2f(-0.61,-0.5);
    glVertex2f(-0.61,-0.6);
    glVertex2f(-0.54,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.563,-0.5);
    glVertex2f(-0.563,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.586,-0.5);
    glVertex2f(-0.586,-0.6);
    glEnd();
    //Left Window
    glBegin(GL_QUADS);
    glColor3ub(12,11,1);
    glVertex2f(-0.79,-0.5);
    glVertex2f(-0.86,-0.5);
    glVertex2f(-0.86,-0.6);
    glVertex2f(-0.79,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.813,-0.5);
    glVertex2f(-0.813,-0.6);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(87, 82, 82);
    glVertex2f(-0.836,-0.5);
    glVertex2f(-0.836,-0.6);
    glEnd();
    //Tree
    glBegin(GL_QUADS);
    glColor3ub(128,0,0);
    glVertex2f(-0.25,-0.35);
    glVertex2f(-0.3,-0.35);
    glVertex2f(-0.3,-0.5);
    glVertex2f(-0.25,-0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(18,90,21);
    glVertex2f(-0.275,-0.1);
    glVertex2f(-0.32,-0.15);
    glVertex2f(-0.28,-0.2);
    glVertex2f(-0.32,-0.25);
    glVertex2f(-0.28,-0.3);
    glVertex2f(-0.35,-0.35);
    glVertex2f(-0.20,-0.35);
    glVertex2f(-0.27,-0.3);
    glVertex2f(-0.23,-0.25);
    glVertex2f(-0.27,-0.2);
    glVertex2f(-0.23,-0.15);
    glEnd();
    //House 2
    glBegin(GL_QUADS);
    glColor3ub(150,75,0);
    glVertex2f(0.05,-0.25);
    glVertex2f(-0.15,-0.25);
    glVertex2f(-0.15,-0.45);
    glVertex2f(0.05,-0.45);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,0);
    glVertex2f(-0.15,-0.25);
    glVertex2f(0.05,-0.25);
    glVertex2f(-0.05,-0.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.00,-0.35);
    glVertex2f(-0.1,-0.35);
    glVertex2f(-0.1,-0.45);
    glVertex2f(0.0,-0.45);
    glEnd();
    //Tree 2
    glBegin(GL_QUADS);
    glColor3ub(128,0,0);
    glVertex2f(-0.05,-0.75);
    glVertex2f(-0.1,-0.75);
    glVertex2f(-0.1,-0.9);
    glVertex2f(-0.05,-0.9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(18,90,21);
    glVertex2f(-0.075,-0.5);
    glVertex2f(-0.12,-0.55);
    glVertex2f(-0.08,-0.60);
    glVertex2f(-0.12,-0.65);
    glVertex2f(-0.08,-0.70);
    glVertex2f(-0.15,-0.75);
    glVertex2f(-0.0,-0.75);
    glVertex2f(-0.07,-0.70);
    glVertex2f(-0.03,-0.65);
    glVertex2f(-0.07,-0.60);
    glVertex2f(-0.03,-0.55);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.7,-0.45);
    glVertex2f(0.67,-0.45);
    glVertex2f(0.67,-0.85);
    glVertex2f(0.7,-0.85);
    glEnd();
        //Tree 3
    glBegin(GL_QUADS);
    glColor3ub(101,67,33);
    glVertex2f(0.17,-0.25);
    glVertex2f(0.21,-0.25);
    glVertex2f(0.21,-0.35);
    glVertex2f(0.17,-0.35);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(18,90,21);
    glVertex2f(0.14,-0.25);
    glVertex2f(0.24,-0.25);
    glVertex2f(0.19,-0.05);
    glEnd();
    //Tree 4
    glBegin(GL_QUADS);
    glColor3ub(101,67,33);
    glVertex2f(0.17,-0.75);
    glVertex2f(0.21,-0.75);
    glVertex2f(0.21,-0.85);
    glVertex2f(0.17,-0.85);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(18,90,21);
    glVertex2f(0.14,-0.75);
    glVertex2f(0.24,-0.75);
    glVertex2f(0.19,-0.55);
    glEnd();
    //Fans
    glPushMatrix();
    glTranslatef(0.685,-0.45,0);
    glRotatef(counter,0.0,0.0,-1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(139,139,139);
    glVertex2f(-0.2,0.35);
    glVertex2f(-0.175,0.25);
    glVertex2f(0.0,0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(139,139,139);
    glVertex2f(0.2,0.35);
    glVertex2f(0.175,0.25);
    glVertex2f(0.0,0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(139,139,139);
    glVertex2f(-0.025,-0.33);
    glVertex2f(0.025,-0.33);
    glVertex2f(0.0,0.0);
    glEnd();
    glLoadIdentity();
    glPopMatrix();
    counter+=0.08;

    glPointSize(25.0);
    glBegin(GL_POINTS);
    glColor3ub(204, 204, 102);
    glVertex2f(0.685,-0.45);
    glEnd();

    glPushMatrix();

    glTranslatef(0,positionRain,0);


    Rain();
    glTranslatef(0.0,-0.1,0);
    Rain();
    glTranslatef(0.0,-0.2,0);
    Rain();
    glTranslatef(0.0,-0.3,0);
    Rain();

    glTranslatef(0.0,-0.4,0);
    Rain();
    glTranslatef(0.0,-0.5,0);
    Rain();
    glTranslatef(0.0,-0.6,0);
    Rain();
    glTranslatef(-0.1,-0.6,0);
    Rain();

    glLoadIdentity();
    glPopMatrix();


    glutTimerFunc(5000,day_demo,0);
    glFlush();
}

void rain_demo(int val)
{
    glutDisplayFunc(daywithrain);
}

void handleKeypress(unsigned char key, int x, int y)
{

    switch (key)
    {

    case 'n':
        glutDisplayFunc(night);
        glutPostRedisplay();
        break;


    case 'r':
        glutDisplayFunc(daywithrain);
        glutPostRedisplay();
        break;


    glutPostRedisplay();
    }

}

void handleMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            speed+=0.01;
        }
    }

    glutPostRedisplay();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Village Scenario Project Group 1");
    glutDisplayFunc(display);
    init();
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutTimerFunc(1000, update, 0);
    glutTimerFunc(110, updateRain, 0);
    sound();
    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;
}
