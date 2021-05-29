#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <cmath>
using namespace std;

int choice,c;
int edges;
int X1,X2,X3,X4, Y1, Y2, Y3, Y4;
float Tx,Ty, Sx, Sy;
float t; //Theta

void Translation()
{
    glBegin(GL_QUADS);
    glVertex2i(X1,Y1);
     glVertex2i(X2,Y2);
      glVertex2i(X3,Y3);
       glVertex2i(X4,Y4);
       glEnd();

       //After Translating
       glColor3ub (255, 0, 0);
          glBegin(GL_QUADS);
    glVertex2i(X1+Tx,Y1+Ty);
     glVertex2i(X2+Tx,Y2+Ty);
      glVertex2i(X3+Tx,Y3+Ty);
       glVertex2i(X4+Tx,Y4+Ty);
       glEnd();
}

void Scaling()
{
    glBegin(GL_QUADS);
    glVertex2i(X1,Y1);
     glVertex2i(X2,Y2);
      glVertex2i(X3,Y3);
       glVertex2i(X4,Y4);
       glEnd();

       //After Translating
       glColor3ub (0, 255, 0);
          glBegin(GL_QUADS);
    glVertex2i(X1*Sx,Y1*Sy);
     glVertex2i(X2*Sx,Y2*Sy);
      glVertex2i(X3*Sx,Y3*Sy);
       glVertex2i(X4*Sx,Y4*Sy);
       glEnd();
}
void clockwise_rotation()
{

 glBegin(GL_QUADS);
    glVertex2i(X1,Y1);
     glVertex2i(X2,Y2);
      glVertex2i(X3,Y3);
       glVertex2i(X4,Y4);
       glEnd();

       //After rotation
       glColor3ub (0, 255, 0);
        glBegin(GL_QUADS);
          glVertex2i(X1,Y1); //fixed x1,y1
    //glVertex2i(((X1*cos(t))+(Y1*sin(t))),((X1*sin(t))-(Y1*cos(t))));
     glVertex2i(((X2*cos(t))+(Y2*sin(t))),((X2*sin(t))-(Y2*cos(t))));
      glVertex2i(((X3*cos(t))+(Y3*sin(t))),((X3*sin(t))-(Y3*cos(t))));
       glVertex2i(((X3*cos(t))+(Y4*sin(t))),((X4*sin(t))-(Y4*cos(t))));

    glEnd();
}


void anti_clockwise_rotation()
{

 glBegin(GL_QUADS);
    glVertex2i(X1,Y1);
     glVertex2i(X2,Y2);
      glVertex2i(X3,Y3);
       glVertex2i(X4,Y4);
       glEnd();

       //After rotation
       glColor3ub (0,255, 0);
        glBegin(GL_QUADS);
     glVertex2i(X1,Y1); //fixed x1,y1
    //glVertex2i(((X1*cos(t))-(Y1*sin(t))),((X1*sin(t))+(Y1*cos(t))));
     glVertex2i(((X2*cos(t))-(Y2*sin(t))),((X2*sin(t))+(Y2*cos(t))));
      glVertex2i(((X3*cos(t))-(Y3*sin(t))),((X3*sin(t))+(Y3*cos(t))));
       glVertex2i(((X3*cos(t))-(Y4*sin(t))),((X4*sin(t))+(Y4*cos(t))));

    glEnd();
}


void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);

if(choice == 1)
{
    Translation();
}
else if(choice == 2)
{
    Scaling();
}
else if(choice==3)
{
    if(c==1)
    {
        clockwise_rotation();
    }
    else if(c==2)
    {
        anti_clockwise_rotation();
    }
}
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{

    cout<<"Enter your choice: ";
    cout<<"\n1.Translation \n2.Scaling \n3.Rotation\n4.Exit\n";
    cin>>choice;
    if(choice == 1)
    {
        //This is for Translation
        cout<<"Enter the no. of edges: ";
        cin>>edges;

        cout<<"Enter the co-ordinates of vertex 1: ";
        cin>>X1>>Y1;
        cout<<"Enter the co-ordinates of vertex 2: ";
        cin>>X2>>Y2;
        cout<<"Enter the co-ordinates of vertex 3: ";
        cin>>X3>>Y3;
        cout<<"Enter the co-ordinates of vertex 4: ";
        cin>>X4>>Y4;
        cout<<"Enter the Translation factor for x and y: ";
        cin>>Tx>>Ty;


    }
    else if (choice == 2)
    {
        //This is for scaling
        cout<<"Enter the no. of edges: ";
        cin>>edges;

        cout<<"Enter the co-ordinates of vertex 1: ";
        cin>>X1>>Y1;
        cout<<"Enter the co-ordinates of vertex 2: ";
        cin>>X2>>Y2;
        cout<<"Enter the co-ordinates of vertex 3: ";
        cin>>X3>>Y3;
        cout<<"Enter the co-ordinates of vertex 4: ";
        cin>>X4>>Y4;
        cout<<"Enter the Scaling factor for x and y: ";
        cin>>Sx>>Sy;

    }
     else if (choice == 3)
    {
       //for rotation!
        cout<<"Enter the co-ordinates of vertex 1: ";
        cin>>X1>>Y1;
        cout<<"Enter the co-ordinates of vertex 2: ";
        cin>>X2>>Y2;
        cout<<"Enter the co-ordinates of vertex 3: ";
        cin>>X3>>Y3;
        cout<<"Enter the co-ordinates of vertex 4: ";
        cin>>X4>>Y4;
        cout<<"Enter the degree: ";
        cin>>t;
        cout<<"Enter the Mood: 1 for clockwise, 2 for anticlockwise \n";
        cin>>c;
        if(c==1)
        {
           clockwise_rotation();
        }
        else if(c==2)
        {
           anti_clockwise_rotation();
        }
      else
        {
            cout<<"Invalid choice";
        }

    }
    else
    {
        return 0;
    }

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
