#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int ileZer(char* temp,int size){
	int zera=-1;
	for (int i = 0 ; i < size ; i++)
		{
			if(temp[i]=='0')
				zera++;
		}
	return zera;
}

int my_printf(char *format_string, char *param){
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && ((format_string[i+2] == 'g')||(format_string[i+3] == 'g'))) {
			int atrybut = atoi(format_string+(i+1));
			printf("%s",param);

			
			

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
