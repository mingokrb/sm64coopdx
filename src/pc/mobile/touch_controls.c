#include "touch_functions.h"
#include "pc/controller/controller_touchscreen.h"

bool touch_control_is_hidden(enum TouchElement element) {
   if (element < 0 || element >= TOUCH_ELEMENT_COUNT) { return false; }
   return configControlElements[element].hidden;
}

void touch_control_hide(enum TouchElement element) {
   if (element < 0 || element >= TOUCH_ELEMENT_COUNT) { return; }
   configControlElements[element].hidden = true;
}

void touch_control_show(enum TouchElement element) {
   if (element < 0 || element >= TOUCH_ELEMENT_COUNT) { return; }
   configControlElements[element].hidden = false;
}
