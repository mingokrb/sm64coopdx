enum TouchElement {
    TOUCH_ELEMENT_STICK,
    TOUCH_ELEMENT_MOUSE,
    TOUCH_ELEMENT_A,
    TOUCH_ELEMENT_B,
    TOUCH_ELEMENT_X,
    TOUCH_ELEMENT_Y,
    TOUCH_ELEMENT_START,
    TOUCH_ELEMENT_L,
    TOUCH_ELEMENT_R,
    TOUCH_ELEMENT_Z,
    TOUCH_ELEMENT_CUP,
    TOUCH_ELEMENT_CDOWN,
    TOUCH_ELEMENT_CLEFT,
    TOUCH_ELEMENT_CRIGHT,
    TOUCH_ELEMENT_CHAT,
    TOUCH_ELEMENT_PLAYERLIST,
    TOUCH_ELEMENT_DUP,
    TOUCH_ELEMENT_DDOWN,
    TOUCH_ELEMENT_DLEFT,
    TOUCH_ELEMENT_DRIGHT,
    TOUCH_ELEMENT_CONSOLE,
    TOUCH_ELEMENT_COUNT,
};

/* |description|Gets the hidden state of a touch control element in `TouchElement`|descriptionEnd| */
bool touch_control_is_hidden(enum TouchElement element);
/* |description|Hides a touch control element in `TouchElement`|descriptionEnd| */
void touch_control_hide(enum TouchElement element);
/* |description|Shows a touch control element in `TouchElement`|descriptionEnd| */
void touch_control_show(enum TouchElement element);
