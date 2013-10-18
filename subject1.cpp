// Students.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
Struct Subject{
	char name[20];
    int number;
    };
Subject[1000];
cout<<"1)查看学生名单"<<endl;
cout<<"2)选课"<<endl;
cout<<"3)退选"<<endl;
cout<<"4)录入成绩"<<endl;
cout<<"5)退出成绩"<<endl;
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
cout<<"你输入了错误的菜单项，请重新选择！"<<endl;}
}while(1);
void list(){
for(int i=0;i<count;i++){
	cout<<Subject[i].name<<Subject[i].number<<endl;}
}
int count=0;
void select(){
cout<<"输入课程名称"<<endl;
Struct Subject temp;
cin>>temp.name>>endl;
cout<<"剩余数量"<<endl;
cin>>temp.number>>endl;
int index=find(temp);
if(-1==index){
Subject[count++]=temp;}
else{Subject[index].number+=Subject.number;
}}
void exit(){
cout<<"输入课程名称"<<endl;
Struct Subject temp;
cin>>temp.name>>endl;
cout<<"剩余数量"<<endl;
cin>>temp.number>>endl;
int i=find(Subject.name);
if(i==count){cout<<"该课程名额已满"<<endl;}
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