
    #include <stdio.h>
    
    #define BUFFERSIZE 32768
    
    static char buffin[BUFFERSIZE];
    static char buffout[BUFFERSIZE];
    
    int main(void) 
    {
    	int inputSize, i, lines = 0, line, num = 0, even = 0, odd = 0;
    
    	
    	inputSize = fread(buffin, sizeof(char), BUFFERSIZE, stdin);
    	for(i = 0; ((i < inputSize) && (buffin[i] >= '0') && (buffin[i] <= '9')); i++)
    	{
    		lines = (buffin[i] - '0') + (10 * lines);
    	}
    
    	for(; i < inputSize && buffin[i] < '0'; i++);
    
    	for(line = lines; line > 0; i++)
    	{	
    		if(i == BUFFERSIZE)
    		{
    			inputSize = fread(buffin, sizeof(char), BUFFERSIZE, stdin);
    			i = -1;
    		}
    		else if(buffin[i] >= '0')
    		{
    			num = (buffin[i] - '0') + (10 * num);
    		}
    		else
    		{
    			(num & 1 == 1)?(odd++):(even++);
    			num = 0;
    			line--;
    		}
    	}
    	(even>odd)?printf("READY FOR BATTLE"):printf("NOT READY");
    	return 0;
    }
    

