/* Autogenerated from machine/dm/dm.md by genmachine */

#include <freewpc.h>

extern void callset_dev_top_sol_enter (void);  /* callset_invoke (dev_top_sol_enter) */
extern void callset_dev_top_sol_kick_attempt (void);  /* callset_invoke (dev_top_sol_kick_attempt) */
extern void callset_dev_top_sol_kick_success (void);  /* callset_invoke (dev_top_sol_kick_success) */
extern void callset_dev_top_sol_kick_failure (void);  /* callset_invoke (dev_top_sol_kick_failure) */
extern void callset_dev_top_sol_empty (void);  /* callset_invoke (dev_top_sol_empty) */
extern void callset_dev_top_sol_surprise_release (void);  /* callset_invoke (dev_top_sol_surprise_release) */
extern bool callset_dev_top_sol_kick_request (void);  /* callset_invoke_boolean (dev_top_sol_kick_request) */
extern void callset_dev_subway_vuk_enter (void);  /* callset_invoke (dev_subway_vuk_enter) */
extern void callset_dev_subway_vuk_kick_attempt (void);  /* callset_invoke (dev_subway_vuk_kick_attempt) */
extern void callset_dev_subway_vuk_kick_success (void);  /* callset_invoke (dev_subway_vuk_kick_success) */
extern void callset_dev_subway_vuk_kick_failure (void);  /* callset_invoke (dev_subway_vuk_kick_failure) */
extern void callset_dev_subway_vuk_empty (void);  /* callset_invoke (dev_subway_vuk_empty) */
extern void callset_dev_subway_vuk_surprise_release (void);  /* callset_invoke (dev_subway_vuk_surprise_release) */
extern bool callset_dev_subway_vuk_kick_request (void);  /* callset_invoke_boolean (dev_subway_vuk_kick_request) */
extern void callset_dev_trough_enter (void);  /* callset_invoke (dev_trough_enter) */
extern void callset_dev_trough_kick_attempt (void);  /* callset_invoke (dev_trough_kick_attempt) */
extern void callset_dev_trough_kick_success (void);  /* callset_invoke (dev_trough_kick_success) */
extern void callset_dev_trough_kick_failure (void);  /* callset_invoke (dev_trough_kick_failure) */
extern void callset_dev_trough_empty (void);  /* callset_invoke (dev_trough_empty) */
extern void callset_dev_trough_surprise_release (void);  /* callset_invoke (dev_trough_surprise_release) */
extern bool callset_dev_trough_kick_request (void);  /* callset_invoke_boolean (dev_trough_kick_request) */
extern void callset_dev_eyeball_eject_enter (void);  /* callset_invoke (dev_eyeball_eject_enter) */
extern void callset_dev_eyeball_eject_kick_attempt (void);  /* callset_invoke (dev_eyeball_eject_kick_attempt) */
extern void callset_dev_eyeball_eject_kick_success (void);  /* callset_invoke (dev_eyeball_eject_kick_success) */
extern void callset_dev_eyeball_eject_kick_failure (void);  /* callset_invoke (dev_eyeball_eject_kick_failure) */
extern void callset_dev_eyeball_eject_empty (void);  /* callset_invoke (dev_eyeball_eject_empty) */
extern void callset_dev_eyeball_eject_surprise_release (void);  /* callset_invoke (dev_eyeball_eject_surprise_release) */
extern bool callset_dev_eyeball_eject_kick_request (void);  /* callset_invoke_boolean (dev_eyeball_eject_kick_request) */

device_ops_t dev_top_sol_ops = {
   .enter = callset_dev_top_sol_enter,
   .kick_attempt = callset_dev_top_sol_kick_attempt,
   .kick_success = callset_dev_top_sol_kick_success,
   .kick_failure = callset_dev_top_sol_kick_failure,
   .empty = callset_dev_top_sol_empty,
   .surprise_release = callset_dev_top_sol_surprise_release,
   .kick_request = callset_dev_top_sol_kick_request,
};

device_ops_t dev_subway_vuk_ops = {
   .enter = callset_dev_subway_vuk_enter,
   .kick_attempt = callset_dev_subway_vuk_kick_attempt,
   .kick_success = callset_dev_subway_vuk_kick_success,
   .kick_failure = callset_dev_subway_vuk_kick_failure,
   .empty = callset_dev_subway_vuk_empty,
   .surprise_release = callset_dev_subway_vuk_surprise_release,
   .kick_request = callset_dev_subway_vuk_kick_request,
};

device_ops_t dev_trough_ops = {
   .enter = callset_dev_trough_enter,
   .kick_attempt = callset_dev_trough_kick_attempt,
   .kick_success = callset_dev_trough_kick_success,
   .kick_failure = callset_dev_trough_kick_failure,
   .empty = callset_dev_trough_empty,
   .surprise_release = callset_dev_trough_surprise_release,
   .kick_request = callset_dev_trough_kick_request,
};

device_ops_t dev_eyeball_eject_ops = {
   .enter = callset_dev_eyeball_eject_enter,
   .kick_attempt = callset_dev_eyeball_eject_kick_attempt,
   .kick_success = callset_dev_eyeball_eject_kick_success,
   .kick_failure = callset_dev_eyeball_eject_kick_failure,
   .empty = callset_dev_eyeball_eject_empty,
   .surprise_release = callset_dev_eyeball_eject_surprise_release,
   .kick_request = callset_dev_eyeball_eject_kick_request,
};

device_properties_t device_properties_table[] = {
[DEVNO_TOP_SOL] = {
   .ops = &dev_top_sol_ops,
   .name = "TOP SOL",
   .sol = SOL_TOP_POPPER,
   .sw_count = 1,
   .init_max_count = 0,
   .settle_delay = TIME_700MS,
   .sw = { SW_TOP_POPPER, },
},
[DEVNO_SUBWAY_VUK] = {
   .ops = &dev_subway_vuk_ops,
   .name = "SUBWAY VUK",
   .sol = SOL_BOTTOM_POPPER,
   .sw_count = 1,
   .init_max_count = 0,
   .settle_delay = TIME_700MS,
   .sw = { SW_BOTTOM_POPPER, },
},
[DEVNO_TROUGH] = {
   .ops = &dev_trough_ops,
   .name = "TROUGH",
   .sol = SOL_BALLSERVE,
   .sw_count = 5,
   .init_max_count = 5,
   .settle_delay = TIME_700MS,
   .sw = { SW_TROUGH_1, SW_TROUGH_2, SW_TROUGH_3, SW_TROUGH_4, SW_TROUGH_5, },
},
[DEVNO_EYEBALL_EJECT] = {
   .ops = &dev_eyeball_eject_ops,
   .name = "EYEBALL EJECT",
   .sol = SOL_EJECT,
   .sw_count = 1,
   .init_max_count = 0,
   .settle_delay = TIME_700MS,
   .sw = { SW_EJECT, },
},
};

