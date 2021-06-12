/** @file ui_panel.h
 */

#pragma once

#include <mdo-utils/allocator.h>
#include <mdo-utils/result.h>
#include <wasm.h> /* for script API */

/** @typedef mdo_ui_panel_t
 */
typedef struct mdo_ui_panel_s mdo_ui_panel_t;

/** @function mdo_ui_panel_create
 */
mdo_result_t mdo_ui_panel_create (mdo_ui_panel_t **, const mdo_allocator_t *);

/** @function mdo_ui_panel_delete
 */
void mdo_ui_panel_delete (mdo_ui_panel_t *);

/** @function mdo_ui_panel_set_color
 */
void mdo_ui_panel_set_color (mdo_ui_panel_t *, const float[4]);

/** @function mdo_ui_panel_get_color
 */
void mdo_ui_panel_get_color (mdo_ui_panel_t *, float[4]);

/*******************************************************************************
 * Scripting API
 ******************************************************************************/

/** @function mdo_ui_panel_set_color_cb
 */
wasm_trap_t *mdo_ui_panel_set_color_cb (void *, const wasm_val_vec_t *,
                                        wasm_val_vec_t *);
