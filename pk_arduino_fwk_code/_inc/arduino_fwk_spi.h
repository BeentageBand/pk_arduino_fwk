/*=====================================================================================*/
/**
 * arduino_fwk_spi.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef ARDUINO_FWK_SPI_H_
#define ARDUINO_FWK_SPI_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "arduino_fwk_types.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported X-Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/
namespace arduino
{
/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/
extern void Init_SPI(ARDUINO_SPI_CHANNEL_T const channel, ARDUINO_DIO_CHANNEL_T const dio_channel);
extern void Set_SPI(ARDUINO_SPI_CHANNEL_T const channel, uint8_t const address, uint8_t const * wdata, size_t num_bytes);
extern void Get_SPI(ARDUINO_SPI_CHANNEL_T const channel, uint8_t const address, uint8_t * rdata, size_t num_bytes);
extern void Shut_Shut(ARDUINO_SPI_CHANNEL_T const channel);
/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/
}
/*=====================================================================================* 
 * arduino_fwk_spi.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*ARDUINO_FWK_SPI_H_*/