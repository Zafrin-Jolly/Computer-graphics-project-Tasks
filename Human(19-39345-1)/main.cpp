
#include <GL/gl.h>
#include <GL/glut.h>
void display()
{

}
 void init() { glClearColor(0.0f,0.6f,1.0f,1.0f);

    glPointSize(5.0);

    glBegin(GL_POLYGON);
    glColor3f(0.6f,0.6f,0.6f);
    glVertex2f(0.3f,-0.2f);
    glVertex2f(0.3f,0.25f);
    glVertex2f(-0.3f,0.25f);
    glVertex2f(-0.3f,-0.2f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.1f,0.1f,0.1f);
    glVertex2f(0.3f,0.25f);
    glVertex2f(0.3f,0.49f);
    glVertex2f(-0.3f,0.49f);
    glVertex2f(-0.3f,0.25f);
    glEnd(); // white shirt


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.28f,-0.18f);
    glVertex2f(-0.11f,-0.18f);
    glVertex2f(-0.11f,0.31f);
    glVertex2f(-0.14f,0.31f);
    glVertex2f(-0.14f,0.4f);
    glVertex2f(-0.18,0.4f);
    glVertex2f(-0.18,0.55f);
    glVertex2f(-0.27f,0.55f);
    glVertex2f(-0.27f,0.51f);
    glVertex2f(-0.33f,0.51f);
    glVertex2f(-0.33f,-0.29f);
    glVertex2f(-0.28f,-0.29f);
    glEnd();

    glFlush();
     glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.28f, -0.18f);
    glVertex2f(0.11f, -0.18f);
    glVertex2f(0.11f, 0.31f);
    glVertex2f(0.14f, 0.31f);
    glVertex2f(0.14f, 0.4f);  //black right
    glVertex2f(0.18f, 0.4f);
    glVertex2f(0.18f, 0.55f);
    glVertex2f(0.27f, 0.55f);
    glVertex2f(0.27f, 0.51f);
    glVertex2f(0.33f, 0.51f);
    glVertex2f(0.33f, -0.29f);
    glVertex2f(0.28f, -0.29f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.28f, -0.3f);
    glVertex2f(0.28f, -0.2f);
    glVertex2f(-0.28f,-0.2f);
    glVertex2f(-0.28f, -0.3f);


	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.28f,-0.2f);
    glVertex2f(-0.28f, -0.79f);
    glVertex2f(-0.15f, -0.79f);
    glVertex2f(-0.15f, -0.2f);


	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.28f,-0.2f);
    glVertex2f(0.28f, -0.79f);
    glVertex2f(0.15f, -0.79f);
    glVertex2f(0.15f, -0.2f);


	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.7f, 1.0f);
    glVertex2f(-0.28f, -0.79f);
    glVertex2f(-0.28f, -0.85f);
    glVertex2f(-0.15f, -0.85f);
    glVertex2f(-0.15f, -0.79f);


	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.7f, 1.0f);
    glVertex2f(0.28f, -0.79f);
    glVertex2f(0.28f, -0.85f);
    glVertex2f(0.15f, -0.85f);
    glVertex2f(0.15f, -0.79f);


	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.15f, -1.0f);
    glVertex2f(-0.15f, -0.85f);
    glVertex2f(-0.28f, -0.85f);
    glVertex2f(-0.28f, -0.91f);
    glVertex2f(-0.39f, -0.91f);
    glVertex2f(-0.39f, -1.0f);



	glEnd();
     glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.15f, -1.0f);
    glVertex2f(0.15f, -0.85f);
    glVertex2f(0.28f, -0.85f);
    glVertex2f(0.28f, -0.91f);
    glVertex2f(0.39f, -0.91f);
    glVertex2f(0.39f, -1.0f);



	glEnd();
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.8f, .8f);
    glVertex2f(-0.33f, -0.29f);  //hand1
    glVertex2f(-0.33f, -0.38f);
    glVertex2f(-0.28f, -0.38f);
    glVertex2f(-0.28f, -0.32f);
    glVertex2f(-0.24f, -0.32f);
    glVertex2f(-0.24f, -0.29f);



	glEnd();

    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.8f, .8f);
    glVertex2f(0.33f, -0.29f);  //hand2
    glVertex2f(0.33f, -0.38f);
    glVertex2f(0.28f, -0.38f);
    glVertex2f(0.28f, -0.32f);
    glVertex2f(0.24f, -0.32f);
    glVertex2f(0.24f, -0.29f);



	glEnd();

	glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.8f, 0.8f);
     glVertex2f(-0.18f, 0.55f);
    glVertex2f(-0.18f, 0.49f);
    glVertex2f(0.18f, 0.49f);
    glVertex2f(0.18f, 0.7f);
    glVertex2f(0.15f, 0.7f);
    glVertex2f(0.15f, 0.75f); //face
    glVertex2f(0.11f, 0.75f);
    glVertex2f(0.11f, 0.6f);
    glVertex2f(-0.11f, 0.6f);
    glVertex2f(-0.11f, 0.8f);
    glVertex2f(-0.3f, 0.8f);
    glVertex2f(-0.3f, 0.55f);


	glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f,0.0f);
     glVertex2f(-0.11f, 0.6f);
    glVertex2f(0.11f, 0.6f);
    glVertex2f(0.11f, 0.91f);
    glVertex2f(-0.11f, 0.91f);
	glEnd();

     glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f,0.0f);
     glVertex2f(0.15f, 0.75f);
     glVertex2f(0.15f, 0.7f);
     glVertex2f(0.22f, 0.7f);
    glVertex2f(0.22f, 0.91f);
     glVertex2f(0.11f, 0.91f);
         glVertex2f(0.11f, 0.75f);

   	glEnd();
     glBegin(GL_POLYGON);
     glColor3f(0.0f, 0.0f,0.0f);
     glVertex2f(-0.19f, 0.91f);
     glVertex2f(-0.19f, 0.99f);
     glVertex2f(-0.46f, 0.99f);
    glVertex2f(-0.46f, 0.8f);
    glVertex2f(-0.11f, 0.8f);
    glVertex2f(-0.11f,0.91f);

	glEnd();
     glBegin(GL_POLYGON);
         glColor3f(0.0f, 0.0f,0.0f);
         glVertex2f(0.21f, 0.59f);
    glVertex2f(0.21f,0.62f);
     glVertex2f(0.18f, 0.62f);
     glVertex2f(0.18f, 0.51f);
     glVertex2f(0.28f, 0.51f);
    glVertex2f(0.28f, 0.59f);


	glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f,0.0f);
             glVertex2f(-0.3f, 0.73f);
        glVertex2f(-0.27f, 0.73f);
    glVertex2f(-0.27f, 0.75f);
    glVertex2f(-0.46f, 0.75f);
    glVertex2f(-0.46f,0.7f);
     glVertex2f(-0.3f, 0.7f);

	glEnd();

      glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f,0.0f);
    glVertex2f(-0.27f, 0.75f);
     glVertex2f(-0.27f, 0.7f);
     glVertex2f(-0.15f, 0.7f);
     glVertex2f(-0.15f, 0.75f);

	glEnd();

	glFlush();


}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Human!");
    init();
	glutInitWindowSize(500, 500);
   glutInitWindowPosition(400, 50);
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}
