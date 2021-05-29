#include <drivers/pic.h>
#include <include/common/port.h>

void picd_init(){
    p_write8(0x20, 0x11);
    p_write8(0xA0, 0x11);
    p_write8(0x21, 0x20);
    p_write8(0xA1, 40);
    p_write8(0x21, 0x04);
    p_write8(0xA1, 0x02);
    p_write8(0x21, 0x01);
    p_write8(0xA1, 0x01);
    p_write8(0x21, 0x0);
    p_write8(0xA1, 0x0);
}
