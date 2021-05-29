#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>



    /*  BATMAN HEAD */

  void display()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);

    //left horn - dark blue

    glBegin(GL_QUADS);
    glColor3f ( 0.02f,0.05f,0.12f );
    glVertex2i(-0.2f,0.3f);
    glVertex2i(-.01f,0.3f);
    glVertex2i(-0.1f,0.6f);
    glVertex2i(-0.2f,0.6f);
    glEnd();
    glFlush ();

    //right horn - light blue
    glBegin(GL_QUADS);
    glColor3f ( 0.04f,0.11f,0.30f );
    glVertex2i(-0.1f,0.3f);
    glVertex2i(0.2f,0.3f);
    glVertex2i(0.2f,0.6f);
    glVertex2i(0.1f,0.6f);
    glVertex2i(0.1f,0.5f);
    glVertex2i(-0.1f,0.5f);

    glEnd();
    glFlush ();

    //middle eyes - light blue
  /*  glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(170,300);
    glVertex2i(190,300);
    glVertex2i(190,330);
    glVertex2i(170,330);

    glEnd();
    glFlush ();
*/
    //middle eyes - skin color
    glBegin(GL_QUADS);
    glColor3f ( 0.67f,0.40f,0.07f );
    glVertex2i(-0.2f,0.2f);
    glVertex2i(-0.1f,0.2f);
    glVertex2i(-0.1f,0.3f);
    glVertex2i(-0.2f,0.3f);
    glEnd();
    glFlush ();

    //right skin - skin color
    glBegin(GL_QUADS);
    glColor3f ( 0.97f,0.61f,0.20f );
    glVertex2i(-0.1f,0.2f);
    glVertex2i(0.2f,0.2f);
    glVertex2i(0.2f,0.3f);
    glVertex2i(-0.1f,0.3f);

    glEnd();
    glFlush ();



    /*  BATMAN BODY */

    //first layer
    glBegin(GL_QUADS);
    glColor3f ( 0.47f,0.47f,0.47f );
    glVertex2i(-0.3f,0.1f);
    glVertex2i(0.3f,0.1f);
    glVertex2i(0.3f,0.2f);
    glVertex2i(-0.3f,0.2f);

    glEnd();
    glFlush ();
;

}



int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Batman");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
