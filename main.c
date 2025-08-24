#include "stm32f10x.h"
#include "stm32f10x_gpio.h"     // Файл с функциями управления ножками контроллера
#include "stm32f10x_rcc.h"      // Управление тактированием
#include <stdint.h>             // Правильные типы данных



int main( void )
{
    RCC->APB2ENR |= (1 << 4);                        
    GPIOC->CRH |= (0x00 << 22) | (0x01 << 20);      // см 172 стр. 
    while( 1 )
    {
    }
}
