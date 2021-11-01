
#include<windows.h>
#include<GL\glut.h>
#include<GL\gl.h>
void linesegment (void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	 glVertex2i(200,125);
	glColor3f(0.5,0.0,0.0);
	glVertex2i(500,125);
	glColor3f(0.5,0.0,0.0);
	glVertex2i(600,200);
	glColor3f(0.5,0.0,0.0);
	glVertex2i(100,200);
	glEnd();

	//----------------

	glColor3f(0.0,0.0,1.0);
//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	 glVertex2i(0,0);
	glColor3f(0.0,0.0,1.0);
	 glVertex2i(0,125);
	 int x=0;
	 for(int i=0;i<640;i++)
        {    x=x+65;
             glVertex2i(x,150);
            glColor3f(0.0,0.0,1.0);
            glVertex2i(x+10,125);
            glColor3f(0.0,0.0,1.0);
        }
         glVertex2i(640,0);
            glColor3f(0.0,0.0,1.0);
	glEnd();
	//----------
	int Qx=200;
	for(int i=0;i<4;i++)
    {
          glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(Qx,150);
    glColor3f(1.0,1.0,1.0);
	glVertex2i(Qx+50,150);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(Qx+50,185);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(Qx,185);
	glColor3f(1.0,1.0,1.0);
    glEnd();
    Qx=Qx+50+35;
    }
    //---
    glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	 glVertex2i(200,200);
	glColor3f(0.0,0.5,0.5);
	glVertex2i(500,200);
	glColor3f(0.0,0.5,0.5);
	glVertex2i(500,250);
	glColor3f(0.0,0.5,0.5);
	glVertex2i(200,250);
	glEnd();
	//-----
	glColor3f(1.0,.5,.0);
	glBegin(GL_POLYGON);
	 glVertex2i(210,200);
	glColor3f(1.0,.5,.0);
	glVertex2i(260,200);
	glColor3f(1.0,.5,.0);
	glVertex2i(260,245);
	glColor3f(1.0,.5,.0);
	glVertex2i(210,245);
	glEnd();
	//-----
	glColor3f(0.2,.5,1);
	glBegin(GL_POLYGON);
	 glVertex2i(150,250);
	glColor3f(0.2,.5,1);
	glVertex2i(550,250);
	glColor3f(0.2,.5,1);
	glVertex2i(550,260);
	glColor3f(0.2,.5,1);
	glVertex2i(150,260);
	glEnd();
	//--
	Qx=210;
for(int i=0;i<3;i++)
    {
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(Qx,260);
    glColor3f(0.0,0.0,0.0);
	glVertex2i(Qx+50,260);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(Qx+50,300);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(Qx,300);
	glColor3f(0.0,0.0,0.0);
    glEnd();
    Qx=Qx+50+65;
    }
    //--
    Qx=210;
    for(int i=0;i<3;i++)
        {
            glColor3f(1.0,.5,.0);
	glBegin(GL_LINES);
	 glVertex2i(Qx,285);
	 glVertex2i(Qx+50,285);
	 glEnd();
    Qx=Qx+50+65;
        }







	glFlush();

}
void init (void)
{
	glClearColor(1.0,1.0,1.0,0.0); //specifies clear 	values for the color buffers (R,G,B,Alpha)
	glMatrixMode(GL_PROJECTION); // sets the 	current matrix mode
	gluOrtho2D(0.0,1000.0,0.0,600.0); //2D orthographic 	projection matrix (left,right,bottom,top)
}
int main (int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //sets 	the initial display mode
	glutInitWindowPosition(50,100); //sets the initial window 	position
    	glutInitWindowSize(640,600); //sets the initial window size
    	glutCreateWindow("ship"); // creates the window with name line
	init();
	glutDisplayFunc(linesegment); //sets the display callback for 	the current window.
	glutMainLoop(); // enters the GLUT event processing loop
return 0;
}
