#ifndef __STM32H743_DMAMUX1__
#define __STM32H743_DMAMUX1__

#include <stm32h743xx.h>

// **********************************************************************
// DMAMUX1 request line multiplexer channel x configuration register
// Bits 6:0 DMAREQ_ID[6:0]: DMA request identification
// **********************************************************************
#define DMAMUX1_REQ_GEN0           1
#define DMAMUX1_REQ_GEN1           2
#define DMAMUX1_REQ_GEN2           3
#define DMAMUX1_REQ_GEN3           4
#define DMAMUX1_REQ_GEN4           5
#define DMAMUX1_REQ_GEN5           6
#define DMAMUX1_REQ_GEN6           7
#define DMAMUX1_REQ_GEN7           8

#define DMAMUX1_ADC1_DMA           9
#define DMAMUX1_ADC2_DMA          10

#define DMAMUX1_TIM1_CH1          11
#define DMAMUX1_TIM1_CH2          12
#define DMAMUX1_TIM1_CH3          13
#define DMAMUX1_TIM1_CH4          14
#define DMAMUX1_TIM1_UP           15
#define DMAMUX1_TIM1_TRIG         16
#define DMAMUX1_TIM1_COM          17

#define DMAMUX1_TIM2_CH1          18
#define DMAMUX1_TIM2_CH2          19
#define DMAMUX1_TIM2_CH3          20
#define DMAMUX1_TIM2_CH4          21
#define DMAMUX1_TIM2_UP           22

#define DMAMUX1_TIM3_CH1          23
#define DMAMUX1_TIM3_CH2          24
#define DMAMUX1_TIM3_CH3          25
#define DMAMUX1_TIM3_CH4          26
#define DMAMUX1_TIM3_UP           27
#define DMAMUX1_TIM3_TRIG         28

#define DMAMUX1_TIM4_CH1          29
#define DMAMUX1_TIM4_CH2          30
#define DMAMUX1_TIM4_CH3          31
#define DMAMUX1_TIM4_UP           32

#define DMAMUX1_I2C1_RX_DMA       33
#define DMAMUX1_I2C1_TX_DMA       34

#define DMAMUX1_I2C2_RX_DMA       35
#define DMAMUX1_I2C2_TX_DMA       36

#define DMAMUX1_SPI1_RX_DMA       37
#define DMAMUX1_SPI1_TX_DMA       38

#define DMAMUX1_SPI2_RX_DMA       39
#define DMAMUX1_SPI2_TX_DMA       40

#define DMAMUX1_USART1_RX_DMA     41
#define DMAMUX1_USART1_TX_DMA     42

#define DMAMUX1_USART2_RX_DMA     43
#define DMAMUX1_USART2_TX_DMA     44

#define DMAMUX1_USART3_RX_DMA     45
#define DMAMUX1_USART3_TX_DMA     46

#define DMAMUX1_TIM8_CH1          47
#define DMAMUX1_TIM8_CH2          48
#define DMAMUX1_TIM8_CH3          49
#define DMAMUX1_TIM8_CH4          50
#define DMAMUX1_TIM8_UP           51
#define DMAMUX1_TIM8_TRIG         52
#define DMAMUX1_TIM8_COM          53

#define DMAMUX1_RESERVED_0       54

#define DMAMUX1_TIM5_CH1          55
#define DMAMUX1_TIM5_CH2          56
#define DMAMUX1_TIM5_CH3          57
#define DMAMUX1_TIM5_CH4          58
#define DMAMUX1_TIM5_UP           59
#define DMAMUX1_TIM5_TRIG         60

#define DMAMUX1_SPI3_RX_DMA       61
#define DMAMUX1_SPI3_TX_DMA       62

#define DMAMUX1_UART4_RX_DMA      63
#define DMAMUX1_UART4_TX_DMA      64

#define DMAMUX1_UART5_RX_DMA      65
#define DMAMUX1_UART5_TX_DMA      66

#define DMAMUX1_DAC_CH1_DMA       67
#define DMAMUX1_DAC_CH2_DMA       68

#define DMAMUX1_TIM6_UP           69
#define DMAMUX1_TIM7_UP           70

#define DMAMUX1_USART6_RX_DMA     71
#define DMAMUX1_USART6_TX_DMA     72

#define DMAMUX1_I2C3_RX_DMA       73
#define DMAMUX1_I2C3_TX_DMA       74

#define DMAMUX1_DCMI_DMA          75

#define DMAMUX1_CRYP_IN_DMA       76
#define DMAMUX1_CRYP_OUT_DMA      77

#define DMAMUX1_HASH_IN_DMA       78

#define DMAMUX1_UART7_RX_DMA      79
#define DMAMUX1_UART7_TX_DMA      80

#define DMAMUX1_UART8_RX_DMA      81
#define DMAMUX1_UART8_TX_DMA      82

#define DMAMUX1_SPI4_RX_DMA       83
#define DMAMUX1_SPI4_TX_DMA       84

#define DMAMUX1_SPI5_RX_DMA       85
#define DMAMUX1_SPI5_TX_DMA       86

#define DMAMUX1_SAI1A_DMA         87
#define DMAMUX1_SAI1B_DMA         88
#define DMAMUX1_SAI2A_DMA         89
#define DMAMUX1_SAI2B_DMA         90
#define DMAMUX1_SWPMI_RX_DMA      91
#define DMAMUX1_SWPMI_TX_DMA      92
#define DMAMUX1_SPDIFRX_DAT_DMA   93
#define DMAMUX1_SPDIFRX_CTRL_DMA  94
#define DMAMUX1_HR_REQ_1          95
#define DMAMUX1_HR_REQ_2          96
#define DMAMUX1_HR_REQ_3          97
#define DMAMUX1_HR_REQ_4          98
#define DMAMUX1_HR_REQ_5          99
#define DMAMUX1_HR_REQ_6         100
#define DMAMUX1_DFSDM1_DMA0      101
#define DMAMUX1_DFSDM1_DMA1      102
#define DMAMUX1_DFSDM1_DMA2      103
#define DMAMUX1_DFSDM1_DMA3      104
#define DMAMUX1_TIM15_CH1        105

#define DMAMUX1_TIM15_UP         106
#define DMAMUX1_TIM15_TRIG       107
#define DMAMUX1_TIM15_COM        108

#define DMAMUX1_TIM16_CH1        109
#define DMAMUX1_TIM16_UP         110

#define DMAMUX1_TIM17_CH1        111
#define DMAMUX1_TIM17_UP         112

#define DMAMUX1_SAI3_A_DMA       113
#define DMAMUX1_SAI3_B_DMA       114

#define DMAMUX1_ADC3_DMA         115

#define DMAMUX1_RESERVED_1       116
#define DMAMUX1_RESERVED_2       117
#define DMAMUX1_RESERVED_3       118
#define DMAMUX1_RESERVED_4       119
#define DMAMUX1_RESERVED_5       120
#define DMAMUX1_RESERVED_6       121
#define DMAMUX1_RESERVED_7       122
#define DMAMUX1_RESERVED_8       123
#define DMAMUX1_RESERVED_9       124
#define DMAMUX1_RESERVED_10      125
#define DMAMUX1_RESERVED_11      126
#define DMAMUX1_RESERVED_12      127

// **********************************************************************
// SIG_ID[2:0]: Signal identification
// Selects the DMA request trigger input used for the channel x of the DMA request generator
// **********************************************************************
#define DMAMUX1_TRIGGER_EVT0       0
#define DMAMUX1_TRIGGER_EVT1       1
#define DMAMUX1_TRIGGER_EVT2       2
#define DMAMUX1_TRIGGER_LPTIM1_OUT 3
#define DMAMUX1_TRIGGER_LPTIM2_OUT 4
#define DMAMUX1_TRIGGER_LPTIM3_OUT 5 
#define DMAMUX1_TRIGGER_EXTIT0     6
#define DMAMUX1_TRIGGER_TIM12_TRGO 7

// **********************************************************************
// SYNC_ID[2:0]: Synchronization identification
// **********************************************************************
#define DMAMUX1_SYNC_EVT0       0
#define DMAMUX1_SYNC_EVT1       1
#define DMAMUX1_SYNC_EVT2       2
#define DMAMUX1_SYNC_LPTIM1_OUT 3
#define DMAMUX1_SYNC_LPTIM2_OUT 4
#define DMAMUX1_SYNC_LPTIM3_OUT 5 
#define DMAMUX1_SYNC_EXTIT0     6
#define DMAMUX1_SYNC_TIM12_TRGO 7

// **********************************************************************
// DMAMUX1 request line multiplexer channel x configuration register
// Bits 26 : 8
// **********************************************************************

#define DMAMUX1_SYNCHONIZATION_OVERRUN_INTERRUPT_ENABLE  DMAMUX_CxCR_SOIE
#define DMAMUX1_SYNCHONIZATION_OVERRUN_INTERRUPT_DISABLE 0

#define DMAMUX1_EVENT_GENERATION_ENABLE                  DMAMUX_CxCR_EGE
#define DMAMUX1_EVENT_GENERATION_DISABLE                 0

#define DMAMUX1_SYNCHONIZATION_ENABLE                    DMAMUX_CxCR_SE
#define DMAMUX1_SYNCHONIZATION_DISABLE                   0

#define DMAMUX1_SYNCHONIZATION_POLARITY_NO_EVENT         0
#define DMAMUX1_SYNCHONIZATION_POLARITY_RISING_EDGE      DMAMUX_CxCR_SPOL_0
#define DMAMUX1_SYNCHONIZATION_POLARITY_FALLING_EDGE     DMAMUX_CxCR_SPOL_1
#define DMAMUX1_SYNCHONIZATION_POLARITY_BOTH_EDGES       (DMAMUX_CxCR_SPOL_0 | DMAMUX_CxCR_SPOL_1)

#define DMAMUX1_NUMBER_OF_DMA_REQUEST(n)                 ((unsigned long)n << DMAMUX_CxCR_NBREQ_Pos)

#define DMAMUX1_SYNCHONIZATION_IDENTIFICATION(n)         ((unsigned long)n << DMAMUX_CxCR_SYNC_ID_Pos)

// **********************************************************************
// FUNCTIONS
// **********************************************************************
void DMAMUX1_Connect (DMAMUX_Channel_TypeDef* channel, unsigned char peripheral);

#endif
