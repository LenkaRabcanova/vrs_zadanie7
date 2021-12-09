
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

#define DIGIT_0_ON		LL_GPIO_SetOutputPin(GPIOA, LL_GPIO_PIN_5)
#define DIGIT_1_ON		LL_GPIO_SetOutputPin(GPIOA, LL_GPIO_PIN_4)
#define DIGIT_2_ON		LL_GPIO_SetOutputPin(GPIOA, LL_GPIO_PIN_6)
#define DIGIT_3_ON		LL_GPIO_SetOutputPin(GPIOA, LL_GPIO_PIN_2)
#define DIGIT_TIME_ON	LL_GPIO_SetOutputPin(GPIOA, LL_GPIO_PIN_7)


#ifndef NVIC_PRIORITYGROUP_0
#define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority,
                                                                 4 bits for subpriority */
#define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority,
                                                                 3 bits for subpriority */
#define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority,
                                                                 2 bits for subpriority */
#define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority,
                                                                 1 bit  for subpriority */
#define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority,
                                                                 0 bit  for subpriority */
#endif
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
