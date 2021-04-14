#ifndef __STM32H743_DMA_H__
#define __STM32H743_DMA_H__

#include <stm32h743xx.h>

/* DMA1 Channelx interrupt pending bit masks */
#define DMA1_Stream0_IT_Mask    ((unsigned long)(DMA_LIFCR_CFEIF0 | DMA_LIFCR_CDMEIF0 | DMA_LIFCR_CTEIF0 | DMA_LIFCR_CHTIF0 | DMA_LIFCR_CTCIF0))
#define DMA1_Stream1_IT_Mask    ((unsigned long)(DMA_LIFCR_CFEIF1 | DMA_LIFCR_CDMEIF1 | DMA_LIFCR_CTEIF1 | DMA_LIFCR_CHTIF1 | DMA_LIFCR_CTCIF1))
#define DMA1_Stream2_IT_Mask    ((unsigned long)(DMA_LIFCR_CFEIF2 | DMA_LIFCR_CDMEIF2 | DMA_LIFCR_CTEIF2 | DMA_LIFCR_CHTIF2 | DMA_LIFCR_CTCIF2))
#define DMA1_Stream3_IT_Mask    ((unsigned long)(DMA_LIFCR_CFEIF3 | DMA_LIFCR_CDMEIF3 | DMA_LIFCR_CTEIF3 | DMA_LIFCR_CHTIF3 | DMA_LIFCR_CTCIF3))
#define DMA1_Stream4_IT_Mask    ((unsigned long)(DMA_HIFCR_CFEIF4 | DMA_HIFCR_CDMEIF4 | DMA_HIFCR_CTEIF4 | DMA_HIFCR_CHTIF4 | DMA_HIFCR_CTCIF4))
#define DMA1_Stream5_IT_Mask    ((unsigned long)(DMA_HIFCR_CFEIF5 | DMA_HIFCR_CDMEIF5 | DMA_HIFCR_CTEIF5 | DMA_HIFCR_CHTIF5 | DMA_HIFCR_CTCIF5))
#define DMA1_Stream6_IT_Mask    ((unsigned long)(DMA_HIFCR_CFEIF6 | DMA_HIFCR_CDMEIF6 | DMA_HIFCR_CTEIF6 | DMA_HIFCR_CHTIF6 | DMA_HIFCR_CTCIF6))
#define DMA1_Stream7_IT_Mask    ((unsigned long)(DMA_HIFCR_CFEIF7 | DMA_HIFCR_CDMEIF7 | DMA_HIFCR_CTEIF7 | DMA_HIFCR_CHTIF7 | DMA_HIFCR_CTCIF7))

/* DMA2 Channelx interrupt pending bit masks */
#define DMA2_Stream0_IT_Mask    ((unsigned long)(DMA_LIFCR_CFEIF0 | DMA_LIFCR_CDMEIF0 | DMA_LIFCR_CTEIF0 | DMA_LIFCR_CHTIF0 | DMA_LIFCR_CTCIF0))
#define DMA2_Stream1_IT_Mask    ((unsigned long)(DMA_LIFCR_CFEIF1 | DMA_LIFCR_CDMEIF1 | DMA_LIFCR_CTEIF1 | DMA_LIFCR_CHTIF1 | DMA_LIFCR_CTCIF1))
#define DMA2_Stream2_IT_Mask    ((unsigned long)(DMA_LIFCR_CFEIF2 | DMA_LIFCR_CDMEIF2 | DMA_LIFCR_CTEIF2 | DMA_LIFCR_CHTIF2 | DMA_LIFCR_CTCIF2))
#define DMA2_Stream3_IT_Mask    ((unsigned long)(DMA_LIFCR_CFEIF3 | DMA_LIFCR_CDMEIF3 | DMA_LIFCR_CTEIF3 | DMA_LIFCR_CHTIF3 | DMA_LIFCR_CTCIF3))
#define DMA2_Stream4_IT_Mask    ((unsigned long)(DMA_HIFCR_CFEIF4 | DMA_HIFCR_CDMEIF4 | DMA_HIFCR_CTEIF4 | DMA_HIFCR_CHTIF4 | DMA_HIFCR_CTCIF4))
#define DMA2_Stream5_IT_Mask    ((unsigned long)(DMA_HIFCR_CFEIF5 | DMA_HIFCR_CDMEIF5 | DMA_HIFCR_CTEIF5 | DMA_HIFCR_CHTIF5 | DMA_HIFCR_CTCIF5))
#define DMA2_Stream6_IT_Mask    ((unsigned long)(DMA_HIFCR_CFEIF6 | DMA_HIFCR_CDMEIF6 | DMA_HIFCR_CTEIF6 | DMA_HIFCR_CHTIF6 | DMA_HIFCR_CTCIF6))
#define DMA2_Stream7_IT_Mask    ((unsigned long)(DMA_HIFCR_CFEIF7 | DMA_HIFCR_CDMEIF7 | DMA_HIFCR_CTEIF7 | DMA_HIFCR_CHTIF7 | DMA_HIFCR_CTCIF7))

#define CCR_CLEAR_Mask 0xFFFF8001UL


#define DMA_DIRECT_MODE_ERROR_INT_ENABLE      DMA_SxCR_DMEIE
#define DMA_DIRECT_MODE_ERROR_INT_DISABLE     0      

#define DMA_TRANSFER_ERROR_INT_ENABLE         DMA_SxCR_TEIE
#define DMA_TRANSFER_ERROR_INT_DISABLE        0

#define DMA_HALF_TRANSFER_INT_ENABLE          DMA_SxCR_HTIE
#define DMA_HALF_TRANSFER_INT_DISABLE         0
 
#define DMA_TRANSFER_COMPLETE_INT_ENABLE      DMA_SxCR_TCIE
#define DMA_TRANSFER_COMPLETE_INT_DISABLE     0

#define DMA_FLOW_COUNTER_PERIPHERAL           DMA_SxCR_PFCTRL
#define DMA_FLOW_COUNTER_DMA                  0
 
#define DMA_COPY_FROM_PERIPHERAL_TO_MEMORY    0
#define DMA_COPY_FROM_MEMORY_TO_PERIPHERAL    DMA_SxCR_DIR_0
#define DMA_COPY_FROM_MEMORY_TO_MEMORY        DMA_SxCR_DIR_1
 
#define DMA_CIRCULAR_MODE_ENABLE              DMA_SxCR_CIRC
#define DMA_CIRCULAR_MODE_DISABLE             0
 
#define DMA_PERIPHERAL_INCREMENT_MODE_ENABLE  DMA_SxCR_PINC
#define DMA_PERIPHERAL_INCREMENT_MODE_DISABLE 0
 
#define DMA_MEMORY_INCREMENT_MODE_ENABLE      DMA_SxCR_MINC
#define DMA_MEMORY_INCREMENT_MODE_DISABLE     0
 
#define DMA_PERIPHERAL_SIZE_8_BIT             0
#define DMA_PERIPHERAL_SIZE_16_BIT            DMA_SxCR_PSIZE_0
#define DMA_PERIPHERAL_SIZE_32_BIT            DMA_SxCR_PSIZE_1
 
#define DMA_MEMORY_SIZE_8_BIT                 0
#define DMA_MEMORY_SIZE_16_BIT                DMA_SxCR_MSIZE_0
#define DMA_MEMORY_SIZE_32_BIT                DMA_SxCR_MSIZE_1
 
#define DMA_PERIPHERAL_INC_OFFSET_SIZE_PSIZE  0
#define DMA_PERIPHERAL_INC_OFFSET_SIZE_4BYTE  DMA_SxCR_PINCOS

#define DMA_PRIORITY_LOW                      0
#define DMA_PRIORITY_MEDIUM                   DMA_SxCR_PL_0
#define DMA_PRIORITY_HIGH                     DMA_SxCR_PL_1
#define DMA_PRIORITY_VERY_HIGH               (DMA_SxCR_PL_0 | DMA_SxCR_PL_1)

#define DMA_DOUBLE_BUFFER_ENABLE              DMA_SxCR_DBM
#define DMA_DOUBLE_BUFFER_DISABLE             0

#define DMA_CURRENT_TARGET_MEMORY_0           0
#define DMA_CURRENT_TARGET_MEMORY_1           DMA_SxCR_CT

/* BUFFERABLE TRANSFERS ARE MISSING IN DATASHEET */
#define DMA_BUFFERABLE_TRANSFERS_ENABLE       DMA_SxCR_TRBUFF
#define DMA_BUFFERABLE_TRANSFERS_DISABLE      0

#define DMA_PERIPHERAL_BURST_TRANSFER_SINGLE  0
#define DMA_PERIPHERAL_BURST_TRANSFER_NCR4    DMA_SxCR_PBURST_0
#define DMA_PERIPHERAL_BURST_TRANSFER_NCR8    DMA_SxCR_PBURST_1
#define DMA_PERIPHERAL_BURST_TRANSFER_NCR16   (DMA_SxCR_PBURST_0 | DMA_SxCR_PBURST_1)

#define DMA_MEMORY_BURST_TRANSFER_SINGLE      0
#define DMA_MEMORY_BURST_TRANSFER_NCR4        DMA_SxCR_MBURST_0
#define DMA_MEMORY_BURST_TRANSFER_NCR8        DMA_SxCR_MBURST_1
#define DMA_MEMORY_BURST_TRANSFER_NCR16       (DMA_SxCR_MBURST_0 | DMA_SxCR_MBURST_1)




          void DMA_Init                  (DMA_Stream_TypeDef* stream, unsigned long perif, unsigned long mem, unsigned short size, unsigned long conf);
          void DMA_InitDoubleBuffer      (DMA_Stream_TypeDef* Stream, unsigned long perif, unsigned long mem0, unsigned long mem1, unsigned short size, unsigned long conf);
          void DMA_DeInit                (DMA_Stream_TypeDef* stream);
          void DMA_Start                 (DMA_Stream_TypeDef* stream);
          void DMA_ReStart               (DMA_Stream_TypeDef* stream, unsigned short size);
          void DMA_Stop                  (DMA_Stream_TypeDef* stream);

unsigned short DMA_GetCurrentDataCounter (DMA_Stream_TypeDef* stream);




#endif
