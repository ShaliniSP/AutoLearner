
    /* https://www.codechef.com/problems/AMR15A
     * AMR15A
     */
    #include <stdio.h>
    #include <stdlib.h>
    #include <ctype.h>
    #include <errno.h>
    #include <err.h>
    #define BLOCK_SZ 10
    
    size_t strread(char**, char*);
    int iseof(char, char*);
    void alloc(char**, size_t);
    void dealloc(void*);
    void die(const char *m);
    
    int main(void) {
    	char *str = NULL;
    	int i, j;
    	int r = 0, nr = 0;
    
    	strread(&str, "\n");
    	j = atoi(str);
    
    	while(j--) {
    		strread(&str, " \n");
    		i = atoi(str);
    		if(i % 2) nr++;
    		else r++;
    	}
    
    	if(r > nr) printf("READY FOR BATTLE\n");
    	else printf("NOT READY\n");
    
    	dealloc(str);
    	return 0;
    }
    
    size_t strread(char **s, char *d) {
    	size_t i = 0;
    
    	for(alloc(s, sizeof(char)); iseof((*s)[i] = getchar(), d); i++)
    		if((i % BLOCK_SZ) == 0) // realloc BLOCK_SZ bytes every BLOCK_SZ bytes
    			alloc(s, sizeof(char) * (i + 1 + BLOCK_SZ));
    
    	// resize down to the actual size and terminate
    	alloc(s, sizeof(char) * (i + 1));
    	(*s)[i] = '\0';
    
    	return i;
    }
    
    int iseof(char c, char *s) {
    	while(c != *s++) // search through the delimiters until it's exhausted
    		if(*s == '\0')
    			return 1;
    
    	return 0;
    }
    
    void alloc(char **a, size_t sz) {
    	char *o = realloc(*a, sz);
    	if(o == NULL)
    		die("alloc() error");
    
    	*a = o;
    }
    
    void dealloc(void *a) {
    	if(a != NULL)
    		free(a);
    	if(errno)
    		die("dealloc() error");
    }
    
    void die(const char *m) {
            if(errno)
                    perror(m);
            else
                    printf("%s\n", m);
            exit(1);
    }
    

