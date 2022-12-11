#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int getInt(char temp){
	switch (temp)
	{
	case '0':
		return 0;
		break;
	case '1':
		return 1;
		break;
	case '2':
		return 2;
		break;
	case '3':
		return 3;
		break;
	case '4':
		return 4;
		break;
	case '5':
		return 5;
		break;
	case '6':
		return 6;
		break;
	case '7':
		return 7;
		break;
	case '8':
		return 8;
		break;
	case '9':
		return 9;
		break;							
	default:
		break;
	}
	return 0;
}
int my_printf(char *format_string, char *param){
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == '.')&&((format_string[i+3] == 'g')||(format_string[i+4] == 'g'))) {
			printf("%s",param);
			if(!isdigit(format_string[i+5]))
				break;
			int atrybut = atoi(format_string+(i+2));
			
			int dlugosc = 3;
			int flag=1;
			if(format_string[i+3]!=' ')
				dlugosc++;
			putchar(' ');
			for(int j = i+dlugosc+1;j<strlen(format_string);j++){
				if(atrybut>strlen(format_string)-(j)&&flag==1){
					flag=2;
					for(int k = 0;k< atrybut-(strlen(format_string)-j);k++){
						putchar('0');
					}
				}
				flag=2;
			int liczba = getInt(format_string[j]);
			liczba=(liczba*9+1)/10;	
			if(liczba+'0'=='0'){
				putchar('9');
				break;
			}
			
			putchar(liczba+'0');
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
