#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void hex(long n)
{
	if(n>0){
		hex(n/16); 
	if(n%16>9)
	{
		switch(n%16){
			case 10:
				putchar('g'); 
				break;
			case 11:
				putchar('h');
				break;
			case 12:
				putchar('i');
				break;
			case 13:
				putchar('j');
				break;
			case 14:
				putchar('k');
				break;
			case 15:
				putchar('l');
				break;
		}
	}
	else{
		char temp = (n%16)+'0';
		putchar(temp);	
	}
}
}
int my_printf(char *format_string, char *param){
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'j')) {
			printf("%s",param);
			putchar(' ');
			int numb = atoi(format_string+(i+2));
			hex(numb);
			break;
	}else
			putchar(format_string[i]);
	}
	puts("");
	return 0;
}

int main(int argc, char *argv[]){
	char buf[1024],buf2[1024];
	while(gets(buf)){
		gets(buf2);
		my_printf(buf,buf2);
	}
	return 0;
}
