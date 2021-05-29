#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(100, 50);
glVertex2i(110, 130);
glVertex2i(250, 130);
glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowPosition(-1,-1);
	glutInitWindowSize(640,640);
	glutCreateWindow("");
	glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
	return 0;
}
