#include <stdio.h>
#include <direct.h> //_getcwd(), _chdir()
#include <stdlib.h> //_MAX_PATH, system()
#include <io.h>     //_finddata_t, _findfirst(), _findnext(), _findclose()
#include <string.h>
#include <windows.h>
 
//删除总数
int count = 0;
 
//获取当前路径
void GetCurrentPath(void)
{
      char buf[80];
      getcwd(buf, sizeof(buf));
      printf("current working directory : %s\n", buf);
}
 
  
//获取后缀名
char *substr(const char*str)
{
    char *ptr, c = '.';
    static char stbuf[256];
    ptr = strrchr(str, c); //最后一个出现c的位置
    if(ptr == NULL){
       return stbuf;
       }
    int pos = ptr-str;//用指针相减 求得索引
    unsigned start = pos + 1;
    unsigned end = strlen(str);
    unsigned n = end - start;
    strncpy(stbuf, str + start, n);
    stbuf[n] = 0; //字串最后加上0
    return stbuf;
}
 
//递归查询文件并且删除
void findAllFile(char *pFilePath,char *extName)
{ 
    WIN32_FIND_DATA FindFileData; 
    DWORD dwError; 
    HANDLE hFind = INVALID_HANDLE_VALUE; 
    char DirSpec[MAX_PATH+1];
    strncpy(DirSpec, pFilePath, strlen(pFilePath) + 1); 
    SetCurrentDirectory(pFilePath); 
    strncat(DirSpec, "\\*", 3);
    hFind = FindFirstFile(DirSpec, &FindFileData); 
    if (hFind == INVALID_HANDLE_VALUE){
       printf ("FileName:%s    Invalid file handle. Error is %u\n", pFilePath,GetLastError()); 
       return ; 
    }
    else{
        if (FindFileData.dwFileAttributes != FILE_ATTRIBUTE_DIRECTORY ){ 
        printf("FileName:%s\n", FindFileData.cFileName);
        }
        else if(FindFileData.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY&& strcmp(FindFileData.cFileName, ".") != 0&& strcmp(FindFileData.cFileName, "..") != 0){
        char Dir[MAX_PATH + 1]; 
        strcpy(Dir, pFilePath); 
        strncat(Dir, "\\", 2); 
        strcat(Dir, FindFileData.cFileName);
        findAllFile(Dir,extName); 
        }
        while (FindNextFile(hFind, &FindFileData) != 0){
            if (FindFileData.dwFileAttributes != FILE_ATTRIBUTE_DIRECTORY){
                 _chdir( pFilePath );
                 char *extname2 = substr(FindFileData.cFileName);
                 if(strcmp(extname2,extName) ==0){
                     printf ("\nFileName:%s ", FindFileData.cFileName);
                     int result = remove(FindFileData.cFileName);
                     if(result == 0)
                     {
                               printf("Delete Result:%d",result);
                               count++;
                               }
                      else{
                          perror("remove");
                          }
                     }
            } 
            else if(FindFileData.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY && strcmp(FindFileData.cFileName, ".") != 0&& strcmp(FindFileData.cFileName, "..") != 0){ 
                char Dir[MAX_PATH + 1]; 
                strcpy(Dir, pFilePath); 
                strncat(Dir, "\\", 2); 
                strcat(Dir, FindFileData.cFileName);
                findAllFile(Dir,extName); 
            }
        }
        dwError = GetLastError(); 
        FindClose(hFind); 
        if (dwError != ERROR_NO_MORE_FILES) { 
            printf ("FindNextFile error. Error is %u\n", dwError); 
            return; 
        } 
    } 
} 
 
 
//开始显示部分
void Show(char str[])
{
     int i,len;
     len = strlen(str);
     for(i=0;i<len;i++)
     {
         printf("%c",str[i]);
         Sleep(100);
     }
 }
  
  
int main(void)
{
    printf("Anleb : ");
    Sleep(1000);
    char string1[] = "I am Anleb,nice to somthing!\n";
    Show(string1);
    printf("Anleb : ");
    Sleep(1000);
    char string2[] = "Go,gay!\n";
    Show(string2);
    printf("Please Enter the Path:");
    char path[128];
    gets(path);
    while(strlen(path) == 0)
    {
                    printf("Warning:The Path value is Null!\n");
                    printf("Please Enter the Path:");
                    gets(path);
                    }
    if(strcmp(path,"exit") ==0)
        return 0;
    printf("Please Enter the ExtName:");
    char extName[10];
    gets(extName);
    while(strlen(extName) == 0)
    {
                    printf("Warning:The ExtName value is Null!\n");
                    printf("Please Enter the ExtName:");
                    gets(extName);
                    }
    if(strcmp(extName,"exit") ==0)
        return 0;
    findAllFile(path,extName);
    printf("\nDelete Count: %d\n",count);
    system("pause");
    return 0;   
}