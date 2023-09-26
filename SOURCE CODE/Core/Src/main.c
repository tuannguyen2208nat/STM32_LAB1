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
  void do1()
{HAL_GPIO_WritePin(led_red1_GPIO_Port, led_red1_Pin,RESET);
 HAL_GPIO_WritePin(led_green1_GPIO_Port, led_green1_Pin,SET);
 HAL_GPIO_WritePin(led_yellow1_GPIO_Port, led_yellow1_Pin,SET);}
  void xanh1()
{
HAL_GPIO_WritePin(led_red1_GPIO_Port, led_red1_Pin,SET);
HAL_GPIO_WritePin(led_green1_GPIO_Port, led_green1_Pin,RESET);
HAL_GPIO_WritePin(led_yellow1_GPIO_Port, led_yellow1_Pin,SET);
}
  void vang1()
{HAL_GPIO_WritePin(led_red1_GPIO_Port, led_red1_Pin,SET);
 HAL_GPIO_WritePin(led_green1_GPIO_Port, led_green1_Pin,SET);
 HAL_GPIO_WritePin(led_yellow1_GPIO_Port, led_yellow1_Pin,RESET);
}
  void do2()
{HAL_GPIO_WritePin(led_red2_GPIO_Port, led_red2_Pin,RESET);
 HAL_GPIO_WritePin(led_green2_GPIO_Port, led_green2_Pin,SET);
 HAL_GPIO_WritePin(led_yellow2_GPIO_Port, led_yellow2_Pin,SET);}
  void xanh2()
{
HAL_GPIO_WritePin(led_red2_GPIO_Port, led_red2_Pin,SET);
HAL_GPIO_WritePin(led_green2_GPIO_Port, led_green2_Pin,RESET);
HAL_GPIO_WritePin(led_yellow2_GPIO_Port, led_yellow2_Pin,SET);
}
  void vang2()
{HAL_GPIO_WritePin(led_red2_GPIO_Port, led_red2_Pin,SET);
 HAL_GPIO_WritePin(led_green2_GPIO_Port, led_green2_Pin,SET);
 HAL_GPIO_WritePin(led_yellow2_GPIO_Port, led_yellow2_Pin,RESET);
}
  void display7SEGa(int n)
  {
  	switch (n)
  	{
  	case 0 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, RESET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, RESET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, SET);
  	    break ;
  	case 1 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, SET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, SET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, SET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, SET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, SET);
  	    break;
  	case 2 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, SET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, RESET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, SET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  	    break ;
  	case 3 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, SET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, SET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  	    break ;
  	case 4 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, SET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, SET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, SET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, RESET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  		break ;
  	case 5 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, SET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, SET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, RESET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  		break ;
  	case 6 :
  	  	HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, SET);
  	  	HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  	  	break ;
  	default : break;

  	}
  }
  void display7SEGb(int n)
   {
   	switch (n)
   	{
   	case 0 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, RESET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, RESET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, SET);
   	    break ;
   	case 1 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, SET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, SET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, SET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, SET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, SET);
   	    break;
   	case 2 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, SET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, RESET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, SET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   	    break ;
   	case 3 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, SET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, SET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   	    break ;
   	case 4 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, SET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, SET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, SET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, RESET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   		break ;
   	case 5 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, SET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, SET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, RESET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   		break ;
   	case 6 :
   	   	HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, SET);
   	   	HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   	   	break;
   	default : break;

   	}
   }

  /* USER CODE END 2 */
  int a,b;
  int i=1;
  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
	  switch (i)
	  {
	  case 1 :
	  	do1();xanh2();
	  	for(a=5,b=3;b>=1;a--,b--)
	  	{
	  		display7SEGa(a);
	  		display7SEGb(b);
	  		HAL_Delay(1000);
	  	}
	  	break;
	  case 2 :
	  	do1();vang2();
	  	for(a=2,b=2;b>=1;a--,b--)
	  	{
	  		display7SEGa(a);
	  		display7SEGb(b);
	  		HAL_Delay(1000);
	  	}
	  	break;
	  case 3 :
	  	xanh1();do2();
	  	for(a=3,b=6;a>=1;a--,b--)
	  	{
	  		display7SEGa(a);
	  		display7SEGb(b);
	  		HAL_Delay(1000);
	  	}
	  	break;
	  case 4 : vang1();do2();
	  for(a=2,b=2;a>=1;a--,b--)
	  	{
	  		display7SEGa(a);
	  		display7SEGb(b);
	  		HAL_Delay(1000);
	  	}
	      i=0;break;
	  default : break;
	  }
	  i++;
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
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, led_red1_Pin|led_yellow1_Pin|led_green1_Pin|led_red2_Pin
                          |led_yellow2_Pin|led_green2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, chan1a_Pin|chan1b_Pin|chan1c_Pin|chan2c_Pin
                          |chan2d_Pin|chan2e_Pin|chan2f_Pin|chan2g_Pin
                          |chan1d_Pin|chan1e_Pin|chan1f_Pin|chan1g_Pin
                          |chan2a_Pin|chan2b_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : led_red1_Pin led_yellow1_Pin led_green1_Pin led_red2_Pin
                           led_yellow2_Pin led_green2_Pin */
  GPIO_InitStruct.Pin = led_red1_Pin|led_yellow1_Pin|led_green1_Pin|led_red2_Pin
                          |led_yellow2_Pin|led_green2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : chan1a_Pin chan1b_Pin chan1c_Pin chan2c_Pin
                           chan2d_Pin chan2e_Pin chan2f_Pin chan2g_Pin
                           chan1d_Pin chan1e_Pin chan1f_Pin chan1g_Pin
                           chan2a_Pin chan2b_Pin */
  GPIO_InitStruct.Pin = chan1a_Pin|chan1b_Pin|chan1c_Pin|chan2c_Pin
                          |chan2d_Pin|chan2e_Pin|chan2f_Pin|chan2g_Pin
                          |chan1d_Pin|chan1e_Pin|chan1f_Pin|chan1g_Pin
                          |chan2a_Pin|chan2b_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

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
