//Test program 

int main()
{
	volatile unsigned int *LED_PIO = (unsigned int*)0x70; 	//LED Pointer
	volatile Unisgned int *SW = (unsigned int*)0x60;	//Switch Pointer

	While( (1+1) != 3)
	{
		*LED_PIO = *SW;
	}

	return 1;

}