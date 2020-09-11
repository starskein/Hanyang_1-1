#include <stdio.h>
//implement strlen
/*
int my_strlen(char *str){
	int len = -1;
	while (str[++len]!='\0');
	
	return len;
}
*/
int my_strlen(char *str){
	int len = 0;
	while (str[len]!='\0'){
		len++;
	}
	return len;
}


//implement strcmp
int my_strcmp(const char* cmpstr1, const char* cmpstr2){
    int flag=0,len1=0,len2=0;
    while(cmpstr1[len1] != '\0')
		len1++;
    while(cmpstr2[len2] != '\0')
		len2++;

    if(len1 > len2)
        return 1;
    else if(len1 < len2)
        return -1;
    else{
        for(len2=0;len2<len1;len2++){
            if(cmpstr1[len2] > cmpstr2[len2])
                return 1;
            else if(cmpstr1[len2] < cmpstr2[len2])
                return -1;
        }
    }  
    return 0;
}

//implement strcpy
char* my_strcpy(char* cpystr,const char* str){
    int len=-1;
    while(str[++len]!= '\0'){
        cpystr[len] = str[len];
    }
    cpystr[len] = '\0';
    return cpystr;
}

//implement strcat
char* my_strcat(char* catstr,const char* str){
    int len=-1,i=-1;
    while(catstr[++len] != '\0');
    while(str[++i] != '\0'){
        catstr[len++] = str[i];
    }    
    catstr[len] = '\0';
    return catstr;
}


int main(void){
	char test[]="This is the test";
	char test2[]="yes";
	char test3[5];
	printf("my_strlen(test) = %d\n", my_strlen(test));
	printf("my_strcmp(test2,\"yes\") = %d\n",my_strcmp(test2,"yes"));
	printf("my_strcpy(test3,test2) = %s",my_strcpy(test3,test2));
	printf("my_strcat(test3,test2) = %s",my_strcat(test3,test2));
	return 0;
}	
