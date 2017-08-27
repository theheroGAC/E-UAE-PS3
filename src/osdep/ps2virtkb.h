#ifndef _VIRTKB_H_
#define _VIRTKB_H_

#define KB_YPOS 32
#define KB_HEIGHT 32

/* initialize keyboard */
void vkb_init(void);

/* call vkb_redraw to redraw the keyborad (update pixbuf) */
void vkb_redraw(int show); 
/* call vkb_left to shift keybord cursor to left */
void vkb_left(void);
/* call vkb_left to shift keybord cursor to right */
void vkb_right(void);
/* call vkb_press to signal current-key press */
void vkb_press(void);

void vkb_invalidate(void);

void vkb_press_index(int i);
void vkb_release_index(int i);
int  vkb_get_key_index(void);
/*_VIRTKB_H_*/
#endif
