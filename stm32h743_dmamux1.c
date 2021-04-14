#include "stm32h743_dmamux1.h"

// DMAMUX1 serves DMA1 & DMA2 modules

// *************************************
// CONNECT PERIPHERAL TO DMA MUX CHANNEL
// *************************************
void DMAMUX1_Connect (DMAMUX_Channel_TypeDef* channel, unsigned char peripheral)
{
	channel->CCR = peripheral;
}	

