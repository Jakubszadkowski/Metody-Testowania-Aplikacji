#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
		if((format_string[i] == '#') && (format_string[i+1] == 'g')) {
			printf("%s",param);
			char temp[1024];
			int size=0;
			putchar(' ');
			for (int j = i+3; j < strlen(format_string); j++) {
				if (isdigit(format_string[j])){
					temp[size]=format_string[j];
					size++;
				}
				else{
					break;
				}
			
			}
			int zera = ileZer(temp,size);
			for(int j = size-1 ; j >= 0 ; j--){
				if(zera==j)
					break;
				if(temp[j]=='0')
					zera--;
				putchar(temp[j]);
			}
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
