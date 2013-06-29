/*
 * OpenGl.cpp
 *
 *  Created on: Apr 19, 2013
 *      Author: brajahitam
 */

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(void) {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	gluOrtho2D(0.0, 1.0, 1.0, 0.0);

}

void draw(void) {

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.25, 0.0, 0.0);
	glVertex3f(0.25, 0.25, 0.0);
	glVertex3f(0.0, 0.25, 0.0);
	glEnd();
	glFlush();

}

int main(int argc, char **argv) {
	init();
	glutInitWindowPosition(50, 25);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Sample");
	glutDisplayFunc(draw);
	glutMainLoop();
	return 0;
}

