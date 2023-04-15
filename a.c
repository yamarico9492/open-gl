#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void display(void)
{
    // 全ピクセルをクリアする.
    glClear(GL_COLOR_BUFFER_BIT);

    // 長方形を描画する.
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex3f(-0.5, -0.25, 0.0);
        glVertex3f(0.5, -0.25, 0.0);
        glVertex3f(0.5, 0.25, 0.0);
        glVertex3f(-0.5, 0.25, 0.0);
    glEnd();

    glFlush();
}

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("rectangle");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}