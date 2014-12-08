
/* This file was autogenerated by 'ctemp' from  for class jet+ spsol. */


#include <freewpc.h>
#include <left_jet.h>

/** We keep two bitarrays to track all special solenoids.
 * The 'enables' are software controlled and allow the
 * solenoids to be disabled.  The 'running' entries say
 * for each coil whether it is in its on or off phase. */

__fastram__ U8 jet_enables;
__fastram__ U8 jet_running;

/* The time until the current phase expires */
__fastram__ U8 left_jet_timer;

/* Enable the device */
void left_jet_enable (void)
{
	jet_enables |= (1 << 0);
}

/* Disable the device */
void left_jet_disable (void)
{
	jet_enables &= ~(1 << 0);
}

/* Initialize the device */
CALLSET_ENTRY (left_jet, init)
{
	left_jet_timer = 0;
	left_jet_disable ();
}

/* Enable the device at start ball */
CALLSET_ENTRY (left_jet, start_ball)
{
#if 1
	left_jet_enable ();
#endif
}

/* Disable the device at end ball/stop game/tilt */
CALLSET_ENTRY (left_jet, end_ball, stop_game, tilt)
{
	left_jet_disable ();
}

/* vim: set filetype=c: */