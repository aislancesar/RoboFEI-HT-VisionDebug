/*--------------------------------------------------------------------

******************************************************************************
* @file blackboard.h
* @author Isaac Jesus da Silva - ROBOFEI-HT - FEI
* @version V0.0.0
* @created 07/04/2014
* @Modified 15/05/2014
* @e-mail isaac25silva@yahoo.com.br
* @brief Main header black board
****************************************************************************

Arquivo de cabeçalho contendo as funções e definições do black board

/--------------------------------------------------------------------*/

//---- Definições da memória compartilhada------------------------------
//---- TIPO INT------------------------------
#define PLANNING_COMMAND 0
#define PLANNING_PARAMETER_VEL 1
#define PLANNING_PARAMETER_ANGLE 2
#define IMU_STATE 3
#define IMU_RESET 4
#define CONTROL_ACTION 5
#define CONTROL_HEIGHT_A 6
#define CONTROL_HEIGHT_B 7
#define CONTROL_HEIGHT_C 8
#define DECISION_ACTION_A 9
#define DECISION_ACTION_B 10
#define DECISION_STATE 11
#define DECISION_POSITION_A 12
#define DECISION_POSITION_B 13
#define DECISION_POSITION_C 14
#define DECISION_BALL_POS 15
#define DECISION_OPP1_POS 16
#define DECISION_OPP2_POS 17
#define DECISION_OPP3_POS 18
#define COM_ACTION_ROBOT1 19
#define COM_ACTION_ROBOT2 20
#define COM_ACTION_ROBOT3 21
#define COM_STATE_ROBOT1 22
#define COM_STATE_ROBOT2 23
#define COM_STATE_ROBOT3 24
#define COM_POS_ROBOT1 25
#define COM_POS_ROBOT2 26
#define COM_POS_ROBOT3 27
#define COM_POS_BALL_ROBOT1 28
#define COM_POS_BALL_ROBOT2 29
#define COM_POS_BALL_ROBOT3 30
#define COM_POS_OPP_A_ROBOT1 31
#define COM_POS_OPP_A_ROBOT2 32
#define COM_POS_OPP_A_ROBOT3 33
#define COM_POS_OPP_A_ROBOT4 34
#define COM_POS_OPP_B_ROBOT1 35
#define COM_POS_OPP_B_ROBOT2 36
#define COM_POS_OPP_B_ROBOT3 37
#define COM_POS_OPP_B_ROBOT4 38
#define COM_POS_OPP_C_ROBOT1 39
#define COM_POS_OPP_C_ROBOT2 40
#define COM_POS_OPP_C_ROBOT3 41
#define COM_POS_OPP_C_ROBOT4 42
#define COM_REFEREE 43
#define LOCALIZATION_X 44
#define LOCALIZATION_Y 45
#define LOCALIZATION_THETA 46
#define VISION_LOST 47
#define DECISION_SEARCH_ON 48
#define DECISION_ACTION_VISION 49
#define VISION_MOTOR1_GOAL 50
#define VISION_MOTOR2_GOAL 51
#define VISION_SEARCH_GOAL 52
#define VISION_LOST_GOAL 53
#define VISION_STATE 54
#define ROBOT_NUMBER 55
#define VISION_pos_servo1 56
#define VISION_pos_servo2 57
#define VISION_BALL_TAG 58
#define VISION_BALL_MOV 59
#define VISION_LAND_TAG 60
#define VISION_LAND_MOV 61
#define VISION_RB01_TAG 62
#define VISION_RB01_MOV 63
#define VISION_RB02_TAG 64
#define VISION_RB02_MOV 65
#define VISION_RB03_TAG 66
#define VISION_RB03_MOV 67
#define VISION_RB04_TAG 68
#define VISION_RB04_MOV 69
#define VISION_RB05_TAG 70
#define VISION_RB05_MOV 71
#define VISION_RB06_TAG 72
#define VISION_RB06_MOV 73
#define VISION_RB07_TAG 74
#define VISION_RB07_MOV 75
#define VISION_RB08_TAG 76
#define VISION_RB08_MOV 77
#define VISION_RB09_TAG 78
#define VISION_RB09_MOV 79
#define VISION_RB10_TAG 80
#define VISION_RB10_MOV 81
#define VISION_RB11_TAG 82
#define VISION_RB11_MOV 83
#define VISION_RB12_TAG 84
#define VISION_RB12_MOV 85
#define VISION_RB13_TAG 86
#define VISION_RB13_MOV 87
#define VISION_RB14_TAG 88
#define VISION_RB14_MOV 89
#define VISION_RB15_TAG 90
#define VISION_RB15_MOV 91
#define VISION_RB16_TAG 92
#define VISION_RB16_MOV 93
#define VISION_RB17_TAG 94
#define VISION_RB17_MOV 95
#define VISION_RB18_TAG 96
#define VISION_RB18_MOV 97
#define VISION_RB19_TAG 98
#define VISION_RB19_MOV 99
#define VISION_RB20_TAG 100
#define VISION_RB20_MOV 101
#define VISION_RB21_TAG 102
#define VISION_RB21_MOV 103
#define COM_POS_ORIENT_QUALIT_ROBOT_A 104
#define COM_POS_DIST_QUALIT_ROBOT_A 105
#define COM_POS_ORIENT_QUALIT_ROBOT_B 106
#define COM_POS_DIST_QUALIT_ROBOT_B 107
#define COM_POS_ORIENT_QUALIT_ROBOT_C 108
#define COM_POS_DIST_QUALIT_ROBOT_C 109
#define VISION_DELTA_ORIENT 110
#define LOCALIZATION_FIND_ROBOT 111
#define RECEIVED_ROBOT_SENDING 112
#define RECEIVED_QUAL_ORIENT 113
#define RECEIVED_QUAL_DIST 114
#define RECEIVED_ROBOT_SEEN 115
#define CONTROL_MESSAGES 116
#define ASKED_QUALIT_DIRECT 117
#define ASKED_QUALIT_DISTANCE 118
#define ASKED_RELATED_ROBOT 119
#define CONTROL_MOVING 120
#define ROBOT_VIEW_ROTATE 121
#define CONTROL_WORKING 122
#define VISION_WORKING 123
#define LOCALIZATION_WORKING 124
#define DECISION_WORKING 125
#define IMU_WORKING 126
#define VOLTAGE 127
#define DECISION_LOCALIZATION 128
#define LANDMARK_L_1: 129
#define LANDMARK_L_2: 130
#define LANDMARK_L_3: 131
#define LANDMARK_L_4: 132
#define LANDMARK_T_1: 133
#define LANDMARK_T_2: 134
#define LANDMARK_X_1: 135
#define LANDMARK_X_2: 136
#define LANDMARK_P: 137

//---- TIPO FLOAT------------------------------
#define IMU_GYRO_X 0
#define IMU_GYRO_Y 1
#define IMU_GYRO_Z 2
#define IMU_ACCEL_X 3
#define IMU_ACCEL_Y 4
#define IMU_ACCEL_Z 5
#define IMU_COMPASS_X 6
#define IMU_COMPASS_Y 7
#define IMU_COMPASS_Z 8
#define IMU_EULER_X 9
#define IMU_EULER_Y 10
#define IMU_EULER_Z 11
#define IMU_QUAT_X 12
#define IMU_QUAT_Y 13
#define IMU_QUAT_Z 14
#define VISION_AREA_SEGMENT 15
#define VISION_BALL_X 16
#define VISION_BALL_Y 17
#define VISION_LAND_X 18
#define VISION_LAND_Y 19
#define VISION_RB01_X 20
#define VISION_RB01_Y 21
#define VISION_RB02_X 22
#define VISION_RB02_Y 23
#define VISION_RB03_X 24
#define VISION_RB03_Y 25
#define VISION_RB04_X 26
#define VISION_RB04_Y 27
#define VISION_RB05_X 28
#define VISION_RB05_Y 29
#define VISION_RB06_X 30
#define VISION_RB06_Y 31
#define VISION_RB07_X 32
#define VISION_RB07_Y 33
#define VISION_RB08_X 34
#define VISION_RB08_Y 35
#define VISION_RB09_X 36
#define VISION_RB09_Y 37
#define VISION_RB10_X 38
#define VISION_RB10_Y 39
#define VISION_RB11_X 40
#define VISION_RB11_Y 41
#define VISION_RB12_X 42
#define VISION_RB12_Y 43
#define VISION_RB13_X 44
#define VISION_RB13_Y 45
#define VISION_RB14_X 46
#define VISION_RB14_Y 47
#define VISION_RB15_X 48
#define VISION_RB15_Y 49
#define VISION_RB16_X 50
#define VISION_RB16_Y 51
#define VISION_RB17_X 52
#define VISION_RB17_Y 53
#define VISION_RB18_X 54
#define VISION_RB18_Y 55
#define VISION_RB19_X 56
#define VISION_RB19_Y 57
#define VISION_RB20_X 58
#define VISION_RB20_Y 59
#define VISION_RB21_X 60
#define VISION_RB21_Y 61
#define VISUAL_MEMORY_LAND_LOC 62
#define VISUAL_MEMORY_LAND_X 63
#define VISUAL_MEMORY_LAND_Y 64
#define VISUAL_MEMORY_BALL_LOC 65
#define VISUAL_MEMORY_BALL_X 66
#define VISUAL_MEMORY_BALL_Y 67
#define VISUAL_MEMORY_AL_01_LOC 68
#define VISUAL_MEMORY_AL_01_X 69
#define VISUAL_MEMORY_AL_01_Y 70
#define VISUAL_MEMORY_AL_01_MAX_VEL 71
#define VISUAL_MEMORY_AL_02_LOC 72
#define VISUAL_MEMORY_AL_02_X 73
#define VISUAL_MEMORY_AL_02_Y 74
#define VISUAL_MEMORY_AL_02_MAX_VEL 75
#define VISUAL_MEMORY_AL_03_LOC 76
#define VISUAL_MEMORY_AL_03_X 77
#define VISUAL_MEMORY_AL_03_Y 78
#define VISUAL_MEMORY_AL_03_MAX_VEL 79
#define VISUAL_MEMORY_AL_04_LOC 80
#define VISUAL_MEMORY_AL_04_X 81
#define VISUAL_MEMORY_AL_04_Y 82
#define VISUAL_MEMORY_AL_04_MAX_VEL 83
#define VISUAL_MEMORY_AL_05_LOC 84
#define VISUAL_MEMORY_AL_05_X 85
#define VISUAL_MEMORY_AL_05_Y 86
#define VISUAL_MEMORY_AL_05_MAX_VEL 87
#define VISUAL_MEMORY_AL_06_LOC 88
#define VISUAL_MEMORY_AL_06_X 89
#define VISUAL_MEMORY_AL_06_Y 90
#define VISUAL_MEMORY_AL_06_MAX_VEL 91
#define VISUAL_MEMORY_AL_07_LOC 92
#define VISUAL_MEMORY_AL_07_X 93
#define VISUAL_MEMORY_AL_07_Y 94
#define VISUAL_MEMORY_AL_07_MAX_VEL 95
#define VISUAL_MEMORY_AL_08_LOC 96
#define VISUAL_MEMORY_AL_08_X 97
#define VISUAL_MEMORY_AL_08_Y 98
#define VISUAL_MEMORY_AL_08_MAX_VEL 99
#define VISUAL_MEMORY_AL_09_LOC 100
#define VISUAL_MEMORY_AL_09_X 101
#define VISUAL_MEMORY_AL_09_Y 102
#define VISUAL_MEMORY_AL_09_MAX_VEL 103
#define VISUAL_MEMORY_AL_10_LOC 104
#define VISUAL_MEMORY_AL_10_X 105
#define VISUAL_MEMORY_AL_10_Y 106
#define VISUAL_MEMORY_AL_10_MAX_VEL 107
#define VISUAL_MEMORY_OP_01_LOC 108
#define VISUAL_MEMORY_OP_01_X 109
#define VISUAL_MEMORY_OP_01_Y 110
#define VISUAL_MEMORY_OP_01_MAX_VEL 111
#define VISUAL_MEMORY_OP_02_LOC 112
#define VISUAL_MEMORY_OP_02_X 113
#define VISUAL_MEMORY_OP_02_Y 114
#define VISUAL_MEMORY_OP_02_MAX_VEL 115
#define VISUAL_MEMORY_OP_03_LOC 116
#define VISUAL_MEMORY_OP_03_X 117
#define VISUAL_MEMORY_OP_03_Y 118
#define VISUAL_MEMORY_OP_03_MAX_VEL 119
#define VISUAL_MEMORY_OP_04_LOC 120
#define VISUAL_MEMORY_OP_04_X 121
#define VISUAL_MEMORY_OP_04_Y 122
#define VISUAL_MEMORY_OP_04_MAX_VEL 123
#define VISUAL_MEMORY_OP_05_LOC 124
#define VISUAL_MEMORY_OP_05_X 125
#define VISUAL_MEMORY_OP_05_Y 126
#define VISUAL_MEMORY_OP_05_MAX_VEL 127
#define VISUAL_MEMORY_OP_06_LOC 128
#define VISUAL_MEMORY_OP_06_X 129
#define VISUAL_MEMORY_OP_06_Y 130
#define VISUAL_MEMORY_OP_06_MAX_VEL 131
#define VISUAL_MEMORY_OP_07_LOC 132
#define VISUAL_MEMORY_OP_07_X 133
#define VISUAL_MEMORY_OP_07_Y 134
#define VISUAL_MEMORY_OP_07_MAX_VEL 135
#define VISUAL_MEMORY_OP_08_LOC 136
#define VISUAL_MEMORY_OP_08_X 137
#define VISUAL_MEMORY_OP_08_Y 138
#define VISUAL_MEMORY_OP_08_MAX_VEL 139
#define VISUAL_MEMORY_OP_09_LOC 140
#define VISUAL_MEMORY_OP_09_X 141
#define VISUAL_MEMORY_OP_09_Y 142
#define VISUAL_MEMORY_OP_09_MAX_VEL 143
#define VISUAL_MEMORY_OP_10_LOC 144
#define VISUAL_MEMORY_OP_10_X 145
#define VISUAL_MEMORY_OP_10_Y 146
#define VISUAL_MEMORY_OP_10_MAX_VEL 147
#define VISUAL_MEMORY_OP_11_LOC 148
#define VISUAL_MEMORY_OP_11_X 149
#define VISUAL_MEMORY_OP_11_Y 150
#define VISUAL_MEMORY_OP_11_MAX_VEL 151
#define VISION_TILT_DEG 152
#define VISION_PAN_DEG 153
#define CBR_COORDINATOR 154
#define CBR_RUN 155
#define LOCALIZATION_BALL_X 156
#define LOCALIZATION_BALL_Y 157
#define LOCALIZATION_RBT01_X 158
#define LOCALIZATION_RBT01_Y 159
#define LOCALIZATION_RBT02_X 160
#define LOCALIZATION_RBT02_Y 161
#define LOCALIZATION_RBT03_X 162
#define LOCALIZATION_RBT03_Y 163
#define LOCALIZATION_RBT04_X 164
#define LOCALIZATION_RBT04_Y 165
#define LOCALIZATION_RBT05_X 166
#define LOCALIZATION_RBT05_Y 167
#define LOCALIZATION_RBT06_X 168
#define LOCALIZATION_RBT06_Y 169
#define LOCALIZATION_RBT07_X 170
#define LOCALIZATION_RBT07_Y 171
#define LOCALIZATION_RBT08_X 172
#define LOCALIZATION_RBT08_Y 173
#define LOCALIZATION_RBT09_X 174
#define LOCALIZATION_RBT09_Y 175
#define LOCALIZATION_RBT10_X 176
#define LOCALIZATION_RBT10_Y 177
#define LOCALIZATION_RBT11_X 178
#define LOCALIZATION_RBT11_Y 179
#define LOCALIZATION_OPP01_X 180
#define LOCALIZATION_OPP01_Y 181
#define LOCALIZATION_OPP02_X 182
#define LOCALIZATION_OPP02_Y 183
#define LOCALIZATION_OPP03_X 184
#define LOCALIZATION_OPP03_Y 185
#define LOCALIZATION_OPP04_X 186
#define LOCALIZATION_OPP04_Y 187
#define LOCALIZATION_OPP05_X 188
#define LOCALIZATION_OPP05_Y 189
#define LOCALIZATION_OPP06_X 190
#define LOCALIZATION_OPP06_Y 191
#define LOCALIZATION_OPP07_X 192
#define LOCALIZATION_OPP07_Y 193
#define LOCALIZATION_OPP08_X 194
#define LOCALIZATION_OPP08_Y 195
#define LOCALIZATION_OPP09_X 196
#define LOCALIZATION_OPP09_Y 197
#define LOCALIZATION_OPP10_X 198
#define LOCALIZATION_OPP10_Y 199
#define LOCALIZATION_OPP11_X 200
#define LOCALIZATION_OPP11_Y 201
#define DECISION_RBT01_DIST_BALL 202
#define DECISION_RBT02_DIST_BALL 203
#define DECISION_RBT03_DIST_BALL 204
#define DECISION_RBT04_DIST_BALL 205
#define VISION_FIRST_GOALPOST 206
#define VISION_SECOND_GOALPOST 207
#define VISION_THIRD_GOALPOST 208
#define VISION_FOURTH_GOALPOST 209
#define fVISION_FIELD 210

//---- TIPO DOUBLE------------------------------
#define VISION_BALL_TIME 0
#define VISION_LAND_TIME 1
#define VISION_RB01_TIME 2
#define VISION_RB02_TIME 3
#define VISION_RB03_TIME 4
#define VISION_RB04_TIME 5
#define VISION_RB05_TIME 6
#define VISION_RB06_TIME 7
#define VISION_RB07_TIME 8
#define VISION_RB08_TIME 9
#define VISION_RB09_TIME 10
#define VISION_RB10_TIME 11
#define VISION_RB11_TIME 12
#define VISION_RB12_TIME 13
#define VISION_RB13_TIME 14
#define VISION_RB14_TIME 15
#define VISION_RB15_TIME 16
#define VISION_RB16_TIME 17
#define VISION_RB17_TIME 18
#define VISION_RB18_TIME 19
#define VISION_RB19_TIME 20
#define VISION_RB20_TIME 21
#define VISION_RB21_TIME 22

//----global variables------------------------------------------------
extern int *mem ; //Variável que manipula memória compartilhada
extern float *memf ; //Variável que manipula memória compartilhada
extern double *memd ; //Variável que manipula memória compartilhada

//----Functions prototype---------------------------------------------
int* using_shared_memory(int); //Função que cria e acopla a memória compartilhada

void write_int(int* , int, int);

void write_float(int*, int, float);

void write_double(int*, int, double);

int read_int(int*, int);

float read_float(int*, int);

double read_double(int*, int);
