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
#include "stm32f3xx_hal.h"

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
#define segmentB_Pin GPIO_PIN_0
#define segmentB_GPIO_Port GPIOA
#define segmentA_Pin GPIO_PIN_1
#define segmentA_GPIO_Port GPIOA
#define digit3_Pin GPIO_PIN_2
#define digit3_GPIO_Port GPIOA
#define segmentF_Pin GPIO_PIN_3
#define segmentF_GPIO_Port GPIOA
#define digit1_Pin GPIO_PIN_4
#define digit1_GPIO_Port GPIOA
#define digit0_Pin GPIO_PIN_5
#define digit0_GPIO_Port GPIOA
#define digit2_Pin GPIO_PIN_6
#define digit2_GPIO_Port GPIOA
#define digitTime_Pin GPIO_PIN_7
#define digitTime_GPIO_Port GPIOA
#define segmentDP_Pin GPIO_PIN_1
#define segmentDP_GPIO_Port GPIOB
#define segmentC_Pin GPIO_PIN_8
#define segmentC_GPIO_Port GPIOA
#define segmentE_Pin GPIO_PIN_11
#define segmentE_GPIO_Port GPIOA
#define segmentG_Pin GPIO_PIN_4
#define segmentG_GPIO_Port GPIOB
#define segmentD_Pin GPIO_PIN_5
#define segmentD_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
