#include<main.h>  //�� ������ <main.h> �������� ������� ���������
                  //������ �� ����������� ���������� ���� ���� ������ ���� ����� �� 
                  //���������� �� project ���.
#byte PORTB=0xF81 //F81 ����� � ���� �� ���������� ��������� ��� ������ �
                  // ���� ����� ��� ������������
#byte PORTD=0xF83  //F83 ����� � ���� �� ���������� ��������� ��� ������ D
                  // ���� ����� ��� ������������

// *********��� ��� ������� �� ����� ���������************************

void main()
{                   //������� ������� ��� ���������� main

set_tris_b(0x00);   //� ���� � ������� ������(����������� �����������=0000 0000)
set_tris_d(0xff);   //� ���� D ������� �������(����������� �����������=1111 1111)

PORTB=0b00000000;   // ���� ����� � ������� � ������ ���� 0000 0000

int a;              // ������� �������� ���������� a ��� ���������� ��� ������������
                    // ��� ������ D
int i;              // ������� ��������� ��� �������������� ���� ���� for
                    // �� ��� �������� ���� while(TRUE){   } ���������� ��� ������(��� �����) �� ������ ��� 
                    // ������� ��� ����� ���� ���� �������. � ���������� ���� TRUE ��� ������ C �����������
                    // ���� ����� �������. ���� ��� TRUE �� ���������� ��� ���������� �� ������� 5>1,
                    // ������ ��� ������� ��� ������ �����.

while(TRUE) {              //������ ��� ��� ��������� ����(������� ����� ������)
            a=PORTD;        //�������� ��� ������������ ��� ������ D ��� �������� ���
                            // ��� ��������� a
            switch (a){
                       case 0:  PORTB=0xFF; delay_ms(100); PORTB=0x00; delay_ms(100);
                                // ��������� ��������������� ���� a=0 (PORTD = 0000 0000)
                                break;
                       
                       case 1: PORTB=0b11000011;delay_ms(100);PORTB=0b00111100; delay_ms(100);
                                // ��������� ��������������� ���� a=1 (PORTD = 0000 0001)
                               break;
            
                       case 2:PORTB=0b10101010;delay_ms(100);PORTB=0b01010101; delay_ms(100);   
                                // ��������� ��������������� ���� a=2 (PORTD = 0000 0010)
                              break;
                       
                       case 3:PORTB=0b10000000;for(i=1;i<=7;i++) {delay_ms(50);PORTB=PORTB/2;} delay_ms(50);
                                // ��������� ��������������� ���� a=3 (PORTD = 0000 0011)
                              break;
                       
                       case 4:PORTB=0xF0; delay_ms(100); PORTB=0x0F; delay_ms(100);
                                // ��������� ��������������� ���� a=4 (PORTD = 0000 0100)
                                break;
                       
                     } // �������� ��� ������� ��� switch

            }   //�������� ��� ������� ��� while

}      // �������� ��� ������� ��� main

