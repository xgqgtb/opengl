#ifndef __STDAFX_H__
#define __STDAFX_H__

/** �������õ�ͷ�ļ� */
#include <windows.h>
#include <stdio.h>
#include <math.h>                            
#include <time.h>

/** ����glͷ�ļ� */
#include <gl\gl.h>				 
#include <gl\glu.h>
#include <gl\glaux.h>
#include<GL/glext.h>

/** ����OpenGL���ӿ��ļ� */
#pragma comment(lib, "opengl32.lib")		
#pragma comment(lib, "glu32.lib")							
#pragma comment(lib, "glaux.lib")	

/** ��ֹ��������������ת���ľ��� */
#pragma warning(disable: 4311)                                 
#pragma warning(disable: 4312)
#pragma warning(disable: 4244)
#pragma warning(disable: 4018)
#pragma warning(disable: 4267)
#pragma warning(disable: 4996)


#endif