#ifndef __CONTROLEMOTOR__H__
#define __CONTROLEMOTOR__H__

//MOTOR1

typedef struct
{
int pin_1;
int pin_2;
int pin_PWM;
} Motor;

Motor motor1, motor2;

bool init_robo(void);
bool off_robo(void);
bool frente_robo(void);
bool re_robo(void);
bool direita_robo(void);
bool esquerda_robo(void);
bool para_robo(void);
bool direita_360_robo(void);
bool esquerda_360_robo(void);

#endif  //!__CONTROLEMOTOR__H__