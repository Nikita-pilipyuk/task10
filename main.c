#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main(){
    FILE * fp;
    char s1[100];

    printf("What do you want to type to the file:\n");
    fp=fopen("text.txt","w");
    fgets(s1,100,stdin);
    fputs(s1,fp);
    fclose(fp);

    fp=fopen("text.txt","r");
    fscanf(fp,"%[^\n]",s1);
    printf("please see the result in text.txt file))");
    fclose(fp);

    fp=fopen("text.txt","a");
    bool proverka=false;

    char *ret;
    ret=strchr(s1,'.');
    if(ret!=NULL)
        proverka=true;
    else
        proverka=false;


    char *word;
    char prev[100]="";
    char prev2[100]="";
    char res[100]="";
    char res2[100]="";
    char res3[100]="";
    char res4[100]="";
    char *word3;
    char *last;
    char *rabot;
    char testik[100]="";
    char testik2[100]="";


    word=strtok(s1,". ");
    int n;
    n=0;
    while(word!=NULL){
        //printf("%s",word);
        strcat(prev,word);
        last=word;
        strcat(prev," ");
        word=strtok(NULL,". ");
        }


    strncpy(res,prev,strlen(prev)-1);
    fprintf(fp,"\nTask1");
    if(proverka==true){
        strcat(res,".");
        fprintf(fp,"\n%s",res);
    }
    else
        fprintf(fp,"\n%s",res);

    strcat(testik,res);
    rabot=strtok(testik," ");



    fprintf(fp,"\nTask 2");
    while(rabot!=NULL){
        if(strcmp(rabot,last)==0 );
        else{
            //printf("%s",rabot);
            strcat(prev2,rabot);
            strcat(prev2," ");
        } rabot=strtok(NULL,". ");
    }
    strncpy(res2,prev2,strlen(prev2)-1);
    fprintf(fp,"\n%s",res2);
    strcat(testik2,res2);

    return 0;

}
