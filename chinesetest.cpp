#include <fltk/Window.h>
#include <fltk/Widget.h>
#include <fltk/Font.h>
#include <fltk/run.h>
#include <stdio.h>
using namespace fltk;
int main(int argc, char **argv) {
/* Font **  arrayp;
 int n = list_fonts(arrayp);
 printf("Number of font items: %d\n", n);
*/
  Window *window = new Window(700, 400);
  window->begin();
  Widget *box = new Widget(20, 40, 300, 200, "Hello, World!\n 中文測試 与えてその");
  box->box(UP_BOX);
  //box->labelfont(HELVETICA_BOLD_ITALIC);
  fltk::Font *f = font("Droid Sans Fallback",  1);
  box->labelfont(f);
  box->labelcolor(0xFF008000);
  box->labelsize(36);
  box->labeltype(SHADOW_LABEL);
  window->end();
  window->show(argc, argv);
  return run();
}
