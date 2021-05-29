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
	//glPointSize(10.0);
	//glLoadIdentity();
	 glLoadIdentity();
	glRotatef(counter,0.0,0.0,-1.0);
	counter+=3;
	glBegin(GL_POLYGON);
		glColor3ub(0,255,0);
		glVertex2f(0,0);
		glVertex2f(0,0.6);
		glVertex2f(-0.6,0.6);



		glColor3ub(0,255,0);
		glVertex2f(0.0,0.0);
		glVertex2f(0.6,0.3);
		glVertex2f(0.6,-0.3);

        glColor3ub(0,255,0);
		glVertex2f(0.0,0.0);
		glVertex2f(-0.6,0.0);
		glVertex2f(-0.6,-0.6);
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,0,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.1*sin(i);
			y=0.1*cos(i);
			glVertex2f(x,y);
		}
	glEnd();

	glutSwapBuffers();
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
