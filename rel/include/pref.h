/*
 * Mod user preferences, backed by memory card save file
 */

#include <mkb.h>

namespace pref {

void init();
void save();

u8 get_cm_chara();
void set_cm_chara(u8 idx);

bool get_savestates();
void set_savestates(bool on);

bool get_input_disp();
void set_input_disp(bool on);
bool get_input_disp_center_location();
void set_input_disp_center_location(bool on);
u8 get_input_disp_color();
void set_input_disp_color(u8 idx);
bool get_input_disp_notch_indicators();
void set_input_disp_notch_indicators(bool on);

bool get_rta_pause_timer();
void set_rta_pause_timer(bool on);
bool get_iw_timer();
void set_iw_timer(bool on);
bool get_cm_timer();
void set_cm_timer(bool on);

bool get_jump_mod();
void set_jump_mod(bool on);
bool get_9999_banana_counter();
void set_9999_banana_counter(bool on);
bool get_dpad_controls();
void set_dpad_controls(bool on);
bool get_debug_mode();
void set_debug_mode(bool on);
bool get_freeze_timer();
void set_freeze_timer(bool on);

}  // namespace pref