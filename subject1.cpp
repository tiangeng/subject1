// Students.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
Struct Subject{
	char name[20];
    int number;
    };
Subject[1000];
cout<<"1)�鿴ѧ������"<<endl;
cout<<"2)ѡ��"<<endl;
cout<<"3)��ѡ"<<endl;
cout<<"4)¼��ɼ�"<<endl;
cout<<"5)�˳��ɼ�"<<endl;
do{cin>>action>>endl;
switch(action){
case 1:
list();
break;
case 2:
select();
break;
case 3:
exit();
break;
case 4:
return 0;
default;
cout<<"�������˴���Ĳ˵��������ѡ��"<<endl;}
}while(1);
void list(){
for(int i=0;i<count;i++){
	cout<<Subject[i].name<<Subject[i].number<<endl;}
}
int count=0;
void select(){
cout<<"����γ�����"<<endl;
Struct Subject temp;
cin>>temp.name>>endl;
cout<<"ʣ������"<<endl;
cin>>temp.number>>endl;
int index=find(temp);
if(-1==index){
Subject[count++]=temp;}
else{Subject[index].number+=Subject.number;
}}
void exit(){
cout<<"����γ�����"<<endl;
Struct Subject temp;
cin>>temp.name>>endl;
cout<<"ʣ������"<<endl;
cin>>temp.number>>endl;
int i=find(Subject.name);
if(i==count){cout<<"�ÿγ���������"<<endl;}
else {
Subject[i].number-=Subject.number;}
}
int find(char*name){
int i;
for(i=0;i<count;i++){
	if(0==Struct(Subject[i].name.name)){
	break;}
}
return i;
}