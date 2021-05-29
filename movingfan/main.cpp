#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float x,y,i;
float counter=0.0;
void init(void)
{
	//gluOrtho2D(0,800,400,0);
	//glOrtho(0,800,500,0,1,-1);
}
void fan(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
glColor3f(1.0f,0.0f,0.0f);
glVertex2f(-1.0, -0.2); //spike1
glVertex2f(1.0, -0.2);
glEnd();
glBegin(GL_LINES);
glColor3f(1.0f,0.0f,0.0f); //spike2
glVertex2f(-1.0, -0.25);
glVertex2f(1.0, -0.25);
glEnd();
glBegin(GL_LINES);
glColor3f(1.0f,0.0f,0.0f);
glVertex2f(-1.0, -0.3); //spike3
glVertex2f(1.0, -0.3);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.3, -0.15);
glVertex2f(0.33, -0.15); //pillrer
glVertex2f(0.33, -0.35);
glVertex2f(0.3, -0.35);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.8f,0.7f,0.7f);
glVertex2f(-0.8, 0.06);
glVertex2f(-0.8, 0.4); //backbuilding
glVertex2f(-0.56,0.4);
glVertex2f(-0.56, 0.06);
glEnd();


glFlush();

}
int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowPosition(-1,-1);
	glutInitWindowSize(640,480);
	glutCreateWindow("Fan");
	init();
	glutDisplayFunc(fan);
	glutIdleFunc(fan);
	glutMainLoop();
	return 0;
}
