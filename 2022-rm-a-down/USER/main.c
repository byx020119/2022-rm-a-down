#include "main.h"

int main()
{	
  delay_ms(2000);//��ʱ�ȴ��ϵ����
	BSP_Init();
  engineerpower_Init();
	ControtLoopTaskInit();
	TIM6_Start();
	while(1)
	{
	Sendtosightway(12);	
	delay_us(200);
	}
}
