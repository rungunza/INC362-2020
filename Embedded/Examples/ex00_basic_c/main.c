
#include "os.h"

int main(void)
{
    OS_Init();


    LED_On(LED_ID_0); // LED0
    LED_On(LED_ID_3); // LED3


    OS_Start();
}
// ecc-pic24-cli -build