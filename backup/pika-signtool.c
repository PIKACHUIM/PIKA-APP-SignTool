#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char sign[1024]={0},pfx[256]={0},exe[256]={0},pas[256]={0};
char s1[]="signtool.exe sign /v /f ";
char s2[]=" /p ";
char s3[]=" /tr http://timestamp.wosign.com/rfc3161 ";
char s4[]="  >  signlogs.log   2>&1     & ";
char ss[]=" ";
int  time=-1;
void sm_pfxfile()
{
	system( "cls && title ѡ��PFX�ļ�-Ƥ�������ǩ���� && mode con cols=60 lines=25 && color 1f && echo. && echo. && echo." );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~      ********Ƥ��������ǩ����********    �~" );
	system( "echo      �~--------------------------------------------�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~              ��һ����ѡ��PFX�ļ�           �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~         �뽫����˽Կ��PFX�ļ���ק����      �~" );
	system( "echo      �~        (ע�⣺�ļ�·���в��ܰ����ո�     �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	printf("\n \n     ****�뽫����˽Կ��PFX�ļ���ק���ˣ����س�����***\n\n     ");
	//scanf("%s",pfx);
	getchar();
	gets(pfx); 
	 
} 
void sm_exefile()
{
	system( "cls && title ѡ���ִ���ļ�-Ƥ�������ǩ���� && mode con cols=60 lines=25 && color 8f && echo. && echo. && echo." );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~      ********Ƥ��������ǩ����********    �~" );
	system( "echo      �~--------------------------------------------�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~             �ڶ�����ѡ��ǩ���ļ�           �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~         �뽫Ҫǩ���ĳ����ļ���ק����       �~" );
	system( "echo      �~        (ע�⣺�ļ�·���в��ܰ����ո�     �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	printf("\n \n      *****�뽫Ҫǩ���ĳ�����ק���ˣ����س�����*****\n\n     ");
	//scanf("%s",exe);
	gets(exe); 
} 
void sm_pfxpass()
{
	system( "cls && title ��������-Ƥ�������ǩ���� && mode con cols=60 lines=25 && color Cf && echo. && echo. && echo." );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~      ********Ƥ��������ǩ����********    �~" );
	system( "echo      �~--------------------------------------------�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~             ������������˽Կ����           �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	printf("\n \n      *****������˽Կ���룺");
	//scanf("%s",pas);
	gets(pas); 
} 
void sm_asksign()
{
	char kkk=0;
	system( "cls && title �Ƿ����ʱ��-Ƥ�������ǩ���� && mode con cols=60 lines=25 && color 3f && echo. && echo. && echo." );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~      ********�Ƿ����ʱ�����********      �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	printf(     "\n\n      �Ƿ����ʱ�����Y=��,N=��Ĭ��Ϊ�ǣ���");
	//getchar();
	scanf("%c",&kkk);
	if(kkk=='N') time=0;
	else time=1;
	system( "cls && title ǩ��ȷ��-Ƥ�������ǩ���� && mode con cols=60 lines=25 && color df && echo. && echo. && echo." );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~       ********ȷ��ִ��ǩ����********       �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	printf(     "\n      ˽Կ�ļ���%s\n",pfx);
	printf(     "\n      ��ǩ�ļ���%s\n",exe);
	printf(     "\n      ˽Կ���룺%s\n",pas);
	if(time==0) 
	printf(     "\n      ���ʱ�䣺��\n"); 
	else 
	printf(     "\n      ���ʱ�䣺��\n"); 
	printf(     "\n      ���ȷ������");system("pause") ;
	
} 
void sm_exesign()
{
	system( "cls && title ����ǩ��-Ƥ�������ǩ���� && mode con cols=60 lines=25 && color 4f && echo. && echo. && echo." );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~      ********Ƥ��������ǩ����********    �~" );
	system( "echo      �~--------------------------------------------�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~               ���Ĳ���ִ��ǩ��             �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	strcat(sign,s1); 
	strcat(sign,pfx); 
	strcat(sign,s2); 
	strcat(sign,pas); 
	if(time==1) strcat(sign,s3); 
	else strcat(sign,ss); 
	strcat(sign,exe); 
	strcat(sign,s4);
	system("choice /t 3 /d y /n >nul");
	system(sign) ;
} 
void sm_exesucc()
{
	system( "cls && title ǩ�����-Ƥ�������ǩ���� && mode con cols=60 lines=30 && color 2f && echo. && echo. && echo." );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~      ********Ƥ��������ǩ����********    �~" );
	system( "echo      �~--------------------------------------------�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~                   ǩ�����                 �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	system("echo." );
	system("choice /t 1 /d y /n >nul");
	system("echo **************************ǩ����־**************************" );
	system("type signlogs.log");
	system("echo ************************************************************" );
	system("pause");
} 
void signauto()
{
	system("call \"./data/signcode.exe\" ");
}
void signmanl()
{
	sm_pfxfile();
	sm_exefile();
	sm_pfxpass();
	sm_asksign();
	sm_exesign();
	sm_exesucc();
}
void signlogs()
{
	system( "cls && mode con cols=60 lines=25 && color af && echo. && echo. && echo." );
	system("echo **************************ǩ����־**************************" );
	system("type signlogs.log");
	system("echo ************************************************************" );
	system("pause");
}
void certmang()
{
	system("call \"./data/certmgr.exe\"");
}
void certmake()
{
	system("start ./data/certsys.exe");
}
void certssys()
{
	system("start ./data/certlm.msc");
}
void menu()
{
	system( "cls && title Ƥ�������ǩ������ && mode con cols=60 lines=25 && color 3f && echo. && echo. && echo." );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~      ********Ƥ�������ǩ������********    �~" );
	system( "echo      �~--------------------------------------------�~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~         1.ǩ����(Signature Wizard)       �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~         2.�ֶ�ǩ��(Manual signature)       �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~         3.�鿴��־(View Error Logs )       �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~         4.֤�����(Certificate Manage)     �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~         5.�Խ�֤��(Create certificate)     �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~         6.ϵͳ֤��(System certificate)     �~" );
	system( "echo      �~                                            �~" );
	system( "echo      �~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~�~" );
	printf( "\n     ������ѡ��ǰ���Ӧ�����֣����س�ȷ�ϣ�" );
}

int main(int argc, char *argv[]) {
	int key; menu(); scanf( "%d", &key );
		while ( 1 )
			switch ( key )
			{
			case 0: menu(); scanf( "%d", &key ); break;
			case 1: key	= 0; signauto(); menu(); scanf( "%d", &key ); break;
			case 2: key	= 0; signmanl(); menu(); scanf( "%d", &key ); break;
			case 3: key	= 0; signlogs(); menu(); scanf( "%d", &key ); break;
			case 4: key	= 0; certmang(); menu(); scanf( "%d", &key ); break;
			case 5: key	= 0; certmake(); menu(); scanf( "%d", &key ); break;
			case 6: key	= 0; certssys(); menu(); scanf( "%d", &key ); break;
			default: key= 0; printf( "���������������������:" ); scanf( "%d", &key ); break;
			} 
	return 0;
}
