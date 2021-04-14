#include "stm32h743_dmamux2.h"

// DMAMUX2 serves BDMA module


// *************************************
// CONNECT PERIPHERAL TO DMA MUX CHANNEL
// *************************************
void DMAMUX2_Connect (DMAMUX_Channel_TypeDef* channel, unsigned char peripheral)
{
	channel->CCR = peripheral;
}	

