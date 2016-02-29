#include<GL/glut.h>

void objeto()
{
	//letra T
	glColor3d(0.4,0.6,0.5);
	glBegin(GL_LINE_LOOP);
		glVertex2f(-0.9,0.8);
		glVertex2f(-0.9,0.7);
		glVertex2f(-0.8,0.7);
		glVertex2f(-0.8,0.5);
		glVertex2f(-0.7,0.5);
		glVertex2f(-0.7,0.7);
		glVertex2f(-0.6,0.7);
		glVertex2f(-0.6,0.8);
	glEnd();

	//letra H
	glColor3d(0.4,0.3,0.4);
	glBegin(GL_LINE_LOOP);
		glVertex2f(-0.55,0.8);
		glVertex2f(-0.55,0.5);
		glVertex2f(-0.45,0.5);
		glVertex2f(-0.45,0.6);
		glVertex2f(-0.35,0.6);
		glVertex2f(-0.35,0.5);
		glVertex2f(-0.25,0.5);
		glVertex2f(-0.25,0.8);
		glVertex2f(-0.35,0.8);
		glVertex2f(-0.35,0.7);
		glVertex2f(-0.45,0.7);
		glVertex2f(-0.45,0.8);
	glEnd();

	//letra A
	glColor3d(0.5,0.7,0.5);
	glBegin(GL_LINE_LOOP);
		glVertex2f(-0.11,0.8);
		glVertex2f(-0.22,0.5);
		glVertex2f(-0.12,0.5);
		glVertex2f(-0.09,0.6);
		glVertex2f(-0.05,0.6);
		glVertex2f(0.0,0.5);
		glVertex2f(0.1,0.5);
		glVertex2f(-0.04,0.8);
		//glVertex2f();
	glEnd();

	//triangulo A
	glColor3d(0.5,0.7,0.5);
	glBegin(GL_LINE_LOOP);
		glVertex2f(-0.09,0.65);
		glVertex2f(-0.05,0.65);
		glVertex2f(-0.07,0.7);
	glEnd();

	//letra L
	glColor3d(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(0.15,0.8);
		glVertex2f(0.15,0.5);
		glVertex2f(0.35,0.5);
		glVertex2f(0.35,0.58);
		glVertex2f(0.22,0.58);
		glVertex2f(0.22,0.8);
	glEnd();
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glColor3d(1,0,0); // define a cor do objeto
    objeto(); // desenhaobjeto
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    //glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("Exercicio 1 - Desenhar as 4 primeiras letras do nome!");


    glutDisplayFunc(display);

    glClearColor(1,1,1,1);
    glutMainLoop();

    return EXIT_SUCCESS;
}