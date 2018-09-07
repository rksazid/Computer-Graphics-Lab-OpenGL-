#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>


void draw(){
    glClearColor(100,100,100,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,30.0,0.0,30.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(0,0);
        glVertex2f(2,0);
        glVertex2f(6.4,4);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.5,0);
        glVertex2f(4.5,0);
        glVertex2f(8.2,5.5);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(5,0);
        glVertex2f(7,0);
        glVertex2f(9.6,7.5);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(7.5,0);
        glVertex2f(9.5,0);
        glVertex2f(11.2,12.8);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(10,0);
        glVertex2f(15,0);
        glVertex2f(12.5,24);
    glEnd();

// 2nd half
    glBegin(GL_POLYGON);
        glVertex2f(15.5,0);
        glVertex2f(17.5,0);
        glVertex2f(13.8,12.8);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(18,0);
        glVertex2f(20,0);
        glVertex2f(15.5,7.5);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(20.5,0);
        glVertex2f(22.5,0);
        glVertex2f(16.9,5.5);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(23,0);
        glVertex2f(25,0);
        glVertex2f(18.6,4);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
        glVertex2f(11,7);
        glVertex2f(14,7);
        glVertex2f(12.5,13.5);
    glEnd();


    glutSwapBuffers();
}

void keyboard(unsigned char key,int x,int y){
    if(key==27)exit(0);
}




int main(int argc,char ** argv ){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB| GLUT_DOUBLE);
    glutInitWindowSize(600,600);
    glutCreateWindow("Line Segment");
    glutDisplayFunc(draw);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
