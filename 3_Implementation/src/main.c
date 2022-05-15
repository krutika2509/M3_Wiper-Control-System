#include "stm32f4xx_hal.h"
void Init_OnBoard_LEDs(void);
void Init_PushButton (void);
void configure_Button(void);
void Delay_ms(volatile int time_ms);
GPIO_PinState state;
int main(void)
{
	Init_OnBoard_LEDs();
	Init_PushButton();
	configure_Button();
	__HAL_RCC_GPIOD_CLK_ENABLE();
	int count = 0;
	while(1){

	if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)==1) {
		count = (count+1)%4;
		Delay_ms(1000);
				}
	if (count==1) {
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);// red on

	} else {


		// block of code to be executed if the condition is false
	}
	if (count==2) {
		while(count==2){


		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);


		  }

		} else {


			// block of code to be executed if the condition is false
		}

	if (count==3) {

		while(count==3){

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
		Delay_ms(5000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(5000);
		//break;

		}
		} else {


			// block of code to be executed if the condition is false
		}


	if (count==4) {

		while(count==4){

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
		Delay_ms(1000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(1000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
		Delay_ms(1000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(1000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
		Delay_ms(1000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(1000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
		Delay_ms(1000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(1000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
		Delay_ms(1000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(1000);

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
		Delay_ms(1000);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
		Delay_ms(1000);
		//break;

		}
		} else {


			// block of code to be executed if the condition is false
		}

	if (count==5) {

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);

		} else {


			// block of code to be executed if the condition is false
		}

}
}


void configure_Button(void)
{
	__HAL_RCC_GPIOA_CLK_ENABLE(); //Enable clock to GPIOA
	GPIO_InitTypeDef PushButton;  // declare a variable of type struct. GPIO_InitTypeDef
	PushButton.Mode = GPIO_MODE_INPUT; // set pin mode to input
	PushButton.Pin = GPIO_PIN_0;  // select pin PA0 only
	PushButton.Pull = GPIO_NOPULL; // set no internal pull-up or pull-down resistor
	HAL_GPIO_Init(GPIOA, &PushButton); //  initialize PA0 pins by passing port name and address of PushButton struct
}

void Init_PushButton(void)
{
	__HAL_RCC_GPIOD_CLK_ENABLE();
	GPIO_InitTypeDef pushbutton;
	pushbutton.Pin = GPIO_PIN_0; //PAO
	pushbutton.Mode = GPIO_MODE_INPUT;
	pushbutton.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(GPIOA, &pushbutton);

}

void Init_OnBoard_LEDs(void)
{
	 __HAL_RCC_GPIOD_CLK_ENABLE();
	GPIO_InitTypeDef BoardLEDs;
	BoardLEDs.Mode = GPIO_MODE_OUTPUT_PP;
	BoardLEDs.Pin = GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15;
	BoardLEDs.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(GPIOD, &BoardLEDs);
}



void Delay_ms(volatile int time_ms)
{
	int i;
    for(i = 0; i < time_ms*40000; i++)
    {}  /* execute NOP for 1ms */
}
