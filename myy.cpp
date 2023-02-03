#include <glut.h>

void display(void)
{
  glClear(GL_COLOR_BUFFER_BIT);

  static float angle = 0.0f;
  angle += 0.1f;

  glPushMatrix();
  glRotatef(angle, 0.0f, 0.0f, 1.0f);
  glBegin(GL_POLYGON);
  glColor3f(0.2, 0.3, 0.3); 
  glVertex2f(0.0f, 0.0f);
  glVertex2f( 0.25f, 0.5f);
  glVertex2f( 0.0f,  1.0f);
  glVertex2f( -0.25f,  0.5f);
  glEnd();
  glBegin(GL_POLYGON);
  glColor3f(0.2, 0.3, 0.3); 
  glVertex2f(0.0f, 0.0f);
  glVertex2f( -0.5f, -0.75f);
  glVertex2f( -1.0f,  -0.25f);
  glVertex2f( -0.5f,  -0.5f);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex2f(0.0f, 0.0f);
  glVertex2f( 0.5f, -0.75f);
  glVertex2f( 1.0f,  -0.25f);
  glVertex2f( 0.5f,  -0.5f);
  glEnd();
  glPopMatrix();

  glutSwapBuffers();
}

void idle(void)
{
  glutPostRedisplay();
}

int main(int argc, char *argv[])
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize(500, 500);
  glutCreateWindow("Animation Example");
  glutDisplayFunc(display);
 glutIdleFunc(idle);
  glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
  glutMainLoop();
  return 0;
}