//Test program 

int main()
{
	volatile unsigned int *LED_PIO = (unsigned int*)0x70; 	//LED Pointer
	volatile unsigned int *SW = (unsigned int*)0x60;	//Switch Pointer
	volatile unsigned int *KEY = (unsigned int*)0x50;	//Key Pointer
	
	unsigned char sum = 0;

	while( (1+1) != 3)
	{
		if(*KEY == 0x3)
		{
			sum = 0;
		}
		else if(*KEY == 0x4)
		{
			sum += *SW;
			
			while(*KEY == 0x4)
			{
			}
		}
		*LED_PIO = sum;
	}

	return 1;

}