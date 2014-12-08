#ifndef _MACH_CONFIG_H
#define _MACH_CONFIG_H
/* Definitions of scores */
#define SC_540 0
#define SC_1010 1
#define SC_5K 2
#define SC_5770 3
#define SC_10K 4
#define SC_25K 5
#define SC_50K 6
#define SC_75K 7
#define SC_100K 8
#define SC_150K 9
#define SC_200K 10
#define SC_250K 11
#define SC_500K 12
#define SC_750K 13
#define SC_1M 14
#define SC_2M 15
#define SC_3M 16
#define SC_4M 17
#define SC_5M 18
#define SC_6M 19
#define SC_7M 20
#define SC_8M 21
#define SC_9M 22
#define SC_10M 23
#define SC_11M 24
#define SC_12M 25
#define SC_13M 26
#define SC_15M 27
#define SC_20M 28
#define SC_25M 29
#define SC_30M 30
#define SC_35M 31
#define SC_40M 32
#define SC_45M 33
#define SC_50M 34
#define SC_100M 35
#define NUM_SCORES 36

/* Definitions of deffs */
#define DEFF_NULL 0
#define DEFF_AMODE 1
#define DEFF_SCORES 2
#define DEFF_SCORES_IMPORTANT 3
#define DEFF_SCORE_GOAL 4
#define DEFF_CREDITS 5
#define DEFF_TILT_WARNING 6
#define DEFF_TILT 7
#define DEFF_VOLUME_CHANGE 8
#define DEFF_SLAM_TILT 9
#define DEFF_STATUS_REPORT 10
#define DEFF_NONFATAL_ERROR 11
#define DEFF_HSENTRY 12
#define DEFF_HSCREDITS 13
#define DEFF_LOCATING_BALLS 14
#define DEFF_PLAYER_TOURNAMENT_READY 15
#define DEFF_SYSTEM_RESET 16
#define DEFF_COIN_DOOR_BUTTONS 17
#define DEFF_PLUNGE_BALL 18
#define DEFF_COIN_DOOR_POWER 19
#define DEFF_BALL_SAVE 20
#define DEFF_SHOOT_AGAIN 21
#define DEFF_DM_GAME_OVER 22
#define DEFF_BALLSEARCH 23
#define DEFF_ENTER_INITIALS 24
#define DEFF_CLW_INLANES_EFFECT 25
#define DEFF_QF_INLANES_EFFECT 26
#define DEFF_COMBO_EFFECT 27
#define DEFF_SKILLSHOT 28
#define DEFF_ROLLOVERS_EFFECT 29
#define DEFF_ALL_ROLLOVERS_EFFECT 30
#define DEFF_JETS_EFFECT 31
#define DEFF_JETS_COMPLETED_EFFECT 32
#define DEFF_STANDUPFRENZY_START_EFFECT 33
#define DEFF_STANDUPFRENZY_EFFECT 34
#define DEFF_STANDUP_EFFECT 35
#define DEFF_EXPLODE_START_EFFECT 36
#define DEFF_EXPLODE_EFFECT 37
#define DEFF_EXPLODE_HIT_EFFECT 38
#define DEFF_CAR_CHASE_START_EFFECT 39
#define DEFF_CAR_CHASE_EFFECT 40
#define DEFF_CAR_CHASE_HIT_EFFECT 41
#define DEFF_CARCRASH_EFFECT 42
#define DEFF_UNDERGROUND_EFFECT 43
#define DEFF_COMPUTER_AWARD 44
#define DEFF_CRYOCLAW_EFFECT 45
#define DEFF_BONUS 46
#define DEFF_CAPTURE_SIMON_START_EFFECT 47
#define DEFF_CAPTURE_SIMON_EFFECT 48
#define DEFF_CAPTURE_SIMON_HIT_EFFECT 49
#define DEFF_CAPTURE_SIMON_END_EFFECT 50
#define DEFF_FREEZE_EFFECT 51
#define DEFF_PRISON_BREAK_START_EFFECT 52
#define DEFF_PRISON_BREAK_EFFECT 53
#define DEFF_PRISON_BREAK_HIT_EFFECT 54
#define DEFF_FORTRESS_START_EFFECT 55
#define DEFF_FORTRESS_JACKPOT_EFFECT 56
#define DEFF_FORTRESS_EFFECT 57
#define DEFF_FORTRESS_SUPER_JACKPOT 58
#define DEFF_WASTELAND_START_EFFECT 59
#define DEFF_WASTELAND_JACKPOT_EFFECT 60
#define DEFF_WASTELAND_EFFECT 61
#define DEFF_WASTELAND_SUPER_JACKPOT 62
#define DEFF_ACMAG_START_EFFECT 63
#define DEFF_ACMAG_EFFECT 64
#define DEFF_ACMAG_HIT_EFFECT 65
#define DEFF_LASER_SHOT 66
#define DEFF_SUPERJETS_EFFECT 67
#define DEFF_EXTRA_BALL_EFFECT 68
#define DEFF_EJECT_EFFECT 69
#define DEFF_KABOOM 70
#define DEFF_KABOOM_ABORT 71
#define DEFF_KABOOM_INTRO 72
#define DEFF_KABOOM_END 73
#define DEFF_SHOOTER 74
#define DEFF_SHOOTER_ABORT 75
#define DEFF_SHOOTER_INTRO 76
#define DEFF_SHOOTER_END 77
#define DEFF_SIMON_SAYS 78
#define DEFF_SIMON_SAYS_INTRO 79
#define DEFF_SIMON_SAYS_RUNNER 80
#define DEFF_SIMON_SAYS_READY 81
#define DEFF_SIMON_SAYS_WRONG 82
#define DEFF_SIMON_SAYS_ABORT 83
#define DEFF_SIMON_SAYS_WATCH 84
#define DEFF_SIMON_SAYS_INDY 85
#define DEFF_SIMON_SAYS_END 86
#define DEFF_TOP_POPPER_EFFECT 87
#define DEFF_EYEBALL_EFFECT 88
#define DEFF_STARTUP_EFFECT 89
#define DEFF_MUSEUM_START_EFFECT 90
#define DEFF_MUSEUM_JACKPOT_EFFECT 91
#define DEFF_MUSEUM_EFFECT 92
#define DEFF_MUSEUM_SUPER_JACKPOT 93
#define DEFF_CRYOPRISON_START_EFFECT 94
#define DEFF_CRYOPRISON_JACKPOT_EFFECT 95
#define DEFF_CRYOPRISON_EFFECT 96
#define DEFF_CRYOPRISON_SUPER_JACKPOT 97
#define DEFF_DEMOTIME_START_EFFECT 98
#define DEFF_DEMOTIME_JACKPOT_EFFECT 99
#define DEFF_DEMOTIME_INFO_EFFECT 100
#define DEFF_DEMOTIME_EFFECT 101
#define DEFF_HUXLEY_INFO_EFFECT 102
#define DEFF_HUXLEY_START_EFFECT 103
#define DEFF_HUXLEY_EFFECT 104
#define DEFF_HUXLEY_HIT_EFFECT 105
#define DEFF_BITF_START_EFFECT 106
#define DEFF_BITF_HIT_EFFECT 107
#define DEFF_BITF_INFO_EFFECT 108
#define DEFF_BITF_EFFECT 109
#define DEFF_BITF_END_EFFECT 110
#define MAX_DEFFS 111

/* Definitions of adjustments */
#define NUM_FEATURE_ADJUSTMENTS 0

/* Definitions of containers */
#define DEVNO_TOP_SOL 0
#define DEVNO_SUBWAY_VUK 1
#define DEVNO_TROUGH 2
#define DEVNO_EYEBALL_EJECT 3
#define NUM_DEVICES 4

/* Definitions of flags */
extern U8 FLAG_IS_LRAMP_QUICKFREEZE_ACTIVATED;
extern U8 FLAG_IS_COMPUTER_ACTIVATED;
extern U8 FLAG_IS_EXTRABALL_LIT;
extern U8 FLAG_IS_MULTIBALL_ENABLED;
extern U8 FLAG_IS_R_RAMP_CLAWREADY;
extern U8 FLAG_IS_DEMOTIME_ENABLED;
extern U8 FLAG_BACK_IN_THE_FRIDGE_ACTIVATED;
extern U8 FLAG_VIDEO_MODE_ENABLED;
extern U8 FLAG_IS_CARCHASE_MODE_ENABLED;
extern U8 FLAG_IS_EXPLODE_MODE_ENABLED;
extern U8 FLAG_IS_HUXLEY_ENABLED;
extern U8 FLAG_IS_CC3_LIT;
extern U8 FLAG_IS_CC6_LIT;
extern U8 FLAG_IS_CC10_LIT;
extern U8 FLAG_IS_QUICK_FREEZE_ACTIVATED;
extern U8 FLAG_IS_ACCESS_CLAW_ACTIVATED;
extern U8 FLAG_IS_EYEBALL_EB_MADE;
extern U8 FLAG_LASER_SHOT_ENABLED;
extern U8 FLAG_VIDEO_MODE_RUNNING;
extern U8 FLAG_IS_COMBO_SIDERAMP_ACTIVATED;
extern U8 FLAG_IS_COMBO_LEFTRAMP_ACTIVATED;
extern U8 FLAG_IS_COMBO_RIGHTRAMP_ACTIVATED;
extern U8 FLAG_IS_COMBO_UNDER_ACTIVATED;
extern U8 FLAG_IS_COMBO_CENTERRAMP_ACTIVATED;
extern U8 FLAG_IS_COMBO_LEFTORB_ACTIVATED;
extern U8 FLAG_IS_COMBO_RIGHTORB_ACTIVATED;
extern U8 FLAG_IS_UGROUND_ARROW_ACTIVATED;
extern U8 FLAG_IS_L_LOOP_ARROW_ACTIVATED;
extern U8 FLAG_IS_R_LOOP_ARROW_ACTIVATED;
extern U8 FLAG_IS_L_RAMP_ARROW_ACTIVATED;
extern U8 FLAG_IS_C_RAMP_ARROW_ACTIVATED;
extern U8 FLAG_IS_S_RAMP_ARROW_ACTIVATED;
extern U8 FLAG_IS_R_RAMP_ARROW_ACTIVATED;
#define MAX_FLAGS 33

/* Definitions of globalflags */
extern U8 GLOBAL_FLAG_BALL_AT_PLUNGER;
extern U8 GLOBAL_FLAG_COIN_DOOR_OPENED;
extern U8 GLOBAL_FLAG_IS_BALL_ON_CLAW;
extern U8 GLOBAL_FLAG_IS_CLAW_HOME;
#define MAX_GLOBAL_FLAGS 4

/* Definitions of switches */
#define SW_LEFT_COIN 0
#define SW_CENTER_COIN 1
#define SW_RIGHT_COIN 2
#define SW_FOURTH_COIN 3
#define SW_ESCAPE 4
#define SW_DOWN 5
#define SW_UP 6
#define SW_ENTER 7
#define SW_LAUNCH_BUTTON 8
#define SW_LEFT_HANDLE_BUTTON 9
#define SW_START_BUTTON 10
#define SW_TILT 11
#define SW_LEFT_OUTLANE 12
#define SW_LEFT_INLANE 13
#define SW_RIGHT_INLANE 14
#define SW_RIGHT_OUTLANE 15
#define SW_SLAM_TILT 16
#define SW_COIN_DOOR_CLOSED 17
#define SW_BUYIN_BUTTON 18
#define SW_ALWAYS_CLOSED 19
#define SW_CLAW_POSITION_1 20
#define SW_CLAW_POSITION_2 21
#define SW_SHOOTER 22
#define SW_NOT_USED_1 23
#define SW_TROUGH_1 24
#define SW_TROUGH_2 25
#define SW_TROUGH_3 26
#define SW_TROUGH_4 27
#define SW_TROUGH_5 28
#define SW_TROUGH_JAM 29
#define SW_NOT_USED_2 30
#define SW_STANDUP_5 31
#define SW_LEFT_SLING 32
#define SW_RIGHT_SLING 33
#define SW_LEFT_JET 34
#define SW_TOP_SLING 35
#define SW_RIGHT_JET 36
#define SW_RIGHT_RAMP_ENTER 37
#define SW_RIGHT_RAMP_EXIT 38
#define SW_RIGHT_FREEWAY 39
#define SW_LEFT_RAMP_ENTER 40
#define SW_LEFT_RAMP_EXIT 41
#define SW_CENTER_RAMP 42
#define SW_UPPER_REBOUND 43
#define SW_LEFT_LOOP 44
#define SW_STANDUP_2 45
#define SW_STANDUP_3 46
#define SW_STANDUP_4 47
#define SW_SIDE_RAMP_ENTER 48
#define SW_SIDE_RAMP_EXIT 49
#define SW_LEFT_ROLLOVER 50
#define SW_CENTER_ROLLOVER 51
#define SW_RIGHT_ROLLOVER 52
#define SW_EJECT 53
#define SW_ELEVATOR_INDEX 54
#define SW_NOT_USED_3 55
#define SW_CHASE_CAR_1 56
#define SW_CHASE_CAR_2 57
#define SW_TOP_POPPER 58
#define SW_ELEVATOR_HOLD 59
#define SW__NOT_USED_4 60
#define SW_BOTTOM_POPPER 61
#define SW_EYEBALL_STANDUP 62
#define SW_STANDUP_1 63
#define SW_CLAW_CAPTURE_SIMON 64
#define SW_CLAW_SUPER_JETS 65
#define SW_CLAW_PRISON_BREAK 66
#define SW_CLAW_FREEZE 67
#define SW_CLAW_ACMAG 68
#define SW_UPPER_LEFT_FLIPPER_GATE 69
#define SW_CAR_CHASE_STANDUP 70
#define SW_LOWER_REBOUND 71
#define SW_L_R_FLIPPER_EOS 72
#define SW_L_R_FLIPPER_BUTTON 73
#define SW_L_L_FLIPPER_EOS 74
#define SW_L_L_FLIPPER_BUTTON 75
#define SW_U_R_FLIPPER_EOS 76
#define SW_U_R_FLIPPER_BUTTON 77
#define SW_U_L_FLIPPER_EOS 78
#define SW_U_L_FLIPPER_BUTTON 79

/* Definitions of audits */
#define NUM_FEATURE_AUDITS 0

/* Definitions of lamps */
#define LM_CHEST_PLATE 0
#define LM_FORTRESS_MULTIBALL 1
#define LM_MUSEUM_MULTIBALL 2
#define LM_CRYOPRISON_MULTIBALL 3
#define LM_WASTELAND_MULTIBALL 4
#define LM_SHOOT_AGAIN 5
#define LM_ACCESS_CLAW 6
#define LM_LEFT_RAMP_EXPLODE 7
#define LM_RIGHT_RAMP_JACKPOT 8
#define LM_RIGHT_LOOP_EXPLODE 9
#define LM_LIGHT_QUICK_FREEZE 10
#define LM_FREEZE_4 11
#define LM_CLAW_READY 12
#define LM_FREEZE_3 13
#define LM_FREEZE_2 14
#define LM_FREEZE_1 15
#define LM_RIGHT_LOOP_JACKPOT 16
#define LM_STANDUP_5 17
#define LM_RIGHT_RAMP_ARROW 18
#define LM_LEFT_RAMP_JACKPOT 19
#define LM_LEFT_LOOP_JACKPOT 20
#define LM_CAR_CRASH_TOP 21
#define LM_STANDUP_1 22
#define LM_CAR_CRASH_CENTER 23
#define LM_RIGHT_RAMP_EXPLODE 24
#define LM_RIGHT_RAMP_CAR_CHASE 25
#define LM_QUICK_FREEZE 26
#define LM_LEFT_RAMP_CAR_CHASE 27
#define LM_EXTRA_BALL 28
#define LM_START_MULTIBALL 29
#define LM_CAR_CRASH_BOTTOM 30
#define LM_LEFT_LOOP_EXPLODE 31
#define LM_UNDERGROUND_ARROW 32
#define LM_UNDERGROUND_JACKPOT 33
#define LM_STANDUP_2 34
#define LM_LEFT_RAMP_ARROW 35
#define LM_SIDE_RAMP_JACKPOT 36
#define LM_SIDE_RAMP_ARROW 37
#define LM_LEFT_LOOP_ARROW 38
#define LM_CENTER_RAMP_JACKPOT 39
#define LM_CLAW_CAPTURE_SIMON 40
#define LM_CLAW_SUPER_JETS 41
#define LM_CLAW_PRISON_BREAK 42
#define LM_CLAW_FREEZE 43
#define LM_CLAW_ACMAG 44
#define LM_MIDDLE_ROLLOVER 45
#define LM_TOP_ROLLOVER 46
#define LM_LOWER_ROLLOVER 47
#define LM_SUPER_JACKPOT 48
#define LM_COMPUTER 49
#define LM_DEMO_TIME 50
#define LM_NOT_USED_1 51
#define LM_NOT_USED_2 52
#define LM_STANDUP_4 53
#define LM_STANDUP_3 54
#define LM_RETINA_SCAN 55
#define LM_CENTER_RAMP_MIDDLE 56
#define LM_CENTER_RAMP_OUTER 57
#define LM_CENTER_RAMP_INNER 58
#define LM_CENTER_RAMP_ARROW 59
#define LM_RIGHT_LOOP_ARROW 60
#define LM_BUY_IN_BUTTON 61
#define LM_BALL_LAUNCH 62
#define LM_START_BUTTON 63

/* Definitions of fonts */
#define FON_MONO9 0
#define FON_TINYNUM 1
#define FON_VAR5 2
#define FON_FIXED6 3
#define FON_FIXED10 4
#define FON_TERM6 5
#define FON_SYMBOL 6
#define FON_BITMAP8 7
#define FON_MONO5 8
#define FON_LUCIDA9 9
#define FON_BITCUBE10 10
#define FON_HALOBOLD12 11
#define FON_HALOBOLD14 12
#define FON_DMGRAPHS 13
#define FON_HALOBOLD22NUM 14
#define MAX_FONTS 15

/* Definitions of lamplists */
#define LAMPLIST_ALL 0
#define LAMPLIST_BALL_SAVE 1
#define LAMPLIST_RIGHT_RAMP_AWARDS 2
#define LAMPLIST_LEFT_RAMP_AWARDS 3
#define LAMPLIST_RIGHT_LOOP_AWARDS 4
#define LAMPLIST_LEFT_LOOP_AWARDS 5
#define LAMPLIST_FREEZE 6
#define LAMPLIST_ROLLOVERS 7
#define LAMPLIST_MULTIBALLS 8
#define LAMPLIST_CLAW 9
#define LAMPLIST_UNDERGROUND_SCOOP 10
#define LAMPLIST_STANDUPS 11
#define LAMPLIST_CENTER_RAMP 12
#define LAMPLIST_SIDE_RAMP 13
#define LAMPLIST_INLANES 14
#define LAMPLIST_CAR_CRASH 15
#define LAMPLIST_AMODE_ALL 16
#define LAMPLIST_LEFT_RIGHT 17
#define LAMPLIST_RIGHT_LEFT 18
#define LAMPLIST_BOTTOM_TOP 19
#define LAMPLIST_TOP_BOTTOM 20
#define LAMPLIST_CIRCLE_OUT1 21
#define LAMPLIST_CIRCLE_OUT2 22
#define LAMPLIST_CIRCLE_OUT3 23
#define LAMPLIST_CIRCLE_OUT4 24
#define LAMPLIST_CIRCLE_OUT5 25
#define LAMPLIST_RED_LAMPS 26
#define LAMPLIST_WHITE_LAMPS 27
#define LAMPLIST_YELLOW_LAMPS 28
#define MAX_LAMPLIST 29

/* Definitions of leffs */
#define LEFF_NULL 0
#define LEFF_AMODE 1
#define LEFF_TILT_WARNING 2
#define LEFF_TILT 3
#define LEFF_BALL_SAVE 4
#define LEFF_EXTRABALL 5
#define LEFF_TOP_POPPER 6
#define LEFF_EJECT 7
#define LEFF_FLASH_ALL 8
#define LEFF_BOT2TOP 9
#define LEFF_TOP2BOT 10
#define LEFF_RIGHT2LEFT 11
#define LEFF_LEFT2RIGHT 12
#define LEFF_NO_GI_ONESEC 13
#define LEFF_NO_GI_TWOSEC 14
#define LEFF_TURN_OFF_GI 15
#define LEFF_FLASH_GI 16
#define LEFF_FLASH_UL_GI 17
#define LEFF_FLASH_UR_GI 18
#define LEFF_FLASH_LL_GI 19
#define LEFF_FLASH_LR_GI 20
#define LEFF_FRENZY1 21
#define LEFF_FRENZY2 22
#define LEFF_FRENZY3 23
#define LEFF_FRENZY4 24
#define LEFF_FRENZY5 25
#define LEFF_LEFT_RAMP 26
#define LEFF_RIGHT_RAMP 27
#define LEFF_CENTER_RAMP 28
#define LEFF_SIDE_RAMP 29
#define LEFF_RAMP_QUICKFREEZE 30
#define LEFF_RAMP_CLAWREADY 31
#define LEFF_LOWER_REBOUND 32
#define LEFF_UPPER_REBOUND 33
#define LEFF_ORBITS_RUNNER 34
#define LEFF_FREEZE 35
#define LEFF_CAR_CHASE 36
#define LEFF_ACMAG 37
#define LEFF_EXPLODE 38
#define LEFF_CLAW 39
#define LEFF_MB_START 40
#define LEFF_INLANE_QUICK_FREEZE 41
#define LEFF_INLANE_CRYOCLAW 42
#define LEFF_UNDERGROUND 43
#define LEFF_COMPUTER_AWARD 44
#define LEFF_EYEBALL 45
#define LEFF_JACKPOT 46
#define LEFF_JACKPOT1 47
#define LEFF_JACKPOT2 48
#define LEFF_JACKPOT3 49
#define LEFF_JACKPOT4 50
#define LEFF_SUPER_JACKPOT 51
#define LEFF_SKILLSHOT 52
#define LEFF_CAR_CRASH_RUNNER 53
#define MAX_LEFFS 54

/* Definitions of gi */
#define GI_BACKBOX TRIAC_GI_STRING(0)
#define GI_URIGHT_PLAYFIELD TRIAC_GI_STRING(1)
#define GI_ULEFT_PLAYFIELD TRIAC_GI_STRING(2)
#define GI_LRIGHT_PLAYFIELD TRIAC_GI_STRING(3)
#define GI_LLEFT_PLAYFIELD TRIAC_GI_STRING(4)

/* Definitions of drives */
#define SOL_BALLSERVE 0
#define SOL_BOTTOM_POPPER 1
#define SOL_LAUNCH 2
#define SOL_TOP_POPPER 3
#define SOL_DIVERTER_POWER 4
#define SOL_NOT_USED_H6_50V 5
#define SOL_KNOCKER 6
#define SOL_NOT_USED_H8_50V 7
#define SOL_LEFT_SLING 8
#define SOL_RIGHT_SLING 9
#define SOL_LEFT_JET 10
#define SOL_TOP_SLING 11
#define SOL_RIGHT_JET 12
#define SOL_EJECT 13
#define SOL_DIVERTER_HOLD 14
#define SOL__NOT_USED_L8_50V 15
#define FLASH_CLAW_FLASHER 16
#define SOL_ELEVATOR_MOTOR 17
#define SOL_CLAW_LEFT 18
#define SOL_CLAW_RIGHT 19
#define FLASH_JETS_FLASHER 20
#define FLASH_SIDE_RAMP 21
#define FLASH_LEFT_RAMP_UP 22
#define FLASH_LEFT_RAMP_LOWER 23
#define SOL_SHAKER_MOTOR 24
#define FLASH_CAR_CHASE_LOWER 25
#define FLASH_RIGHT_RAMP 26
#define FLASH_EJECT_FL 27
#define SOL_LR_FLIP_POWER 32
#define SOL_LR_FLIP_HOLD 33
#define SOL_LL_FLIP_POWER 34
#define SOL_LL_FLIP_HOLD 35
#define SOL_CLAW_MAGNET 36
#define SOL_NOT_USED 37
#define SOL_UL_FLIP_POWER 38
#define SOL_UL_FLIP_HOLD 39
#define FLASH_CAR_CHASE_UPPER 40
#define FLASH_LOWER_REBOUND 41
#define FLASH_EYEBALL 42
#define FLASH_CENTER_RAMP 43
#define FLASH_ELEVATOR_2 44
#define FLASH_ELEVATOR_1 45
#define FLASH_DIVERTER_FLASHER 46
#define FLASH_RIGHT_RAMP_UP 47
#define NUM_POWER_DRIVES 48

/* Definitions of timers */
#define MAX_TIMERS 0

/* Extra defines */
#define MACHINE_DEMO_MAN
#define MACHINE_HAS_FLIPPER_GUN_HANDLES
#define MACHINE_HAS_UPPER_LEFT_FLIPPER
#define MACHINE_SOL_EXTBOARD1
#define MACHINE_BALL_SAVE_TIME       7
#define MACHINE_MAX_BALLS            5
#define AUTOFIRE_DELAY 				20
#define MACHINE_BALL_SEARCH_TIME 	10
#define MACHINE_ADD_CREDIT_SOUND PLONK
#define CONFIG_DIFFICULTY_LEVEL
#define DEVELOPMENT_MENU
#define LOWER_IMAGE_BRIGHTNESS2
#define COIN_DOOR_OPENED_TIMERS_OFF
#define DM_IN_DMD_TEST FALSE
#define DM_IN_CAB_TEST FALSE
#define TROUGH_TEST FALSE

/* Global configuration */
#define MACHINE_NAME "DEMOLITION TIME"
#define MACHINE_ALPHANUMERIC 0
#define MACHINE_DMD 1
#define MACHINE_FLIPTRONIC 1
#define MACHINE_DCS 1
#define MACHINE_WPC95 0
#define MACHINE_PIC 0
#define MACHINE_SHOOTER_SWITCH SW_SHOOTER
#define MACHINE_TILT_SWITCH SW_TILT
#define MACHINE_SLAM_TILT_SWITCH SW_SLAM_TILT
#define MACHINE_START_SWITCH SW_START_BUTTON
#define MACHINE_BUYIN_SWITCH SW_BUYIN_BUTTON
#define MACHINE_LAUNCH_SWITCH SW_LAUNCH_BUTTON
#undef MACHINE_OUTHOLE_SWITCH
#define MACHINE_START_LAMP LM_START_BUTTON
#define MACHINE_LAUNCH_LAMP LM_BALL_LAUNCH
#define MACHINE_BUYIN_LAMP LM_BUY_IN_BUTTON
#define MACHINE_SHOOT_AGAIN_LAMP LM_SHOOT_AGAIN
#define MACHINE_BALL_SAVE_LAMP LM_CHEST_PLATE
#define MACHINE_EXTRA_BALL_LAMP LM_EXTRA_BALL
#define MACHINE_LAUNCH_SOLENOID SOL_LAUNCH
#define MACHINE_KNOCKER_SOLENOID SOL_KNOCKER
#define MACHINE_BALL_SERVE_SOLENOID SOL_BALLSERVE
#define MACHINE_TROUGH_SIZE 0
#define MACHINE_SOL_FLASHERP(sol) (\
   ((sol) == FLASH_CLAW_FLASHER) || \
   ((sol) == FLASH_JETS_FLASHER) || \
   ((sol) == FLASH_SIDE_RAMP) || \
   ((sol) == FLASH_LEFT_RAMP_UP) || \
   ((sol) == FLASH_LEFT_RAMP_LOWER) || \
   ((sol) == FLASH_CAR_CHASE_LOWER) || \
   ((sol) == FLASH_RIGHT_RAMP) || \
   ((sol) == FLASH_EJECT_FL) || \
   ((sol) == FLASH_CAR_CHASE_UPPER) || \
   ((sol) == FLASH_LOWER_REBOUND) || \
   ((sol) == FLASH_EYEBALL) || \
   ((sol) == FLASH_CENTER_RAMP) || \
   ((sol) == FLASH_ELEVATOR_2) || \
   ((sol) == FLASH_ELEVATOR_1) || \
   ((sol) == FLASH_DIVERTER_FLASHER) || \
   ((sol) == FLASH_RIGHT_RAMP_UP) || \
0)

#define MACHINE_SOLENOID_P(sol) (\
   ((sol) == SOL_BALLSERVE) || \
   ((sol) == SOL_BOTTOM_POPPER) || \
   ((sol) == SOL_LAUNCH) || \
   ((sol) == SOL_TOP_POPPER) || \
   ((sol) == SOL_DIVERTER_POWER) || \
   ((sol) == SOL_NOT_USED_H6_50V) || \
   ((sol) == SOL_KNOCKER) || \
   ((sol) == SOL_NOT_USED_H8_50V) || \
   ((sol) == SOL_LEFT_SLING) || \
   ((sol) == SOL_RIGHT_SLING) || \
   ((sol) == SOL_LEFT_JET) || \
   ((sol) == SOL_TOP_SLING) || \
   ((sol) == SOL_RIGHT_JET) || \
   ((sol) == SOL_EJECT) || \
   ((sol) == SOL_DIVERTER_HOLD) || \
   ((sol) == SOL__NOT_USED_L8_50V) || \
   ((sol) == SOL_ELEVATOR_MOTOR) || \
   ((sol) == SOL_CLAW_LEFT) || \
   ((sol) == SOL_CLAW_RIGHT) || \
   ((sol) == SOL_SHAKER_MOTOR) || \
   ((sol) == SOL_LR_FLIP_POWER) || \
   ((sol) == SOL_LR_FLIP_HOLD) || \
   ((sol) == SOL_LL_FLIP_POWER) || \
   ((sol) == SOL_LL_FLIP_HOLD) || \
   ((sol) == SOL_CLAW_MAGNET) || \
   ((sol) == SOL_NOT_USED) || \
   ((sol) == SOL_UL_FLIP_POWER) || \
   ((sol) == SOL_UL_FLIP_HOLD) || \
0)

#define MACHINE_SOL_NOSEARCHP(sol) (\
   ((sol) == SOL_LAUNCH) || \
   ((sol) == SOL_NOT_USED_H6_50V) || \
   ((sol) == SOL_KNOCKER) || \
   ((sol) == SOL_NOT_USED_H8_50V) || \
   ((sol) == SOL_DIVERTER_HOLD) || \
   ((sol) == SOL__NOT_USED_L8_50V) || \
   ((sol) == FLASH_CLAW_FLASHER) || \
   ((sol) == SOL_ELEVATOR_MOTOR) || \
   ((sol) == SOL_CLAW_LEFT) || \
   ((sol) == SOL_CLAW_RIGHT) || \
   ((sol) == FLASH_JETS_FLASHER) || \
   ((sol) == FLASH_SIDE_RAMP) || \
   ((sol) == FLASH_LEFT_RAMP_UP) || \
   ((sol) == FLASH_LEFT_RAMP_LOWER) || \
   ((sol) == SOL_SHAKER_MOTOR) || \
   ((sol) == FLASH_CAR_CHASE_LOWER) || \
   ((sol) == FLASH_RIGHT_RAMP) || \
   ((sol) == FLASH_EJECT_FL) || \
   ((sol) == SOL_NOT_USED) || \
   ((sol) == FLASH_CAR_CHASE_UPPER) || \
   ((sol) == FLASH_LOWER_REBOUND) || \
   ((sol) == FLASH_EYEBALL) || \
   ((sol) == FLASH_CENTER_RAMP) || \
   ((sol) == FLASH_ELEVATOR_2) || \
   ((sol) == FLASH_ELEVATOR_1) || \
   ((sol) == FLASH_DIVERTER_FLASHER) || \
   ((sol) == FLASH_RIGHT_RAMP_UP) || \
0)

typedef struct {
} feature_adj_t;

#define MACHINE_FEATURE_ADJUSTMENTS \


#define MACHINE_FEATURE_AUDIT_MEMBERS \

#define MACHINE_FEATURE_AUDITS \


#define MACHINE_LAMP_EFFECTS \
   DECL_LEFF (LEFF_NULL, L_NORMAL, PRI_NULL, 0, 0, null_leff, -1) \
   DECL_LEFF (LEFF_AMODE, L_RUNNING, PRI_LEFF1, LAMPLIST_AMODE_ALL, L_ALL_GI, amode_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_TILT_WARNING, L_NORMAL, PRI_TILT, 0, L_ALL_GI, tilt_warning_leff, COMMON_PAGE) \
   DECL_LEFF (LEFF_TILT, L_RUNNING, PRI_TILT, L_ALL_LAMPS, L_ALL_GI, no_lights_leff, COMMON_PAGE) \
   DECL_LEFF (LEFF_BALL_SAVE, L_SHARED, PRI_LEFF3, LAMPLIST_BALL_SAVE, 0, ball_save_leff, COMMON_PAGE) \
   DECL_LEFF (LEFF_EXTRABALL, L_NORMAL, PRI_LEFF3, LAMPLIST_AMODE_ALL, 0, extraball_leff, MACHINE3_PAGE) \
   DECL_LEFF (LEFF_TOP_POPPER, L_SHARED, PRI_LEFF2, 0, 0, top_popper_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_EJECT, L_SHARED, PRI_LEFF2, 0, 0, eject_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FLASH_ALL, L_NORMAL, PRI_LEFF3, LAMPLIST_AMODE_ALL, 0, flash_all_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_BOT2TOP, L_NORMAL, PRI_LEFF3, LAMPLIST_AMODE_ALL, 0, bot2top_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_TOP2BOT, L_NORMAL, PRI_LEFF3, LAMPLIST_AMODE_ALL, 0, top2bot_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_RIGHT2LEFT, L_NORMAL, PRI_LEFF3, LAMPLIST_AMODE_ALL, 0, right2left_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_LEFT2RIGHT, L_NORMAL, PRI_LEFF3, LAMPLIST_AMODE_ALL, 0, left2right_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_NO_GI_ONESEC, L_NORMAL, PRI_LEFF1, 0, L_ALL_GI, no_gi_onesec_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_NO_GI_TWOSEC, L_NORMAL, PRI_LEFF1, 0, L_ALL_GI, no_gi_twosec_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_TURN_OFF_GI, L_NORMAL, PRI_LEFF1, 0, L_ALL_GI, turn_off_gi_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FLASH_GI, L_NORMAL, PRI_LEFF1, 0, L_ALL_GI, flash_gi_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FLASH_UL_GI, L_NORMAL, PRI_LEFF1, 0, L_ALL_GI, flash_ul_gi_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FLASH_UR_GI, L_NORMAL, PRI_LEFF1, 0, L_ALL_GI, flash_ur_gi_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FLASH_LL_GI, L_NORMAL, PRI_LEFF1, 0, L_ALL_GI, flash_ll_gi_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FLASH_LR_GI, L_NORMAL, PRI_LEFF1, 0, L_ALL_GI, flash_lr_gi_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FRENZY1, L_SHARED, PRI_LEFF2, LAMPLIST_AMODE_ALL, 0, frenzy1_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FRENZY2, L_SHARED, PRI_LEFF2, LAMPLIST_AMODE_ALL, 0, frenzy2_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FRENZY3, L_SHARED, PRI_LEFF2, LAMPLIST_AMODE_ALL, 0, frenzy3_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FRENZY4, L_SHARED, PRI_LEFF2, LAMPLIST_AMODE_ALL, 0, frenzy4_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FRENZY5, L_SHARED, PRI_LEFF2, LAMPLIST_AMODE_ALL, 0, frenzy5_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_LEFT_RAMP, L_SHARED, PRI_LEFF2, 0, 0, left_ramp_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_RIGHT_RAMP, L_SHARED, PRI_LEFF2, 0, 0, right_ramp_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_CENTER_RAMP, L_SHARED, PRI_LEFF2, 0, 0, center_ramp_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_SIDE_RAMP, L_SHARED, PRI_LEFF2, 0, 0, side_ramp_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_RAMP_QUICKFREEZE, L_SHARED, PRI_LEFF1, LAMPLIST_LEFT_RAMP_AWARDS, 0, ramp_quickfreeze_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_RAMP_CLAWREADY, L_SHARED, PRI_LEFF1, LAMPLIST_RIGHT_RAMP_AWARDS, 0, ramp_clawready_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_LOWER_REBOUND, L_SHARED, PRI_LEFF2, 0, 0, lower_rebound_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_UPPER_REBOUND, L_SHARED, PRI_LEFF2, 0, 0, upper_rebound_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_ORBITS_RUNNER, L_SHARED, PRI_LEFF1, LAMPLIST_LEFT_LOOP_AWARDS, 0, orbits_runner_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_FREEZE, L_NORMAL, PRI_LEFF3, LAMPLIST_AMODE_ALL, 0, freeze_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_CAR_CHASE, L_NORMAL, PRI_LEFF3, LAMPLIST_AMODE_ALL, 0, car_chase_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_ACMAG, L_NORMAL, PRI_LEFF3, LAMPLIST_AMODE_ALL, 0, acmag_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_EXPLODE, L_NORMAL, PRI_LEFF3, 0, L_ALL_GI, explode_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_CLAW, L_SHARED, PRI_LEFF2, LAMPLIST_AMODE_ALL, 0, claw_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_MB_START, L_SHARED, PRI_LEFF2, LAMPLIST_AMODE_ALL, 0, mb_start_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_INLANE_QUICK_FREEZE, L_SHARED, PRI_LEFF1, LAMPLIST_LEFT_RAMP_AWARDS, 0, inlane_quick_freeze_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_INLANE_CRYOCLAW, L_SHARED, PRI_LEFF1, LAMPLIST_RIGHT_RAMP_AWARDS, 0, inlane_cryoclaw_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_UNDERGROUND, L_SHARED, PRI_LEFF2, LAMPLIST_UNDERGROUND_SCOOP, 0, underground_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_COMPUTER_AWARD, L_NORMAL, PRI_LEFF3, LAMPLIST_AMODE_ALL, 0, computer_award_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_EYEBALL, L_SHARED, PRI_LEFF2, 0, 0, eyeball_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_JACKPOT, L_NORMAL, PRI_LEFF3, 0, L_ALL_GI, jackpot_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_JACKPOT1, L_NORMAL, PRI_LEFF3, 0, L_ALL_GI, jackpot1_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_JACKPOT2, L_NORMAL, PRI_LEFF3, 0, L_ALL_GI, jackpot2_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_JACKPOT3, L_NORMAL, PRI_LEFF3, 0, L_ALL_GI, jackpot3_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_JACKPOT4, L_NORMAL, PRI_LEFF3, 0, L_ALL_GI, jackpot4_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_SUPER_JACKPOT, L_NORMAL, PRI_LEFF4, 0, L_ALL_GI, super_jackpot_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_SKILLSHOT, L_SHARED, PRI_LEFF2, 0, 0, skillshot_leff, MACHINE4_PAGE) \
   DECL_LEFF (LEFF_CAR_CRASH_RUNNER, L_NORMAL, PRI_LEFF1, LAMPLIST_CAR_CRASH, 0, car_crash_runner_leff, MACHINE4_PAGE) \

#define MACHINE_TEST_MENU_ITEMS \
   &diverter_test_item, \
   &elevator_test_item, \
   &claw_test_item, \

extern struct menu diverter_test_item;
extern struct menu elevator_test_item;
extern struct menu claw_test_item;


extern const struct font font_mono9;
extern const struct font font_tinynum;
extern const struct font font_var5;
extern const struct font font_fixed6;
extern const struct font font_fixed10;
extern const struct font font_term6;
extern const struct font font_symbol;
extern const struct font font_bitmap8;
extern const struct font font_mono5;
extern const struct font font_lucida9;
extern const struct font font_bitcube10;
extern const struct font font_halobold12;
extern const struct font font_halobold14;
extern const struct font font_dmgraphs;
extern const struct font font_halobold22num;

extern const char *names_of_switches [];
extern const char *names_of_drives [];
extern const char *names_of_lamps [];
extern const char *names_of_containers [];
extern const char *names_of_deffs [];
extern const char *names_of_leffs [];
extern const char *names_of_lamplists [];
extern const char *names_of_gi [];
extern const char *names_of_fonts [];

#endif /* _MACH_CONFIG_H */