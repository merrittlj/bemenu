/**
 * @file bemenu.h
 *
 * Public header
 */

/**
 * Draw mode constants for setting bmMenu instance draw mode.
 */
typedef enum bmDrawMode {
    BM_DRAW_MODE_NONE
} bmDrawMode;

typedef struct _bmMenu bmMenu;

/**
 * Create new bmMenu instance.
 *
 * @param drawMode Render method to be used for this menu instance.
 * @return bmMenu for new menu instance, NULL if creation failed.
 */
bmMenu* bmMenuNew(bmDrawMode drawMode);

/**
 * Release bmMenu instance.
 *
 * @param menu bmMenu instance to be freed from memory.
 */
void bmMenuFree(bmMenu *menu);

/**
 * Render bmMenu instance using chosen draw method.
 *
 * @param menu bmMenu instance to be rendered.
 */
void bmMenuRender(bmMenu *menu);

/* vim: set ts=8 sw=4 tw=0 :*/
