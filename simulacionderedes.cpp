#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
#define ENTER 13
using namespace std;

int main(){
	system("color A");
	char numero[30];
	string p[15][4];
	string a="";
	srand(time(NULL));
	int longi,i=0,j=0;
		string pu="80|9580";
		string ip="10.2.50.196|192.168.12.15";
		string mac="B4-DB-32-18-73-E8|B5-AB-32-18-73-E8";
		cout<<"ingresa un texto: ";
		cin>>numero;
		longi=strlen(numero);
	
		while(i<longi){
				p[i][0]=mac;
				p[i][1]=ip;
				p[i][2]=pu;
				p[i][3]=numero[i];
			i++;
		}
		
		string d;
		cout<<"DESEA HACERLO AUTOMATICO o CON ENTER (A/E): ";
		cin>>d;
		system("cls");		
		if(d=="A" || d=="a"){
			cout<<"ENCAPSULANDO: "<<endl;
			int n=rand()%longi;i=3;		
			while(i>=0){
				Sleep(900);
				a=p[n][i]+"|"+a;
				cout<<a<<endl;
				i=i-1;
				
				}
			i=0;
			Sleep(900);
			cout<<endl<<endl<<"DESINCRIPTANDO:"<<endl;
			n=rand()%longi;
			while(i<=3){
				Sleep(900);
				a=p[n][i];
				cout<<a<<endl;
				i=i+1;
			}
		}else{
			cout<<"ENCAPSULANDO: "<<endl;
			int n=rand()%longi;i=3;
			char e=ENTER;
			while(i>=0 & e==ENTER){
				a=p[n][i]+"|"+a;
				cout<<a<<endl;
				i=i-1;
				e=getch();
				}
			i=0;
			cout<<endl<<endl<<"DESINCRIPTANDO:"<<endl;
			n=rand()%longi;
			while(i<=3 & e==ENTER){
				a=p[n][i];
				cout<<a<<endl;
				i=i+1;
				e=getch();
			}
		}

}
