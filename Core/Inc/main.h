/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DONE12_Pin GPIO_PIN_13
#define DONE12_GPIO_Port GPIOC
#define DONE12_EXTI_IRQn EXTI15_10_IRQn
#define CSn12_Pin GPIO_PIN_14
#define CSn12_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_15
#define LED2_GPIO_Port GPIOC
#define CSn1_Pin GPIO_PIN_0
#define CSn1_GPIO_Port GPIOF
#define DONE1_Pin GPIO_PIN_1
#define DONE1_GPIO_Port GPIOF
#define DONE1_EXTI_IRQn EXTI1_IRQn
#define DONE2_Pin GPIO_PIN_0
#define DONE2_GPIO_Port GPIOA
#define DONE2_EXTI_IRQn EXTI0_IRQn
#define CSn2_Pin GPIO_PIN_1
#define CSn2_GPIO_Port GPIOA
#define DONE3_Pin GPIO_PIN_4
#define DONE3_GPIO_Port GPIOA
#define DONE3_EXTI_IRQn EXTI4_IRQn
#define CSn3_Pin GPIO_PIN_4
#define CSn3_GPIO_Port GPIOC
#define CSn4_Pin GPIO_PIN_0
#define CSn4_GPIO_Port GPIOB
#define CSn5_Pin GPIO_PIN_1
#define CSn5_GPIO_Port GPIOB
#define DONE4_Pin GPIO_PIN_2
#define DONE4_GPIO_Port GPIOB
#define DONE4_EXTI_IRQn EXTI2_IRQn
#define DONE5_Pin GPIO_PIN_10
#define DONE5_GPIO_Port GPIOB
#define DONE5_EXTI_IRQn EXTI15_10_IRQn
#define CSn6_Pin GPIO_PIN_11
#define CSn6_GPIO_Port GPIOB
#define DONE6_Pin GPIO_PIN_12
#define DONE6_GPIO_Port GPIOB
#define DONE6_EXTI_IRQn EXTI15_10_IRQn
#define DONE7_Pin GPIO_PIN_6
#define DONE7_GPIO_Port GPIOC
#define DONE7_EXTI_IRQn EXTI9_5_IRQn
#define CSn7_Pin GPIO_PIN_8
#define CSn7_GPIO_Port GPIOA
#define DONE8_Pin GPIO_PIN_9
#define DONE8_GPIO_Port GPIOA
#define DONE8_EXTI_IRQn EXTI9_5_IRQn
#define CSn8_Pin GPIO_PIN_10
#define CSn8_GPIO_Port GPIOA
#define DONE9_Pin GPIO_PIN_11
#define DONE9_GPIO_Port GPIOA
#define DONE9_EXTI_IRQn EXTI15_10_IRQn
#define CSn9_Pin GPIO_PIN_12
#define CSn9_GPIO_Port GPIOA
#define DONE10_Pin GPIO_PIN_15
#define DONE10_GPIO_Port GPIOA
#define DONE10_EXTI_IRQn EXTI15_10_IRQn
#define CSn10_Pin GPIO_PIN_6
#define CSn10_GPIO_Port GPIOB
#define CSn11_Pin GPIO_PIN_7
#define CSn11_GPIO_Port GPIOB
#define DONE11_Pin GPIO_PIN_8
#define DONE11_GPIO_Port GPIOB
#define DONE11_EXTI_IRQn EXTI9_5_IRQn
#define LED1_Pin GPIO_PIN_9
#define LED1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
