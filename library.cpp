#include<bits/stdc++.h>
using namespace std;

class Library{
  public:  
    int id;
    char name[100];
    char author[100];
    char studentname[100];
    int std;
    int price;
    int pages;

};

int main(){
   Library lib[20];
   int input=0;
   int count=0;

   while(input!=6){
      cout<<"Enter 1 to input details like id, name, author, student, price, pages"<<endl;
      cout<<"Enter 2 to display details"<<endl;
      cout<<"Enter 3 to display detail about numbers of borrowed books"<<endl;
      cout<<"Enter 4 to display list of which books borrowed"<<endl;
      cout<<"Enter 5 to info about student"<<endl;
      cout<<"Enter 6 to quit"<<endl;
      cin>>input;

      switch(input){
        case 1:
               start:
               cout<<"Enter Book Id"<<endl;
               cin>>lib[count].id;
               cout<<"Enter Book Name ";
               cin.getline(lib[count].name ,100 , '$');
               cout<<"Enter Book Author ";
               cin.getline(lib[count].author ,100 , '$');               
               cout<<"Enter Student Name ";
               cin.getline(lib[count].studentname ,100 , '$');  
               cout<<"Enter which class of student"<<endl;
               cin>>lib[count].std;              
               cout<<"Enter Book Price"<<endl;
               cin>>lib[count].price;
               cout<<"Enter Book Pages"<<endl;
               cin>>lib[count].pages;
               count++;
               cout<<endl;
               break;

        case 2:
               for(int i=0;i<count;i++){
                cout<<"***********Library Management*************"<<endl;
                cout<<"Book Id : "<<lib[i].id<<endl;
                cout<<"Book Name : "<<lib[i].name;
                cout<<"Book Author : "<<lib[i].author;
                cout<<"Book Student Name : "<<lib[i].studentname;
                cout<<"Book Price : "<<lib[i].price<<endl;
                cout<<"Book Pages : "<<lib[i].pages<<endl;
                cout<<endl;
               }  
               break;

        case 3:
                cout<<"***********Borrowed books*************"<<endl;
                cout<<"number of borrowed books"<<" "<<count<<endl; 
                break;

        case 4:
               cout<<"***********List Borrowed books*************"<<endl;
               if(count>0){
                  for(int i=0;i<count;i++){
                  cout<<"list of borrowed books : "<<lib[i].name<<endl;
               
               } 
               }
               else{
                     cout<<"we have no info about borrowed books "<<endl;
               }
              
               break; 

        case 5:
               cout<<"***********info about student*************"<<endl;
               if(count>0){
                   for(int i=0;i<count;i++){
                cout<<"Book Name  : "<<lib[i].name<<endl;
                cout<<"Student Name "<<lib[i].studentname<<endl;
                cout<<"class of student "<<lib[i].std<<endl;
                cout<<endl;
                cout<<endl;
               } 
             
               }
                 else{
                     cout<<"we have no info about student please choose another option "<<endl;
                     cout<<endl;
                     cout<<endl;
               }
             
               break;                             
        case 6: 
               exit(0);
               break;

        default:
                cout<<"You have entered wrong value, please type again"<<endl;
                goto start;                   
      }
   }
return 0;
}