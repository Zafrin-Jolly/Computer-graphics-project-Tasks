#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display()
{
	glClearColor(1.0f, 1.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);


    glScalef(0.6,1,0); //Scaling Circle to x-axis and y-axis
    glColor3f(0.6000,0.0000,0.0000);
    glutSolidSphere(0.65,100,10); //setting radius, slices

       glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.7f,-0.7f);
    glVertex2f(-0.4f,-0.7f);
    glVertex2f(-0.2f,-0.2f);
    glVertex2f(-0.5f,-0.2f);



    glEnd();
      glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.5f,-0.2f);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.2f,0.0f);
    glVertex2f(-0.45f,0.0f);


    glEnd();
     glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.45f,0.0f);
    glVertex2f(-0.2f,0.0f);
    glVertex2f(0.0f,0.7f);
    glVertex2f(-0.2f,0.7f);


    glEnd();
     glBegin(GL_POLYGON);

     glColor3f(1.0, 1.0, 1.0);

    glVertex2f(0.2f,-0.3f);
    glVertex2f(0.5f,-0.1f);
    glVertex2f(0.2f,0.1f);

    glEnd();
     glBegin(GL_POLYGON);

     glColor3f(1.0, 1.0, 1.0);

    glVertex2f(0.2f,-0.35f);
    glVertex2f(0.5f,-0.35f);
    glVertex2f(0.5f,-0.15f);

    glEnd();
     glBegin(GL_POLYGON);

     glColor3f(1.0, 1.0, 1.0);

    glVertex2f(0.2f,0.15f);
    glVertex2f(0.5f,-0.05f);
    glVertex2f(0.3f,0.7f);
    glVertex2f(0.0f,0.7f);

    glEnd();


	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Avengers");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
