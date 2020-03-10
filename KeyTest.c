//Test program 

int main()
{
	volatile unsigned int *LED_PIO = (unsigned int*)0x70; 	//LED Pointer
	volatile unsigned int *SW = (unsigned int*)0x60;	//Switch Pointer
	volatile unsigned int *KEY = (unsigned int*)0x50;	//Key Pointer
	
	unsigned char sum = 0;

	while( (1+1) != 3)
	{
		*LED_PIO = *KEY;
	}

	return 1;

}