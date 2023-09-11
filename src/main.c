#include <kernel.h>
#include <drivers/spi.h>

#define SPI_MODE        SPI_OP_MODE_MASTER | SPI_WORD_SET(8) | SPI_TRANSFER_MSB
#define I2C1_NODE       DT_NODELABEL(i2c1)


int main()
{
    return 0;
}
