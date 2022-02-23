#include "controleMotor.h"
#include <linux/gpio.h>

//MOTOR1


// int motor1.pin_1 = 23;
// int motor1.pin_2 = 24;
// int motor1.pin_PWM = 16;

Motor motor1 = {23, 24, 16};
Motor motor2 = {22, 27, 13};

//MOTOR2
// int motor2.pin_2 = 22;
// int motor2.pin_1 = 27;
// int motor1.pin_PWM = 13;


bool init_robo(){

  	/* Iniciando GPIO*/
	if(gpio_request(motor1.pin_1, "motor1.pin_1")) {
		printk("Can not allocate GPIO motor1.pin_1\n");
		return false;
	}

	if(gpio_request(motor1.pin_2, "motor1.pin_2")) {
		printk("Can not allocate GPIO motor1.pin_2\n");
		return false;
	}

	if(gpio_request(motor2.pin_1, "motor2.pin_1")) {
		printk("Can not allocate GPIO motor2.pin_1\n");
		return false;
	}

	if(gpio_request(motor2.pin_2, "motor2.pin_2")) {
		printk("Can not allocate GPIO motor2.pin_2\n");
		return false;
	}

	if(gpio_request(motor1.pin_PWM, "motor1.pin_PWM")) {
		printk("Can not allocate GPIO motor1.pin_PWM\n");
		return false;
	}

	
  if(gpio_request(motor2.pin_PWM, "motor2.pin_PWM")) {
		printk("Can not allocate GPIO motor2.pin_PWM\n");
		return false;
	}

  	if(gpio_direction_output(motor1.pin_1, 0)) {
		printk("Can not set motor1.pin_1 to output!\n");
		return false;
	}

	if(gpio_direction_output(motor1.pin_2, 0)) {
		printk("Can not set motor1.pin_2 to output!\n");
		return false;
	}

	if(gpio_direction_output(motor2.pin_1, 0)) {
		printk("Can not set motor2.pin_1 to output!\n");
		return false;
	}

	if(gpio_direction_output(motor2.pin_2, 0)) {
		printk("Can not set motor2.pin_2 to output!\n");
		return false;
	}

		if(gpio_direction_output(motor1.pin_PWM, 0)) {
		printk("Can not set motor1.pin_PWM to output!\n");
		return false;
	}

		if(gpio_direction_output(motor2.pin_PWM, 0)) {
		printk("Can not set motor2.pin_PWM to output!\n");
		return false;
	}

  return true;

}

bool frente_robo(){
			gpio_set_value(motor1.pin_1, 1);
			gpio_set_value(motor1.pin_2, 0);
			gpio_set_value(motor2.pin_1, 1);
			gpio_set_value(motor2.pin_2, 0);
			gpio_set_value(motor1.pin_PWM, 1);
			gpio_set_value(motor2.pin_PWM, 1);
      return true;
}

bool re_robo(){
  		gpio_set_value(motor1.pin_1, 0);
			gpio_set_value(motor1.pin_2, 1);
			gpio_set_value(motor2.pin_1, 0);
			gpio_set_value(motor2.pin_2, 1);
			gpio_set_value(motor1.pin_PWM, 1);
			gpio_set_value(motor2.pin_PWM, 1);
      return true;
}
bool direita_robo(){
  		gpio_set_value(motor1.pin_1, 1);
			gpio_set_value(motor1.pin_2, 0);
			gpio_set_value(motor2.pin_1, 0);
			gpio_set_value(motor2.pin_2, 0);
			gpio_set_value(motor1.pin_PWM, 1);
			gpio_set_value(motor2.pin_PWM, 1);
      return true;
}
bool esquerda_robo(){
  		gpio_set_value(motor1.pin_1, 0);
			gpio_set_value(motor1.pin_2, 0);
			gpio_set_value(motor2.pin_1, 1);
			gpio_set_value(motor2.pin_2, 0);
			gpio_set_value(motor1.pin_PWM, 1);
			gpio_set_value(motor2.pin_PWM, 1);
      return true;
}
bool para_robo(){
  		gpio_set_value(motor1.pin_1, 0);
			gpio_set_value(motor1.pin_2, 0);
			gpio_set_value(motor2.pin_1, 0);
			gpio_set_value(motor2.pin_2, 0);
			gpio_set_value(motor1.pin_PWM, 0);
			gpio_set_value(motor2.pin_PWM, 0);
      return true;
}

bool direita_360_robo(){
			gpio_set_value(motor1.pin_1, 1);
			gpio_set_value(motor1.pin_2, 0);
			gpio_set_value(motor2.pin_1, 0);
			gpio_set_value(motor2.pin_2, 1);
			gpio_set_value(motor1.pin_PWM, 1);
			gpio_set_value(motor2.pin_PWM, 1);
      return true;
}

bool esquerda_360_robo(){
			gpio_set_value(motor1.pin_1, 0);
			gpio_set_value(motor1.pin_2, 1);
			gpio_set_value(motor2.pin_1, 1);
			gpio_set_value(motor2.pin_2, 0);
			gpio_set_value(motor1.pin_PWM, 1);
			gpio_set_value(motor2.pin_PWM, 1);
      return true;
}

bool off_robo(){
  gpio_set_value(motor1.pin_1, 0);
	gpio_set_value(motor1.pin_2, 0);
	gpio_set_value(motor2.pin_1, 0);
	gpio_set_value(motor2.pin_2, 0);
	gpio_set_value(motor1.pin_PWM, 0);
	gpio_set_value(motor2.pin_PWM, 0);
  gpio_free(motor1.pin_1);
	gpio_free(motor1.pin_2);
	gpio_free(motor2.pin_1);
	gpio_free(motor2.pin_2);
	gpio_free(motor1.pin_PWM);
	gpio_free(motor2.pin_PWM);
  return true;
}

