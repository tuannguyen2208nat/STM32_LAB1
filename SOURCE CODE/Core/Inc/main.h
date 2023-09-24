/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f1xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define chan1_Pin GPIO_PIN_1
#define chan1_GPIO_Port GPIOA
#define chan2_Pin GPIO_PIN_2
#define chan2_GPIO_Port GPIOA
#define chan3_Pin GPIO_PIN_3
#define chan3_GPIO_Port GPIOA
#define chan4_Pin GPIO_PIN_4
#define chan4_GPIO_Port GPIOA
#define chan5_Pin GPIO_PIN_5
#define chan5_GPIO_Port GPIOA
#define chan6_Pin GPIO_PIN_6
#define chan6_GPIO_Port GPIOA
#define chan7_Pin GPIO_PIN_7
#define chan7_GPIO_Port GPIOA
#define chan8_Pin GPIO_PIN_8
#define chan8_GPIO_Port GPIOA
#define chan9_Pin GPIO_PIN_9
#define chan9_GPIO_Port GPIOA
#define chan10_Pin GPIO_PIN_10
#define chan10_GPIO_Port GPIOA
#define chan11_Pin GPIO_PIN_11
#define chan11_GPIO_Port GPIOA
#define chan12_Pin GPIO_PIN_12
#define chan12_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
