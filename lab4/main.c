#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
			for(int j = size-1 ; j >= 0 ; j--){
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
