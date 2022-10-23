#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int my_printf(char *format_string, char *param){
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'k')) {
			printf("%s",param);
			
			for (int j = i+2; j < strlen(format_string); j++) {
				if ((format_string[j] >= 'a') && (format_string[j] <= 'z')){
					format_string[j] -= 32;
				}
				else if ((format_string[j] >= 'A') && (format_string[j] <= 'Z')){
					format_string[j] += 32;
				}
			putchar(format_string[j]);
			}
			break;

	}else if((format_string[i] == '#') && (format_string[i+1] == '.') && isdigit(format_string[i+2]) && (format_string[i+3] == 'k')){
		char temp[2] = {format_string[i+2],'\0'};
		int ilosc = atoi(temp)+1;
		printf("%s",param);

		for (int j = i+4; j < strlen(format_string) && 0 < ilosc ; j++) {
			if ((format_string[j] >= 'a') && (format_string[j] <= 'z')){
				format_string[j] -= 32;
			}
			else if ((format_string[j] >= 'A') && (format_string[j] <= 'Z')){
				format_string[j] += 32;
			}
			ilosc--;
		putchar(format_string[j]);
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
