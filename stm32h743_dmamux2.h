#ifndef __STM32H743_DMAMUX2__
#define __STM32H743_DMAMUX2__

#include <stm32h743xx.h>

// **********************************************************************
// DMAMUX2 request line multiplexer channel x configuration register
// Bits 4:0 DMAREQ_ID[4:0]: DMA request identification
// **********************************************************************
#define DMAMUX2_REQ_GEN0        1
#define DMAMUX2_REQ_GEN1        2
#define DMAMUX2_REQ_GEN2        3
#define DMAMUX2_REQ_GEN3        4
#define DMAMUX2_REQ_GEN4        5
#define DMAMUX2_REQ_GEN5        6
#define DMAMUX2_REQ_GEN6        7
#define DMAMUX2_REQ_GEN7        8
#define DMAMUX2_LPUART1_RX_DMA  9
#define DMAMUX2_LPUART1_TX_DMA 10
#define DMAMUX2_SPI6_RX_DMA    11
#define DMAMUX2_SPI6_TX_DMA    12
#define DMAMUX2_I2C4_RX_DMA    13
#define DMAMUX2_I2C4_TX_DMA    14
#define DMAMUX2_SAI4_A_DMA     15
#define DMAMUX2_SAI4_B_DMA     16
#define DMAMUX2_ADC3_DMA       17
#define DMAMUX2_RESERVED_0     18
#define DMAMUX2_RESERVED_1     19
#define DMAMUX2_RESERVED_2     20
#define DMAMUX2_RESERVED_3     21
#define DMAMUX2_RESERVED_4     22
#define DMAMUX2_RESERVED_5     23
#define DMAMUX2_RESERVED_6     24
#define DMAMUX2_RESERVED_7     25
#define DMAMUX2_RESERVED_8     26
#define DMAMUX2_RESERVED_9     27
#define DMAMUX2_RESERVED_10    28
#define DMAMUX2_RESERVED_11    29
#define DMAMUX2_RESERVED_12    30
#define DMAMUX2_RESERVED_13    31

// **********************************************************************
// SIG_ID[2:0]: Signal identification
// Selects the DMA request trigger input used for the channel x of the DMA request generator
// **********************************************************************
#define DMAMUX2_TRIGGER_EVT0              0
#define DMAMUX2_TRIGGER_EVT1              1
#define DMAMUX2_TRIGGER_EVT2              2
#define DMAMUX2_TRIGGER_EVT3              3
#define DMAMUX2_TRIGGER_EVT4              4
#define DMAMUX2_TRIGGER_EVT5              5
#define DMAMUX2_TRIGGER_EVT6              6
#define DMAMUX2_TRIGGER_LPUART_RX_WKUP    7
#define DMAMUX2_TRIGGER_LPUART_TX_WKUP    8
#define DMAMUX2_TRIGGER_LPTIM2_WKUP       9
#define DMAMUX2_TRIGGER_LPTIM2_OUT       10
#define DMAMUX2_TRIGGER_LPTIM3_WKUP      11
#define DMAMUX2_TRIGGER_LPTIM3_OUT       12
#define DMAMUX2_TRIGGER_LPTIM4_AIT       13
#define DMAMUX2_TRIGGER_LPTIM5_AIT       14
#define DMAMUX2_TRIGGER_I2C4_WKUP        15
#define DMAMUX2_TRIGGER_SPI6_WKUP        16
#define DMAMUX2_TRIGGER_COMP1_OUT        17
#define DMAMUX2_TRIGGER_COMP2_OUT        18
#define DMAMUX2_TRIGGER_RTC_WKUP         19
#define DMAMUX2_TRIGGER_SYSCFG_EXTI0_MUX 20
#define DMAMUX2_TRIGGER_SYSCFG_EXTI2_MUX 21
#define DMAMUX2_TRIGGER_I2C4_EVENT_IT    22
#define DMAMUX2_TRIGGER_SPI6_IT          23
#define DMAMUX2_TRIGGER_LPUART1_IT_T     24
#define DMAMUX2_TRIGGER_LPUART1_IT_R     25
#define DMAMUX2_TRIGGER_ADC3_IT          26
#define DMAMUX2_TRIGGER_ADC3_AWD1        27
#define DMAMUX2_TRIGGER_BDMA_CH0_IT      28
#define DMAMUX2_TRIGGER_BDMA_CH1_IT      29
#define DMAMUX2_TRIGGER_RESERVED_0       30
#define DMAMUX2_TRIGGER_RESERVED_1       31

// **********************************************************************
// SYNC_ID[2:0]: Synchronization identification
// **********************************************************************
#define DMAMUX2_SYNC_EVT0              0
#define DMAMUX2_SYNC_EVT1              1
#define DMAMUX2_SYNC_EVT2              2
#define DMAMUX2_SYNC_EVT3              3
#define DMAMUX2_SYNC_EVT4              4
#define DMAMUX2_SYNC_EVT5              5
#define DMAMUX2_SYNC_LPUART1_RX_WKUP   6
#define DMAMUX2_SYNC_LPUART1_TX_WKUP   7
#define DMAMUX2_SYNC_LPTIM2_OUT        8
#define DMAMUX2_SYNC_LPTIM3_OUT        9
#define DMAMUX2_SYNC_I2C4_WKUP        10
#define DMAMUX2_SYNC_SPI6_WKUP        11
#define DMAMUX2_SYNC_COMP1_OUT        12
#define DMAMUX2_SYNC_RTC_WKUP         13
#define DMAMUX2_SYNC_SYSCFG_EXTI0_MUX 14
#define DMAMUX2_SYNC_SYSCFG_EXTI2_MUX 15
#define DMAMUX2_SYNC_RESERVED_0       16
#define DMAMUX2_SYNC_RESERVED_1       17
#define DMAMUX2_SYNC_RESERVED_2       18
#define DMAMUX2_SYNC_RESERVED_3       19
#define DMAMUX2_SYNC_RESERVED_4       20
#define DMAMUX2_SYNC_RESERVED_5       21
#define DMAMUX2_SYNC_RESERVED_6       22
#define DMAMUX2_SYNC_RESERVED_7       23
#define DMAMUX2_SYNC_RESERVED_8       24
#define DMAMUX2_SYNC_RESERVED_9       25
#define DMAMUX2_SYNC_RESERVED_10      26
#define DMAMUX2_SYNC_RESERVED_11      27
#define DMAMUX2_SYNC_RESERVED_12      28
#define DMAMUX2_SYNC_RESERVED_13      29
#define DMAMUX2_SYNC_RESERVED_14      30
#define DMAMUX2_SYNC_RESERVED_15      31

// **********************************************************************
// DMAMUX2 request line multiplexer channel x configuration register
// Bits 26 : 8
// **********************************************************************

#define DMAMUX2_SYNCHONIZATION_OVERRUN_INTERRUPT_ENABLE  DMAMUX_CxCR_SOIE
#define DMAMUX2_SYNCHONIZATION_OVERRUN_INTERRUPT_DISABLE 0

#define DMAMUX2_EVENT_GENERATION_ENABLE                  DMAMUX_CxCR_EGE
#define DMAMUX2_EVENT_GENERATION_DISABLE                 0

#define DMAMUX2_SYNCHONIZATION_ENABLE                    DMAMUX_CxCR_SE
#define DMAMUX2_SYNCHONIZATION_DISABLE                   0

#define DMAMUX2_SYNCHONIZATION_POLARITY_NO_EVENT         0
#define DMAMUX2_SYNCHONIZATION_POLARITY_RISING_EDGE      DMAMUX_CxCR_SPOL_0
#define DMAMUX2_SYNCHONIZATION_POLARITY_FALLING_EDGE     DMAMUX_CxCR_SPOL_1
#define DMAMUX2_SYNCHONIZATION_POLARITY_BOTH_EDGES       (DMAMUX_CxCR_SPOL_0 | DMAMUX_CxCR_SPOL_1)

#define DMAMUX2_NUMBER_OF_DMA_REQUEST(n)                 ((unsigned long)n << DMAMUX_CxCR_NBREQ_Pos)

#define DMAMUX2_SYNCHONIZATION_IDENTIFICATION(n)         ((unsigned long)n << DMAMUX_CxCR_SYNC_ID_Pos)

// **********************************************************************
// FUNCTIONS
// **********************************************************************
void DMAMUX2_Connect (DMAMUX_Channel_TypeDef* channel, unsigned char peripheral);

#endif
