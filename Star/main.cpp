#include<windows.h>
#include<GL/glut.h>
void display()
{
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5.0);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.0f,-0.3f);
    glVertex2f(0.41f,-0.65f);
    glVertex2f(0.3f,-0.11f);
    glVertex2f(0.7f,0.18f);
    glVertex2f(0.18f,0.18f);
    glVertex2f(0.0f,0.7f);
    glVertex2f(-0.18f,0.18f);
    glVertex2f(-0.7f,0.18f);
    glVertex2f(-0.3f,-0.11f);
    glVertex2f(-0.41f,-0.65f);
    glEnd();
    glFlush();

}
int main(int argc,char** argv)
{

glutInit(&argc,argv);
 glutCreateWindow("Star shape");
    glutInitWindowSize(500, 500);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
