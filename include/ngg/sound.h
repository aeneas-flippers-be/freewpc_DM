#ifndef _MACH_SOUND_H
#define _MACH_SOUND_H


//****************************************************************
//11-DM  12+NGG
#define MUS_NONE 0x0
#define MUS_END_CREDITS 0x1
#define MUS_BG 0x2
#define MUS_PLUNGER 0x3


//****************************************************************
//POP A GOFER MODE
#define MUS_CHICKEN_SLOW 0x5
#define MUS_CHICKEN_MED1 0x6
#define MUS_CHICKEN_MED2 0x7
#define MUS_CHICKEN_FAST 0x8

#define EFFCT_CHICKEN_END 0x29
#define SPCH_CHICKEN_NOISE 0x187
#define SPCH_BUZZ_CHICKEN 0x186
#define SPCH_BUD_OVER_HERE_CHICKEN 0x27F
#define SPCH_BUD_YEAH_CLUCK_CLUCK 0x280


//****************************************************************
//DANCE PARTY MODE
#define MUS_DANCE_PARTY 0x9
#define SPCH_BUD_HEY_NICE_MUSIC 0x29F
#define SPCH_BUD_EVERYBODY_DANCE 0x2A0


//****************************************************************
//RIPOFF MULTIBALL
#define MUS_RIPOFF_FULL 0xE
#define MUS_RIPOFF_MID 0xF
#define MUS_RIPOFF_START 0x10
#define SPCH_BOTH_RIPOOOOOFFFF 0x1A7
#define SPCH_BUZZ_2_MANY_BALLS 0x180


//****************************************************************
//GENERIC MULTIBALL - BALL LOCK
#define MUS_MB_END_TIMER 0x12
#define EFFCT_MB_END_TIMER 0x13
#define SPCH_BUZZ_KEEP_BALL_UNDER_WRAPS 0x142
#define SPCH_BUZZ_HIDE_THE_BALL 0x143
#define SPCH_BUZZ_HANG_ON_TO_THAT_BALL_BUD 0x148
#define SPCH_BUZZ_GOOD_JOB_BUD 0x144
#define SPCH_BUZZ_WEVE_GOT_ALL_THE_BALLS 0x152
#define SPCH_BUD_HEY_BUZZ_I_GOT_THE_BALL 0x267
#define SPCH_BUD_I_GOT_THE_IDIOTS_BALL 0x268
#define SPCH_BUD_I_STOLE_THE_BALL 0x269
#define SPCH_BUZZ_SAY_GOODBYE_TO_YOUR_BALLS 0x178
#define EFFCT_BALL_LOCKED1 0x17
#define EFFCT_BALL_LOCKED2 0x22
#define SPCH_BUZZ_JACKPOT 0x17B //????
#define SPCH_BUZZ_SUPER_JACKPOT 0x17C
#define SPCH_BUD_EASY_JACKPOT 0x288
#define SPCH_BUD_TWO_TO_GO 0x2A7
#define SPCH_BUD_ONE_TO_GO 0x2A8
#define SPCH_BUZZ_JACKPOT_NOT 0x1C5


//****************************************************************
//SHORT CIRCUIT MODE
#define MUS_SHORT_CIRCUIT 0x2A
#define SPCH_BUZZ_THATS_ALL_THOSE_WIRES_DOWN_THERE 0x18F
#define SPCH_GOFER_SQUEEZE_THROUGH 0xC2
#define SPCH_BUZZ_DONT_CHOKE 0x196
#define SPCH_BUD_IM_CHOKING 0x2A2


//****************************************************************
#define MUS_MB_HIGH_SCORE_LIGHT_SHOW 0x14
#define MUS_ 0x18


//****************************************************************
#define MUS_MODE_A1 0xA
#define MUS_MODE_A2 0x27


//****************************************************************
#define MUS_MODE_B1 0x2D
#define MUS_MODE_B2 0x2B

//****************************************************************
//RAIN MODE
#define MUS_RAIN1 0x7A //MUSIC?
#define EFFCT_RAIN2 0x7B
#define EFFCT_RAIN3 0xBD
#define EFFCT_RAIN4 0xD5
#define EFFCT_ELECTRIC_SHOCK1 0xD2
#define EFFCT_ELECTRIC_SHOCK2 0xD3
#define EFFCT_ELECTRIC_SHOCK3 0xD7
#define EFFCT_ELECTRIC_SHOCK4 0xD8
#define EFFCT_ELECTRIC_SHOCK5 0xD9
#define EFFCT_ELECTRIC_SHOCK6 0xDA
#define EFFCT_ELECTRIC_SHOCK7 0xDB
#define EFFCT_ELECTRIC_SHOCK8 0xDC
#define EFFCT_ELECTRIC_SHOCK9 0xE0
#define EFFCT_ELECTRIC_SHOCK10 0xE1
#define SPCH_BUD_ITS_RAINING 0x2BC
#define SPCH_BUD_QUICK_GET_UNDER_SOMETHING_METAL 0x290
#define SPCH_BUZZ_HOLD_YOUR_PUTTER_UP_HIGH_IN_THE_AIR 0x1D4
#define SPCH_BUD_THIS_IS_ELECTRIFYING 0x2C0
#define SPCH_BUD_LIGHTNING 0x2C1


//****************************************************************
// GOFER ATTACK MODE
#define SPCH_BOTH_ATTACK 0x27B
#define SPCH_BUZZ_HERE_IT_COMES_LOOK_OUT 0x1B3
#define SPCH_BUZZ_EAT_THIS 0x153


//****************************************************************
//BONUS
#define EFFCT_APPLAUSE_SHORT 0x6F
#define EFFCT_APPLAUSE_LONG 0xBE
#define EFFCT_CROWD_AAAWWW 0x70
#define EFFCT_SCORECARD_HOLE_1 0x7F
#define EFFCT_SCORECARD_HOLE_2 0x97
#define EFFCT_SCORECARD_HOLE_3 0x9A
#define EFFCT_END_BONUS 0x21


//****************************************************************
//CART HIT
#define EFFCT_BROKEN_GLASS1 0x92
#define EFFCT_BROKEN_GLASS2 0x93
#define EFFCT_CART_HIT2 0xC8
#define EFFCT_ALARM_SINGLE 0x94
#define EFFCT_GOLF_CART_ALARM 0xB1
#define EFFCT_GOLF_CART_ALARM_HIT 0xEA
#define SPCH_BUZZ_BLAST_THAT_CART 0x176
#define SPCH_BUZZ_I_HOPE_YOUR_WHEELS_COME_OFF 0x1B1
#define SPCH_BUZZ_SMASH_THAT_CAR 0x1C0
#define SPCH_BUZZ_YOU_HIT_YOUR_OWN_CART 0x173
#define SPCH_BUZZ_DO_IT_AGAIN 0x174
#define SPCH_BUD_HE_SHOULD_HAVE_MOVED_HIS_CAR 0x2B7
#define SPCH_BUD_TODAY_THE_GLOF_COURSE_TOMORROW_THE_PARKINGLOT 0x2B9



//****************************************************************
// PUTT OUT READY
#define SPCH_BUD_TIME_TO_PLAY_WITH_YOUR_PUTTER 0x2B8
#define SPCH_BUD_HEAD_FOR_THE_GREEN 0x2BA
#define SPCH_BUD_YOUR_PUTTER_IS_YOUR_FRIEND 0x2C5



//****************************************************************
//PUTT OUT WHEN LIT = PUTT OUT
#define EFFCT_GOLF_BALL_DROP_IN_HOLE1 0x68
#define EFFCT_GOLF_BALL_DROP_IN_HOLE2 0x69
#define EFFCT_GOLF_BALL_DROP_IN_HOLE3 0x6A
#define EFFCT_GOLF_BALL_DROP_IN_HOLE4 0x6B
#define SPCH_BUD_BOOGIE 0x26A



//****************************************************************
//PUTT OUT WHEN NOT LIT = WATER HAZARD - SAND TRAP
#define SPCH_BUZZ_INSTEAD_OF_A_GOLFCART_YOU_NEED_A_CANOE 0x1AE
#define SPCH_BUD_YOUR_IN_THE_ROUGH 0x25C
#define SPCH_BUZZ_GO_POUND_SOME_SAND 0x15B
#define EFFCT_BALL_FALL_IN_WATER 0xB2
#define SPCH_BUZZ_YOU_MUST_HAVE_SAND_IN_YOUR_SHORTS 0x1CF
#define SPCH_BUZZ_ILL_TWIST_YOUR_PUTTER_ALRIGHT 0x1C8
#define SPCH_BUZZ_MAYBE_YOUR_PUTTER_WILL_SHRINK 0x1C9
#define SPCH_BUZZ_YOU_CANT_DRIVE_WITH_A_PUTTER 0x1CA
#define SPCH_BUZZ_I_THINK_YOURE_HOLDING_YOUR_PUTTER_WRONG 0x1D1


//****************************************************************
// CAPTIVE BALL - NON MODE
#define EFFCT_CAPTIVE_HIT_FINAL 0x23
#define EFFCT_CAPTIVE_HIT_1 0x8D
#define EFFCT_CAPTIVE_HIT_2 0x8E


//****************************************************************
// CAPTIVE BALL - ATTACK MODE
#define SPCH_BUZZ_BLAST_THAT_BALL 0x1AF
#define EFFCT_STRIKE_MATCH 0xCC
#define EFFCT_BURNING_FUSE 0xCD
#define EFFCT_TNT_EXPLOSION 0xCE
#define SPCH_BUD_HELLO_BALL 0x2A4
#define SPCH_BUD_HIT_THE_CAPTIVE_BALL 0x2A5
#define SPCH_BUD_KABOOM 0x2AC
#define SPCH_BUD_BOMBS_AWAY 0x2BD
#define SPCH_BUZZ_BOOM_MY_BUTT 0x1A9


//****************************************************************
//INSULTS - DRAIN OR BAD SHOT
#define SPCH_BUZZ_ROOKIE 0x12F
#define SPCH_BUZZ_HAHA_SUCKER 0x130
#define SPCH_BUZZ_YOU_MISSED_EVERYTHING 0x135
#define SPCH_BUZZ_BUD_COULD_SHOOT_BETTER_THAN_THAT 0x137
#define SPCH_BUZZ_HAHAHA_HAH 0x13A
#define SPCH_BUZZ_LONG_LAUGH 0x14A
#define SPCH_BUZZ_OH_NO 0x14C
#define SPCH_BUZZ_YOUHOHOHOHO_MISSED 0x15F
#define SPCH_BUZZ_THIS_MUST_BE_EMBARRASSING_FOR_YOU 0x183
#define SPCH_BUZZ_HOLE_IN_ONE_OOPS_WRONG_HOLE 0x184
#define SPCH_BUZZ_REAAAAALLY_NICE_SHOT 0x1A6
#define SPCH_BUZZ_YEEAAAHHHAAA 0x1A8
#define SPCH_BUZZ_YOURE_WORSE_THAN_YOU_LOOK 0x198
#define SPCH_BUD_YOU_MISSED 0x270
#define SPCH_BUD_I_THINK_THE_HOLES_OVER_THERE 0x25B
#define SPCH_BUD_YOU_MISSED2 0x275
#define SPCH_BUZZ_MAYBE_YOU_SHOULD_TAKE_UP_BOWLING 0x1D0


//****************************************************************
// HIT GOFER - HIT
#define EFFCT_GOFER_HIT_BY_BALL1 0xCB
#define SPCH_BUZZ_THAT_DIDNT_HURT_A_BIT 0x138
#define SPCH_BUZZ_THAT_DID 0x139
#define SPCH_BUZZ_OOW_THAT_HURT 0x145
#define SPCH_BUZZ_OOW1 0x146
#define SPCH_BUZZ_OOW2 0x147
#define SPCH_BUD_OOOHHH1 0x264
#define SPCH_BUD_OOOHHH2 0x265
#define SPCH_BUD_OOOHHH3 0x266
#define SPCH_BUD_DONT_HIT_ME_HIT_BUZZ 0x2C4
#define SPCH_BUZZ_DONT_HIT_ME_HIT_BUD 0x1C2
#define SPCH_BUZZ_OKAY_SO_YOU_CAN_HIT_US 0x1C3
#define SPCH_BUZZ_STOP_IT 0x1C4
#define SPCH_BUZZ_WAS_THAT_REALLY_NECESSARY 0x1C7
#define SPCH_BUZZ_OH_THAT_WAS_CLOSE 0x1C6
#define SPCH_BUZZ_HEY_IM_THE_ONLY_ONE_WHO_CAN_HIT_BUD 0x17F
#define SPCH_BUD_HEY_THE_GAME_IS_VIOLENT_ENOUGH 0x285
#define SPCH_BUD_YOU_DONT_WANT_TO_MAKE_BUZZ_ANGRY 0x28B
#define SPCH_BUD_OOOOHHHH 0x27A
#define SPCH_BUD_IM_SHOT 0x2A3


//****************************************************************
// HIT GOFER - TAUNT - HIT ME
#define SPCH_BUD_MISSED_ME 0x2B3
#define SPCH_BUZZ_YOU_CANT_HIT_ME 0x185
#define SPCH_BUZZ_GIMME_YOUR_BEST_SHOT 0x15D


//****************************************************************
//INSULTS - GOOD SHOT
#define SPCH_BUZZ_THAT_WAS_NOTHING 0x134
#define SPCH_BUZZ_BIG_DEAL 0x136
#define SPCH_BUZZ_HOT_SHOT 0x13B
#define SPCH_BUZZ_GREAT 0x1D2
#define SPCH_BUZZ_PERFECT 0x1D3
#define SPCH_BUZZ_EXCELLENT 0x1D5
#define SPCH_BUD_THAT_WASNT_TOO_BAD 0x258
#define SPCH_BUD_ATTA_BOY 0x259
#define SPCH_BUD_NICE_SHOT 0x25A
#define SPCH_BUZZ_OOOOHH_IMPRESSIVE 0x167
#define SPCH_BUZZ_LUCKY 0x17D
#define SPCH_BUZZ_REALLY_LUCKY 0x17E
#define SPCH_BUZZ_CHEATER 0x15C


//****************************************************************
//UPPER PLAYFIELD SHOT - ORBITS SHOTS
#define SPCH_BUZZ_SLICE 0x171
#define SPCH_BUZZ_HOOK 0x172
#define SPCH_BUZZ_IF_BALLS_WERE_MEANT_TO_FLY_THEYD_HAVE_WINGS 0x1AA
#define SPCH_BUZZ_FELT_THE_WIND_ON_THAT_ONE 0x1B7
#define SPCH_BUZZ_HEY_DONT_HIT_MY_TREEDWELLING_COUSIN 0x1BE
#define SPCH_BUD_DONT_WORRY_GRAVITY_IS_YOUR_FRIEND 0x28D
#define SPCH_GOFER_UHHH_OOOWW 0xB3 //SQUIRREL
#define SPCH_GOFER_UHHH_GULP 0xE9 //SQUIRREL


//****************************************************************
// GENERIC PERIODIC TAUNTS
#define SPCH_BUZZ_HEY_JERKY 0x12D
#define SPCH_BUZZ_YOUR_ON_OUR_TURF_NOW 0x131
#define SPCH_BUZZ_GET_OFF_OUR_TURF 0x132
#define SPCH_BUZZ_GOOD_GOLFER_IS_DEAD_GOLFER 0x154
#define SPCH_BUZZ_KNOCK_IT_OFF 0x158
#define SPCH_BUZZ_ENOUGH_ALL_READY 0x159
#define SPCH_BUZZ_HEY_STUPID 0x15A
#define SPCH_BUZZ_CALL_YOU_HOTSHOT 0x161
#define SPCH_BUZZ_CALL_YOU_JERKY 0x162
#define SPCH_BUZZ_CALL_YOU_LOSER 0x163
#define SPCH_BUZZ_CALL_YOU_SPUD 0x164
#define SPCH_BUZZ_CALL_YOU_CLUBFOOT 0x165
#define SPCH_BUZZ_CALL_YOU_HACKER 0x166
#define SPCH_BUZZ_GET_OFF_MY_LAWN 0x16F
#define SPCH_BUZZ_WERE_YOUR_WORST_NIGHTMARE 0x170
#define SPCH_BUZZ_YOURE_DUMMER_THAN_BUD 0x177
#define SPCH_BUZZ_HEAD_FOR_THE_LEFT_DRAIN 0x1AC
#define SPCH_BUZZ_GEE_THIS_IS_EXCITING 0x1AD
#define SPCH_BUD_USE_THE_LEFT_FLIPPER 0x26D
#define SPCH_BUD_GO_FER_LEFT_RAMP 0x25F
#define SPCH_BUD_GO_FER_THE_RIGHT_RAMP 0x260
#define SPCH_BUZZ_ADDRESS_THE_BALL 0x19F
#define SPCH_BUZZ_FUHGEDABOUDIT 0x133
#define SPCH_BUZZ_GOLF_IS_A_CONTACT_SPORT 0x182



//****************************************************************
// LAST SECONDS OF A HURRY UP MODE
#define SPCH_BUZZ_HURRY_UP2 0x1BB
#define SPCH_BUZZ_TIMES_A_WASTING 0x1BC
#define SPCH_BUZZ_LETS_GET_GOING 0x1BD
#define SPCH_BUZZ_HURRY_UP 0x14D
#define SPCH_BUD_HURRY_UP 0x26E




//****************************************************************
// LEFT INLANE - LOWERING OF SLAM RAMP
#define SPCH_MAN_FORE 0x12C
#define SPCH_BUD_FORE 0x282
#define SPCH_BUD_FOOOORE 0x283
#define EFFCT_GOLF_CLUB_SWING 0x64


//****************************************************************
// EXTRA BALL
#define SPCH_BUZZ_EXTRA_BALL_IS_LIT 0x141
#define SPCH_BUZZ_EXTRA_BALL 0x178
#define SPCH_BUZZ_YOUR_GONNA_NEED_IT 0x17A
#define SPCH_BUD_GET_THE_EXTRA_BALL 0x25E
#define SPCH_BUZZ_MISS_IT 0x18E


//****************************************************************
// OUTLANES LIT
#define SPCH_BUZZ_YOU_DRAIN_YOU_GAIN 0x1AB
#define SPCH_BUD_THAT_WAS_REAL_SPECIAL 0x272


//****************************************************************
// WARP MODE
#define SPCH_BUZZ_YOURE_WARPED_ALRIGHT 0x1B0


//****************************************************************
// HOLE IN ONE
#define SPCH_BUZZ_HOLE_IN_ONE 0x1BA



//DM74 - NGG 115
#define EFFCT_ORCHESTRA_AWARD_LONG 0xD
#define EFFCT_ORCHESTRA_AWARD_1 0x1B
#define EFFCT_ORCHESTRA_AWARD_2 0x29
#define EFFCT_HIT_LOW_PITCH 0x1C
#define EFFCT_HIT_MED1_PITCH 0x1D
#define EFFCT_HIT_MED2_PITCH 0x1E
#define EFFCT_HIT_HIGH1_PITCH 0x1F
#define EFFCT_HIT_HIGH2_PITCH 0x20
#define EFFCT_HIT_LOW_PITCH2 0x24
#define EFFCT_HIT_MED_PITCH2 0x25
#define EFFCT_HIT_HIGH_PITCH2 0x26
#define EFFCT_GOLF_CLUB_PUTT1 0x65
#define EFFCT_GOLF_CLUB_PUTT2 0x6C
#define EFFCT_GOLF_CLUB_PUTT3 0x89
#define EFFCT_GOLF_MECHANISM 0x6D  //?
#define EFFCT_ROCKET1 0x72
#define EFFCT_ROCKET2 0x73
#define EFFCT_ROCKET3 0xB8
#define EFFCT_ROCKET4 0xBA
#define EFFCT_EXPLOSION_SM 0x74
#define EFFCT_EXPLOSION_MED 0x75
#define EFFCT_EXPLOSION_LRG 0x76
#define EFFCT_EXPLOSION_MED2 0xC1
#define EFFCT_PLONK1 0x77
#define EFFCT_PLONK2 0x78
#define EFFCT_PLONK3 0x79
#define EFFCT_FLY_BY1 0x7E
#define EFFCT_FLY_BY2 0x80
#define EFFCT_WHEEL_ADVANCE1 0x81
#define EFFCT_WHEEL_ADVANCE2 0x82
#define EFFCT_WHEEL_ADVANCE3 0x83
#define EFFCT_WHEEL_ADVANCE4 0x84
#define EFFCT_WHEEL_ADVANCE5 0x85
#define EFFCT_WHEEL_ADVANCE6 0x86
#define EFFCT_RAMP_SOUND1 0x8A
#define EFFCT_RAMP_SOUND2 0x8B
#define EFFCT_HIT_POLE 0x8C
#define EFFCT_BEAM_UP1 0x8F
#define EFFCT_BEAM_UP2 0x87
#define EFFCT_BEAM_UP_CONSTANT 0x88
#define EFFCT_SQUEEZE 0x90  //?
#define EFFCT_BELL 0x91
#define EFFCT_SQUEEZE2 0x95   //?
#define EFFCT_GOFER_FART 0x96
#define EFFCT_DRUM_HIT1 0x9B
#define EFFCT_DRUM_HIT2 0x9C
#define EFFCT_DRUM_HIT3 0x9D
#define EFFCT_DRUM_HIT4 0x9E
#define EFFCT_DRUM_HIT5 0x9F
#define EFFCT_DRUM_HIT6 0xA0
#define EFFCT_LAUNCH_TAKE_OFF 0xA1
#define EFFCT_FIREWORKS 0xA2
#define EFFCT_SPARKS 0xA3
#define EFFCT_DOOR_SLAM 0xA6
#define EFFCT_HARD_DOOR_KNOCK1 0xAA
#define EFFCT_HARD_DOOR_KNOCK2 0xAB
#define EFFCT_ 0xA8
#define EFFCT_POP 0xA9
#define EFFCT_SHOTGUN 0xAC
#define EFFCT_HIT_SIGN 0xAD
#define EFFCT_DA_DA_DA_DO 0xAE
#define EFFCT_ORBIT_RACE_BY 0xAF
#define EFFCT_SMASH_SHACK 0xB4
#define EFFCT_WOBBLE 0xB5
#define EFFCT_DERGH1 0xB6
#define EFFCT_DERGH2 0xC0
#define EFFCT_WHI_WHOU 0xC3
#define EFFCT_DERGH3 0xC5
#define EFFCT_TNT_DRIVE 0xC4
#define EFFCT_METAL_FALL1 0xC6
#define EFFCT_1 0xD4
#define EFFCT_2 0xD6
#define EFFCT_3 0xE4
#define EFFCT_4 0xE6
#define EFFCT_LOUD 0xCF
#define EFFCT_MED 0xD0
#define EFFCT_LOW 0xD1
#define EFFCT_KNOCK 0x3DE




//161-DM    259 -NGG
#define SPCH_BUZZ_PRETTY_CLOSE 0x1B6
#define SPCH_BUZZ_NOT_EVEN_CLOSE 0x1B5
#define SPCH_BUZZ_NOT_EVEN_BY_A_MILE 0x1B8
#define SPCH_BUZZ_YOU_COULDNT_HIT_BUDS_BUTT 0x1B9
#define SPCH_BUZZ_WHAT_KIND_OF_SHOT_WAS_THAT 0x155

#define SPCH_BUD_THIS_IS_THE_PART_I_LIKE_BEST 0x28E
#define SPCH_BUZZ_JERKY 0x13C
#define SPCH_BUZZ_LOSER 0x13D
#define SPCH_BUZZ_SPUD 0x13E
#define SPCH_BUZZ_CLUBFOOT 0x13F
#define SPCH_BUZZ_HACKER 0x140
#define SPCH_BUZZ_GOLFERS 0x149
#define SPCH_BUZZ_SCREAM1 0x14E
#define SPCH_BUZZ_SCREAM2 0x150
#define SPCH_BUZZ_HEY 0x157
#define SPCH_BUZZ_HEY_BUD 0x15E
#define SPCH_BUZZ_GURGLE 0x160
#define SPCH_BUZZ_IDIOT 0x175
#define SPCH_BUZZ_2_FAST 0x181
#define SPCH_BUZZ_SEVEN 0x188
#define SPCH_BUZZ_FIVE 0x189
#define SPCH_BUZZ_THREE 0x18A
#define SPCH_BUZZ_IDIOT2 0x18B
#define SPCH_BUZZ_WHAT 0x18C
#define SPCH_BUZZ_THIS_AINT_AS_EASY_AS_IT_LOOKS 0x18D
#define SPCH_BUZZ_NOW_GO_AWAY 0x190
#define SPCH_BUZZ_YEAH_YOURE_SAGGING 0x191
#define SPCH_BUZZ_NOW_YOUVE_DONE_IT 0x192
#define SPCH_BUZZ_SHUT_UP_BUD 0x193
#define SPCH_BUZZ_TOUGH_GUY 0x194
#define SPCH_BUZZ_HA_HA 0x195
#define SPCH_BUZZ_BUD_NOT_YOU 0x197
#define SPCH_BUZZ_YOURE_MAKING_ME_DIZZY  0x19E
#define SPCH_BUZZ_HOTSHOT2 0x1A0
#define SPCH_BUZZ_LOSER2 0x1A1
#define SPCH_BUZZ_JERKY2 0x1A2
#define SPCH_BUZZ_SPUD2 0x1A3
#define SPCH_BUZZ_CLUBFOOT2 0x1A4
#define SPCH_BUZZ_HACKER2 0x1A5
#define SPCH_BUZZ_YOUR_IN_THE_WRONG_GAME_IDIOT 0x1B2
#define SPCH_BUZZ_YOUR_REALLY_IN_THE_WRONG_GAME 0x1B4
#define SPCH_BUZZ_SHOW_ME_THE_MONEY 0x1BF
#define SPCH_BUZZ_ZOOOOM 0x1C1
#define SPCH_BUZZ_HIT_ANYTHING 0x1CE
#define SPCH_BUZZ_TRULY_GREAT_SHOT_USELESS_BUT_TRULY_GREAT 0x1D6
#define SPCH_BUD_THAT_WAS_GREAT 0x25D
#define SPCH_BUD_WHERE 0x261
#define SPCH_BUD_CAN_I 0x263
#define SPCH_BUD_HES_BACK 0x26B
#define SPCH_BUD_HIT_THE_MOVING_LIGHT 0x26C
#define SPCH_BUD_I_THINK_HES_GOT_ONE_LEFT 0x26F
#define SPCH_BUD_THIS_ONES_ON_US 0x271
#define SPCH_BUD_ROUND_AND_ROUND_SHE_GOES 0x273
#define SPCH_BUD_HEY_BUZZ 0x274
#define SPCH_BUD_AAAHHH 0x276
#define SPCH_BUD_HELP_BUZZ 0x278
#define SPCH_BUD_GURGLE 0x27D
#define SPCH_BUD_OR_ME 0x27E
#define SPCH_BUD_TWIX 0x281  //?
#define SPCH_BUD_OH_UH 0x284
#define SPCH_BUD_THAT_WAS_SNEAKY 0x286
#define SPCH_BUD_TAKE_THE_CART_PATH 0x287
#define SPCH_BUD_WE_NEED_QUIET 0x289
#define SPCH_BUD_I_CAN_FEEL_THE_POWER 0x28A
#define SPCH_BUD_WELCOME_BACK 0x28C
#define SPCH_BUD_HEY_WHO_LIT_THE_LOCK 0x28F
#define SPCH_BUD_IM_WORN_OUT 0x291
#define SPCH_BUD_IM_DISCOMBOBULATED 0x292
#define SPCH_BUD_ONE 0x293
#define SPCH_BUD_TWO 0x294
#define SPCH_BUD_THREE 0x295
#define SPCH_BUD_FOUR 0x296
#define SPCH_BUD_FIVE 0x297
#define SPCH_BUD_SIX 0x298
#define SPCH_BUD_SEVEN 0x299
#define SPCH_BUD_EIGHT 0x29A
#define SPCH_BUD_NINE 0x29B
#define SPCH_BUD_TEN 0x29C
#define SPCH_BUD_MILLION 0x29D
#define SPCH_BUD_A_GAZILLION 0x29E
#define SPCH_BUD_ HUH_HUH 0x2A1
#define SPCH_BUD_HEAD_FOR_THE_RAMPS 0x2A6
#define SPCH_BUD_THAT_WAS_FAST 0x2A9
#define SPCH_BUD_HEAD_FOR_THE_DRIVING_RANGE 0x2AA
#define SPCH_BUD_THAT_WAS_EXCITING_I_THINK 0x2AB
#define SPCH_BUD_ZOOM 0x2AD
#define SPCH_BUD_LOOK_OUT 0x2AE
#define SPCH_BUD_HEY_WATCHIT 0x2AF
#define SPCH_BUD_WATCH_OUT 0x2B0
#define SPCH_BUD_HEAD_FOR_THE_CELLAR 0x2B1
#define SPCH_BUD_EVERYBODY_UNDERGROUND_NOW 0x2B2
#define SPCH_BUD_THAT_WAS_CLOSE 0x2B4
#define SPCH_BUD_ALMOST 0x2B5
#define SPCH_BUD_ALMOST_ONLY_COUNTS_IN_TIDDLYWINKS 0x2B6
#define SPCH_BUD_BE_CAREFUL 0x2BB
#define SPCH_BUD_AAHHHHHH 0x2BE
#define SPCH_BUD_GO_FER_IT 0x2BF
#define SPCH_BUD_MY_BRAIN_HURTS 0x2C2
#define SPCH_BUD_DRIVE_THE_BALL 0x2C3









//these must be named this
//#define SND_TEST_DOWN 0x03D4
//#define SND_TEST_UP 0x03D5
//#define SND_TEST_ESCAPE 0x03D6
//#define SND_TEST_ENTER 0x03D7

//#define SPCH_MENU_BONG 0x03D8
//#define SPCH_MENU_1 0x03D9
//#define SPCH_MENU_2 0x03DA
//#define SPCH_MENU_3 0x03DB
//#define SPCH_MENU_4 0x03DC
//#define SPCH_MENU_5 0x03DD

#endif /* _MACH_SOUND_H */