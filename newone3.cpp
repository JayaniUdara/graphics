#include <glut.h>  // OpenGL Utility Toolkit header file
   // OpenGL header file

void display() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear the buffers
  glMatrixMode(GL_PROJECTION);  // Set the matrix mode to projection
  glLoadIdentity();             // Reset the projection matrix
  gluPerspective(45.0, 1.0, 0.1, 100.0); // Set the perspective projection
  glMatrixMode(GL_MODELVIEW);   // Set the matrix mode to modelview
  glLoadIdentity();             // Reset the modelview matrix
  gluLookAt(0.0, 0.0, 5.0,      // Set the camera position
            0.0, 0.0, 0.0,      // Set the point the camera is looking at
            0.0, 1.0, 0.0);     // Set the up direction
  glEnable(GL_LIGHTING);        // Enable lighting
  glEnable(GL_LIGHT0);          // Enable light 0
  GLfloat light_position[] = { 0.0, 1.0, 0.0, 0.0 }; // Define the light position
  glLightfv(GL_LIGHT0, GL_POSITION, light_position); // Set the light position
  GLfloat ambient[] = { 0.2, 0.2, 0.2, 1.0 }; // Define the ambient color
  glLightfv(GL_LIGHT0, GL_AMBIENT, ambient); // Set the ambient color
  GLfloat diffuse[] = { 1.0, 1.0, 1.0, 1.0 }; // Define the diffuse color
  glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse); // Set the diffuse color
  GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 }; // Define the specular color
  glLightfv(GL_LIGHT0, GL_SPECULAR, specular); // Set the specular color
  glutSolidTeapot(1.0);         // Render the teapot object
  glFlush();                    // Flush the buffers
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);           // Initialize GLUT library
  glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);   // Set the display mode
  glutInitWindowSize(500, 500);    // Set the window size
  glutCreateWindow("Teapot Object"); // Set the window title
  glutDisplayFunc(display);        // Set the display callback function
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set the background color
  glEnable(GL_DEPTH_TEST);        // Enable depth testing
  glutMainLoop();                  // Start the main loop
  return 0;
}