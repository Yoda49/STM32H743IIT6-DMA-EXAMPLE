#include "stm32h743_dma.h"

// STM32H743
// DMA1 8 streams
// DMA2 8 streams
// => DMAMUX1


// **********************************
// INIT SINGLE BUFFER
// **********************************
void DMA_Init(DMA_Stream_TypeDef* Stream, unsigned long perif, unsigned long mem, unsigned short size, unsigned long conf)
{
	unsigned long tmp = 0;

	tmp  = Stream->CR;
	tmp &= CCR_CLEAR_Mask;
	tmp |= conf;

	Stream->NDTR = size;
	Stream->PAR  = perif;
	Stream->M0AR = mem;
	Stream->CR   = tmp;
}

// **********************************
// INIT DOUBLE BUFFER
// **********************************
void DMA_InitDoubleBuffer(DMA_Stream_TypeDef* Stream, unsigned long perif, unsigned long mem0, unsigned long mem1, unsigned short size, unsigned long conf)
{
	unsigned long tmp = 0;

	tmp  = Stream->CR;
	tmp &= CCR_CLEAR_Mask;
	tmp |= conf;

	Stream->NDTR = size;
	Stream->PAR  = perif;
	Stream->M0AR = mem0;
	Stream->M1AR = mem1;
	Stream->CR   = tmp;
}

// **********************************
// DATA COUNTER
// **********************************
unsigned short DMA_GetCurrentDataCounter(DMA_Stream_TypeDef* stream)
{
	return stream->NDTR;
}


// **********************************
// ENABLE DMA
// **********************************
void DMA_Start(DMA_Stream_TypeDef* stream)
{
	stream->CR |= DMA_SxCR_EN;
}

// ======================================
// DMA RESTART
// ======================================
void DMA_ReStart (DMA_Stream_TypeDef* stream, unsigned short size)
{
	stream->CR &= ~DMA_SxCR_EN;
	
	if      (stream == DMA1_Stream0) DMA1->LIFCR |= DMA1_Stream0_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 0 */
	else if (stream == DMA1_Stream1) DMA1->LIFCR |= DMA1_Stream1_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 1 */
	else if (stream == DMA1_Stream2) DMA1->LIFCR |= DMA1_Stream2_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 2 */
	else if (stream == DMA1_Stream3) DMA1->LIFCR |= DMA1_Stream3_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 3 */
	else if (stream == DMA1_Stream4) DMA1->HIFCR |= DMA1_Stream4_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 4 */
	else if (stream == DMA1_Stream5) DMA1->HIFCR |= DMA1_Stream5_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 5 */
	else if (stream == DMA1_Stream6) DMA1->HIFCR |= DMA1_Stream6_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 6 */
	else if (stream == DMA1_Stream7) DMA1->HIFCR |= DMA1_Stream7_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 7 */
	
	else if (stream == DMA2_Stream0) DMA1->LIFCR |= DMA2_Stream1_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 1 */
	else if (stream == DMA2_Stream1) DMA1->LIFCR |= DMA2_Stream1_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 1 */
	else if (stream == DMA2_Stream2) DMA1->LIFCR |= DMA2_Stream2_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 2 */
	else if (stream == DMA2_Stream3) DMA1->LIFCR |= DMA2_Stream3_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 3 */
	else if (stream == DMA2_Stream4) DMA1->HIFCR |= DMA2_Stream4_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 4 */
	else if (stream == DMA2_Stream5) DMA1->HIFCR |= DMA2_Stream5_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 5 */
	else if (stream == DMA2_Stream6) DMA1->HIFCR |= DMA2_Stream6_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 6 */
	else if (stream == DMA2_Stream7) DMA1->HIFCR |= DMA2_Stream7_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 7 */
	
	    stream->NDTR = size;	// Заполняем все нужные поля. Размер передачи.
	stream->CR  |= DMA_SxCR_EN;
}

// **********************************
// DISABLE DMA
// **********************************
void DMA_Stop(DMA_Stream_TypeDef* stream)
{
	    stream->CR &= (uint16_t)(~DMA_SxCR_EN);
}

// **********************************
// DE INIT DMA
// **********************************
void DMA_DeInit(DMA_Stream_TypeDef* stream)
{
	stream->CR  &= (uint16_t)(~DMA_SxCR_EN);
	stream->CR   = 0;
	stream->NDTR = 0;
	stream->PAR  = 0;
	stream->M0AR = 0;

	if      (stream == DMA1_Stream0) DMA1->LIFCR |= DMA1_Stream0_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 0 */
	else if (stream == DMA1_Stream1) DMA1->LIFCR |= DMA1_Stream1_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 1 */
	else if (stream == DMA1_Stream2) DMA1->LIFCR |= DMA1_Stream2_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 2 */
	else if (stream == DMA1_Stream3) DMA1->LIFCR |= DMA1_Stream3_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 3 */
	else if (stream == DMA1_Stream4) DMA1->HIFCR |= DMA1_Stream4_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 4 */
	else if (stream == DMA1_Stream5) DMA1->HIFCR |= DMA1_Stream5_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 5 */
	else if (stream == DMA1_Stream6) DMA1->HIFCR |= DMA1_Stream6_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 6 */
	else if (stream == DMA1_Stream7) DMA1->HIFCR |= DMA1_Stream7_IT_Mask; /* Reset interrupt pending bits for DMA1 Stream 7 */
	
	else if (stream == DMA2_Stream0) DMA1->LIFCR |= DMA2_Stream1_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 1 */
    else if (stream == DMA2_Stream1) DMA1->LIFCR |= DMA2_Stream1_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 1 */
	else if (stream == DMA2_Stream2) DMA1->LIFCR |= DMA2_Stream2_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 2 */
	else if (stream == DMA2_Stream3) DMA1->LIFCR |= DMA2_Stream3_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 3 */
	else if (stream == DMA2_Stream4) DMA1->HIFCR |= DMA2_Stream4_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 4 */
	else if (stream == DMA2_Stream5) DMA1->HIFCR |= DMA2_Stream5_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 5 */
	else if (stream == DMA2_Stream6) DMA1->HIFCR |= DMA2_Stream6_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 6 */
	else if (stream == DMA2_Stream7) DMA1->HIFCR |= DMA2_Stream7_IT_Mask; /* Reset interrupt pending bits for DMA2 Stream 7 */
}






// ======================================
// MEM TO MEM EXAMPLE DMA1
// ======================================

/*
	unsigned long INbuff[10] = {0xFFFFFFF1,0xFFFFFFF2,0xFFFFFFF3,0xFFFFFFF4,0xFFFFFFF5,0xFFFFFFF6,0xFFFFFFF7,0xFFFFFFF8,0xFFFFFFF9,0xFFFFFF10};
	unsigned long OUTbuff[10];
	
	DMA_DeInit (DMA1_Stream0);
	
	DMA_Init
	(
		DMA1_Stream0,                          // Какой канал работать будет
		(unsigned long)INbuff,                 // Откуда -> Первый элемент это адрес начала массива
		(unsigned long)OUTbuff,                // Куда -> Первый элемент это адрес начала массива
		10,                                    // Сколько. 10 двойных слов, не байтов!!! Массив у нас на 10 элементов
		DMA_DIRECT_MODE_ERROR_INT_DISABLE    |
		DMA_TRANSFER_ERROR_INT_DISABLE       | // Прерывание по передаче выключено
		DMA_HALF_TRANSFER_INT_DISABLE        | // Прерывание по половине выключено
		DMA_TRANSFER_COMPLETE_INT_DISABLE    |
		DMA_FLOW_COUNTER_DMA                 |
		DMA_COPY_FROM_MEMORY_TO_MEMORY       | // Читаем из памяти в память. 
		DMA_CIRCULAR_MODE_DISABLE            | // Циклический режим не нужен. Копируем один раз.
		DMA_PERIPHERAL_INCREMENT_MODE_ENABLE | // Увеличиваем адрес источника
		DMA_MEMORY_INCREMENT_MODE_ENABLE     | // Увеличиваем адрес приемника
		DMA_PERIPHERAL_SIZE_32_BIT           | // Размер источника
		DMA_MEMORY_SIZE_32_BIT               | // Размер приемника
		DMA_PERIPHERAL_INC_OFFSET_SIZE_PSIZE |
		DMA_PRIORITY_LOW                     |  // Низкий приоритет
		DMA_DOUBLE_BUFFER_DISABLE            |
		DMA_CURRENT_TARGET_MEMORY_0          |
		DMA_BUFFERABLE_TRANSFERS_DISABLE     |
		DMA_PERIPHERAL_BURST_TRANSFER_SINGLE |
		DMA_MEMORY_BURST_TRANSFER_SINGLE     
	);
			
	//SCB_InvalidateDCache_by_Addr((unsigned long*)INbuff, 320);
	DMA_Start(DMA1_Stream0);


// ======================================
// USART1 SEND WITH DMAMUX1 DMA1
// ======================================

char test_string [] = "DMA TEST OK\n";

	DMAMUX1_Connect
	(
		DMAMUX1_Channel0, 
		DMAMUX1_SYNCHONIZATION_OVERRUN_INTERRUPT_DISABLE |
		DMAMUX1_EVENT_GENERATION_DISABLE                 |
		DMAMUX1_SYNCHONIZATION_DISABLE                   |
		DMAMUX1_SYNCHONIZATION_POLARITY_NO_EVENT         |
		DMAMUX1_NUMBER_OF_DMA_REQUEST(0)                 |
		DMAMUX1_SYNCHONIZATION_IDENTIFICATION(0)         |
		DMAMUX1_USART1_TX_DMA
	);

	DMA_DeInit (DMA1_Stream0);
	
	DMA_Init
	(
		DMA1_Stream0,
		(unsigned long)&(USART1->TDR),
		(unsigned long)test_string,
		sizeof(test_string) - 1,  
		DMA_DIRECT_MODE_ERROR_INT_DISABLE     |
		DMA_TRANSFER_ERROR_INT_DISABLE        |
		DMA_HALF_TRANSFER_INT_DISABLE         |
		DMA_TRANSFER_COMPLETE_INT_DISABLE     |
		DMA_FLOW_COUNTER_DMA                  |
		DMA_COPY_FROM_MEMORY_TO_PERIPHERAL    |
		DMA_CIRCULAR_MODE_DISABLE             |
		DMA_PERIPHERAL_INCREMENT_MODE_DISABLE |
		DMA_MEMORY_INCREMENT_MODE_ENABLE      |
		DMA_PERIPHERAL_SIZE_8_BIT             |
		DMA_MEMORY_SIZE_8_BIT                 |
		DMA_PERIPHERAL_INC_OFFSET_SIZE_PSIZE  |
		DMA_PRIORITY_LOW                      |
		DMA_DOUBLE_BUFFER_DISABLE             |
		DMA_CURRENT_TARGET_MEMORY_0           |
		DMA_BUFFERABLE_TRANSFERS_DISABLE      |
		DMA_PERIPHERAL_BURST_TRANSFER_SINGLE  |
		DMA_MEMORY_BURST_TRANSFER_SINGLE     
	);
	
	while (!(USART1->ISR & USART_ISR_TXE_TXFNF)) {};
	DMA_Start(DMA1_Stream0);
	
	DMA_ReStart(DMA1_Stream0, sizeof(test_string) - 1);



// ======================================
// USART1 RECEIVE WITH DMAMUX1 DMA1
// SINGLE BUFFER
// ======================================

char test_string [50] = {};

	DMAMUX1_Connect
	(
		DMAMUX1_Channel0, 
		DMAMUX1_SYNCHONIZATION_OVERRUN_INTERRUPT_DISABLE |
		DMAMUX1_EVENT_GENERATION_DISABLE                 |
		DMAMUX1_SYNCHONIZATION_DISABLE                   |
		DMAMUX1_SYNCHONIZATION_POLARITY_NO_EVENT         |
		DMAMUX1_NUMBER_OF_DMA_REQUEST(0)                 |
		DMAMUX1_SYNCHONIZATION_IDENTIFICATION(0)         |
		DMAMUX1_USART1_RX_DMA
	);

	DMA_DeInit (DMA1_Stream0);
	
	DMA_Init
	(
		DMA1_Stream0,
		(unsigned long)&(USART1->RDR),
		(unsigned long)test_string,
		50,  
		DMA_DIRECT_MODE_ERROR_INT_DISABLE     |
		DMA_TRANSFER_ERROR_INT_DISABLE        |
		DMA_HALF_TRANSFER_INT_DISABLE         |
		DMA_TRANSFER_COMPLETE_INT_DISABLE     |
		DMA_FLOW_COUNTER_DMA                  |
		DMA_COPY_FROM_PERIPHERAL_TO_MEMORY    |
		DMA_CIRCULAR_MODE_ENABLE              |
		DMA_PERIPHERAL_INCREMENT_MODE_DISABLE |
		DMA_MEMORY_INCREMENT_MODE_ENABLE      |
		DMA_PERIPHERAL_SIZE_8_BIT             |
		DMA_MEMORY_SIZE_8_BIT                 |
		DMA_PERIPHERAL_INC_OFFSET_SIZE_PSIZE  |
		DMA_PRIORITY_LOW                      |
		DMA_DOUBLE_BUFFER_DISABLE             |
		DMA_CURRENT_TARGET_MEMORY_0           |
		DMA_BUFFERABLE_TRANSFERS_DISABLE      |
		DMA_PERIPHERAL_BURST_TRANSFER_SINGLE  |
		DMA_MEMORY_BURST_TRANSFER_SINGLE     
	);
	
	DMA_Start(DMA1_Stream0);

// ======================================
// USART1 RECEIVE WITH DMAMUX1 DMA1
// DOUBLE BUFFER
// ======================================

char test_string1 [50] = {};
char test_string2 [50] = {};

	DMAMUX1_Connect
	(
		DMAMUX1_Channel0, 
		DMAMUX1_SYNCHONIZATION_OVERRUN_INTERRUPT_DISABLE |
		DMAMUX1_EVENT_GENERATION_DISABLE                 |
		DMAMUX1_SYNCHONIZATION_DISABLE                   |
		DMAMUX1_SYNCHONIZATION_POLARITY_NO_EVENT         |
		DMAMUX1_NUMBER_OF_DMA_REQUEST(0)                 |
		DMAMUX1_SYNCHONIZATION_IDENTIFICATION(0)         |
		DMAMUX1_USART1_RX_DMA
	);

	DMA_DeInit (DMA1_Stream0);
	
	DMA_InitDoubleBuffer
	(
		DMA1_Stream0,
		(unsigned long)&(USART1->RDR),
		(unsigned long)test_string1,
		(unsigned long)test_string2,
		50,  
		DMA_DIRECT_MODE_ERROR_INT_DISABLE     |
		DMA_TRANSFER_ERROR_INT_DISABLE        |
		DMA_HALF_TRANSFER_INT_DISABLE         |
		DMA_TRANSFER_COMPLETE_INT_DISABLE     |
		DMA_FLOW_COUNTER_DMA                  |
		DMA_COPY_FROM_PERIPHERAL_TO_MEMORY    |
		DMA_CIRCULAR_MODE_ENABLE              |
		DMA_PERIPHERAL_INCREMENT_MODE_DISABLE |
		DMA_MEMORY_INCREMENT_MODE_ENABLE      |
		DMA_PERIPHERAL_SIZE_8_BIT             |
		DMA_MEMORY_SIZE_8_BIT                 |
		DMA_PERIPHERAL_INC_OFFSET_SIZE_PSIZE  |
		DMA_PRIORITY_LOW                      |
		DMA_DOUBLE_BUFFER_ENABLE              |
		DMA_CURRENT_TARGET_MEMORY_0           |
		DMA_BUFFERABLE_TRANSFERS_DISABLE      |
		DMA_PERIPHERAL_BURST_TRANSFER_SINGLE  |
		DMA_MEMORY_BURST_TRANSFER_SINGLE     
	);
	
	DMA_Start(DMA1_Stream0);
*/
