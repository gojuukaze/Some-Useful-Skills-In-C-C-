/*
�ļ�����   rd.c

----------------------------------------------------
    c���ṩ�Ķ��ļ��в����ĺ�����ֻ�ܶԿ��ļ��н���
ɾ������ʹ�ܶ��ѧ���ڱ�������в���������ţ���Ҳ
�ܲ�ˬ������飬���Ա�д����Էǿ��ļ��н���ɾ����
�����������ο���

ע�⣺��������д��VC6Ϊ���ݣ����й����ļ��еĲ�������
      ���׼c����������VC6�е�findclose������Ҫ��c
	  �е�closedir���������档
----------------------------------------------------
����         ����Ա                       �����¼

2010.4.28    ���ܣ������˺ţ�           �����ļ�����д����


----------------------------------------------------
*/




#include <stdio.h>
#include <io.h>
#include <string.h>
#include <direct.h>

/*
������ڣ��ļ��еľ���·��
          const char*  dirPath

�������ܣ�ɾ�����ļ��У������������е��ļ����ļ���

����ֵ��  0  ɾ�� 
         -1  ·�����ԣ������������û��ִ��ɾ������
*/
int  removeDir(const char*  dirPath)
{

	struct _finddata_t fb;   //������ͬ�����ļ��Ĵ洢�ṹ��
	char  path[250];          
	long    handle;
	int  resultone;
	int   noFile;            //��ϵͳ�����ļ��Ĵ�����
	
	noFile = 0;
	handle = 0;

	
	//����·��
	strcpy(path,dirPath);
    strcat (path,"/*");

	handle = _findfirst(path,&fb);
	//�ҵ���һ��ƥ����ļ�
	if (handle != 0)
	{
		//�����Լ����ҵ�ƥ����ļ�������ִ��
		while (0 == _findnext(handle,&fb))
		{
			//windows�£����и�ϵͳ�ļ�����Ϊ��..��,������������
			noFile = strcmp(fb.name,"..");
			
			if (0 != noFile)
			{
				//��������·��
				memset(path,0,sizeof(path));
				strcpy(path,dirPath);
				strcat(path,"/");
				strcat (path,fb.name);
				//����ֵΪ16����˵�����ļ��У�����
				if (fb.attrib == 16)
				{
					 removeDir(path);	
				}
				//���ļ��е��ļ���ֱ��ɾ�������ļ�����ֵ�����û����ϸ���飬���ܻ������������
				else
				{
					remove(path);
				}
			}	
		}
		//�ر��ļ��У�ֻ�йر��˲���ɾ����������������˺ܾã���׼c���õ���closedir
		//������ܣ�һ�����Handle�ĺ���ִ�к󣬶�Ҫ���йرյĶ�����
		_findclose(handle);
	}
		//�Ƴ��ļ���
		resultone = rmdir(dirPath);
		return  resultone;
}









