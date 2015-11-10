#include <stdio.h> 
#include <assert.h> 
#include <dir.h> 

void FolderCopy(char* Str_Dest, char* Str_Src); 
int  FilyCopy(char* Str_Dest, char* Str_Src); 
void GetCurrentFolder(char* Str_Dest, char* Str_Src); 
int  FileCount=0; 

main() 
{ 
    char Str_Src[50]; 
    char Str_Dest[50]; 
    char Temp_Str[50]; 
    printf("Path from (example:F:\\mybook\\computer) :"); 
    scanf("%s",Str_Src);                 /*������Ҫ���Ƶ��ļ���·��*/ 
    printf("Path to (example:D:\\program) :"); 
    scanf("%s",Str_Dest);                /*������·��*/ 
    GetCurrentFolder(Temp_Str,Str_Src);  /*��ȡ��Ҫ���Ƶ��ļ�������*/ 
    strcat(Str_Dest,Temp_Str); 
    FolderCopy(Str_Dest,Str_Src);        /*���������ļ�*/ 
    printf("\nCopy mission complete! \n%d files was copied",FileCount); 
    getch(); 
} 

void FolderCopy(char* Str_Dest, char* Str_Src) 
{ 
        struct   ffblk MyFile; 
        register int   Done; 
        char     File_Type[100]; 
        char     NextPath_Src[100];     /*��һ����Ҫ���Ƶ��ļ���·��*/ 
        char     NextPath_Dest[100];    /*��һ�����д�ŵ��ļ���·��*/ 
        char     File_Dest[100];        /*��ǰ��Ҫ���Ƶ��ļ�·��*/ 
        char     File_Src[100];         /*��ǰ���д�����ļ�·��*/ 
        strcpy(File_Type,Str_Src); 
        strcat(File_Type,"\\*.*");      /*�������������ļ���Ҳ����ֻ����ĳ�����ͣ�����*.DOC */ 
        mkdir(Str_Dest);                /*����Ŀ¼*/ 
        Done=findfirst(File_Type,&MyFile,20); 
        while (!Done) 
        { 
            /*������ļ��У��ݹ鴦��*/ 
            if (MyFile.ff_attrib==16 && strcmp(MyFile.ff_name,".") && strcmp(MyFile.ff_name,"..")) 
            { 
                 strcpy(NextPath_Src,Str_Src); 
                 strcat(NextPath_Src,"\\"); 
                 strcat(NextPath_Src,MyFile.ff_name); 
                 strcpy(NextPath_Dest,Str_Dest); 
                 strcat(NextPath_Dest,"\\"); 
                 strcat(NextPath_Dest,MyFile.ff_name); 
                 FolderCopy(NextPath_Dest,NextPath_Src); 
            } 
            /*������ļ���ֱ�Ӹ���*/ 
            else if(strcmp(MyFile.ff_name,".") && strcmp(MyFile.ff_name,"..")) 
            { 
                 printf("Copy file:  %s\\%s\n",Str_Src,MyFile.ff_name); 
                 strcpy(File_Dest,Str_Dest); 
                 strcat(File_Dest,"\\"); 
                 strcat(File_Dest,MyFile.ff_name); 
                 strcpy(File_Src,Str_Src); 
                 strcat(File_Src,"\\"); 
                 strcat(File_Src,MyFile.ff_name); 
                 if (FilyCopy(File_Dest,File_Src)) 
                 { 
                    FileCount++; 
                 } 
                 else 
                 { 
                     printf("Can not copy the file:%s",File_Src); 
                     getch(); 
                 } 
            } 
            Done=findnext(&MyFile); 
       } 
} 


int FilyCopy(char* Str_Dest, char* Str_Src) 
{ 
    FILE* Fp_Dest; 
    FILE* Fp_From; 
    char  ch; 
    assert(Str_Dest!=NULL && Str_Src!=NULL); 
    if ((Fp_Dest=fopen(Str_Dest,"wb"))==NULL) 
    { 
        return -1; 
    } 
    if ((Fp_From=fopen(Str_Src,"rb"))==NULL) 
    { 
        return -1; 
    } 
    ch=fgetc(Fp_From); 
    while (!feof(Fp_From)) 
    { 
        fputc(ch,Fp_Dest); 
        ch=fgetc(Fp_From); 
    } 
    fclose(Fp_From); 
    fclose(Fp_Dest); 
    return 1; 
} 

void GetCurrentFolder(char* Str_Dest, char* Str_Src) 
{ 
    char* p=Str_Src; 
    int   i=strlen(Str_Src); 
    while (*(p+i)!='\\') 
    { 
        i--; 
    } 
    while (*(p+i)!='\0') 
    { 
        *Str_Dest=*(p+i); 
        Str_Dest++; 
        i++; 
    } 
    *Str_Dest='\0'; 
}