/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  void clearAllClock ()
   {
 	  HAL_GPIO_WritePin(chan1_GPIO_Port, chan1_Pin,SET);
 	  HAL_GPIO_WritePin(chan2_GPIO_Port, chan2_Pin,SET);
 	  HAL_GPIO_WritePin(chan3_GPIO_Port, chan3_Pin,SET);
 	  HAL_GPIO_WritePin(chan4_GPIO_Port, chan4_Pin,SET);
 	  HAL_GPIO_WritePin(chan5_GPIO_Port, chan5_Pin,SET);
 	  HAL_GPIO_WritePin(chan6_GPIO_Port, chan6_Pin,SET);
 	  HAL_GPIO_WritePin(chan7_GPIO_Port, chan7_Pin,SET);
 	  HAL_GPIO_WritePin(chan8_GPIO_Port, chan8_Pin,SET);
 	  HAL_GPIO_WritePin(chan9_GPIO_Port, chan9_Pin,SET);
 	  HAL_GPIO_WritePin(chan10_GPIO_Port, chan10_Pin,SET);
 	  HAL_GPIO_WritePin(chan11_GPIO_Port,chan11_Pin,SET);
 	  HAL_GPIO_WritePin(chan12_GPIO_Port, chan12_Pin,SET);
   }

   void den1(){HAL_GPIO_WritePin(chan1_GPIO_Port, chan1_Pin,RESET);}
   void den2(){ HAL_GPIO_WritePin(chan2_GPIO_Port, chan2_Pin,RESET); }
   void den3(){ HAL_GPIO_WritePin(chan3_GPIO_Port, chan3_Pin,RESET); }
   void den4(){ HAL_GPIO_WritePin(chan4_GPIO_Port, chan4_Pin,RESET); }
   void den5(){ HAL_GPIO_WritePin(chan5_GPIO_Port, chan5_Pin,RESET); }
   void den6(){ HAL_GPIO_WritePin(chan6_GPIO_Port, chan6_Pin,RESET); }
   void den7(){ HAL_GPIO_WritePin(chan7_GPIO_Port, chan7_Pin,RESET); }
   void den8(){ HAL_GPIO_WritePin(chan8_GPIO_Port, chan8_Pin,RESET); }
   void den9(){ HAL_GPIO_WritePin(chan9_GPIO_Port, chan9_Pin,RESET); }
   void den10(){ HAL_GPIO_WritePin(chan10_GPIO_Port, chan10_Pin,RESET); }
   void den11(){ HAL_GPIO_WritePin(chan11_GPIO_Port, chan11_Pin,RESET); }
   void den12(){ HAL_GPIO_WritePin(chan12_GPIO_Port, chan12_Pin,RESET); }

   void setNumberOnClock(int num)
   {
 	  int a=num+1;
 	 	switch (a)
 	 	{
 	 	case 1 : den1();break;
 	 	case 2 : den2();break;
 	 	case 3 : den3();break;
 	 	case 4 : den4();break;
 	 	case 5 : den5();break;
 	 	case 6 : den6();break;
 	 	case 7 : den7();break;
 	 	case 8 : den8();break;
 	 	case 9 : den9();break;
 	 	case 10 : den10();break;
 	 	case 11 : den11();break;
 	 	case 12 : den12();break;
 	 	default: break;
 	 	}
 	 	HAL_Delay(1000);

 	  }

   void clearNumberOnClock(int num)
     {  int a=num+1;
     	switch (a)
     		{
     		case 1 : dentat1();break;
     		case 2 : dentat2();break;
     		case 3 : dentat3();break;
     		case 4 : dentat4();break;
     		case 5 : dentat5();break;
     		case 6 : dentat6();break;
     		case 7 : dentat7();break;
     		case 8 : dentat8();break;
     		case 9 : dentat9();break;
     		case 10 : dentat10();break;
     		case 11 : dentat11();break;
     		case 12 : dentat12();break;
     		default: break;
     		}
     }

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, chan1_Pin|chan2_Pin|chan3_Pin|chan4_Pin
                          |chan5_Pin|chan6_Pin|chan7_Pin|chan8_Pin
                          |chan9_Pin|chan10_Pin|chan11_Pin|chan12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : chan1_Pin chan2_Pin chan3_Pin chan4_Pin
                           chan5_Pin chan6_Pin chan7_Pin chan8_Pin
                           chan9_Pin chan10_Pin chan11_Pin chan12_Pin */
  GPIO_InitStruct.Pin = chan1_Pin|chan2_Pin|chan3_Pin|chan4_Pin
                          |chan5_Pin|chan6_Pin|chan7_Pin|chan8_Pin
                          |chan9_Pin|chan10_Pin|chan11_Pin|chan12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
