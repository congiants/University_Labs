#include <main-proteus.h>
#byte PORTB = 0xF81
#byte PORTD = 0xF83

void main(){
set_tris_b(0xFF);

set_tris_d(0x00);

PORTD=0x0F; 

   while(TRUE){
   
   while(INPUT(PIN_B4)){
   
   
   }
   delay_ms(50);
   
   while(INPUT(PIN_B4)==0){
   
   
   
   }
   delay_ms(50);
    PORTD=PORTD^0b11111111;  
      
   }
}
