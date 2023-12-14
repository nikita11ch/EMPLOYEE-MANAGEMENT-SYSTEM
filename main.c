//Employee record system using file handling
#include<stdio.h>
#include<string.h>
void newemp();   //function declaration
void displayrecord();
void findrecord();
void modifyrecord();
void deleterecord();
void niki();
void line()
{
	printf("\n\t\t\t\t-----------------------------------------------------------");
}


struct emp     //22 bytes
{
	int id;
	char enam[20];
};
struct emp e;   

FILE *fp,*tp;          //creating file
int id,flag=0,ch;     //global variables




int main()
{
	niki();	
	system("cls");
	line();
	printf("\n\t\t\t\t\t\tEMPLOYEE RECORD SYSTEM");
	line();	
	printf("\n\t\t\t\t\t\t(1) NEW EMPLOYEE");
	printf("\n\t\t\t\t\t\t(2) DISPLAY RECORD");
	printf("\n\t\t\t\t\t\t(3) FIND RECORD");
	printf("\n\t\t\t\t\t\t(4) MODIFY RECORD");
	printf("\n\t\t\t\t\t\t(5) DELETE RECORD");
	printf("\n\t\t\t\t\t\t(6) EXIT");
	line();
	printf("\n\t\t\t\t\t\tENTER YOUR CHOICE [ ]\b\b");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: newemp();     //function calling
				break;
		case 2: displayrecord();
				break;
		case 3: findrecord();
				break;
		case 4: modifyrecord();
				break;
		case 5: deleterecord();
				break;
		case 6: exit(0);
				break;
		default :printf("\n\t\t\t\t\t\tYou have entered wrong choice.");
		        printf("\n\t\t\t\t\t\tPlease choose correct choice\n");
		        system("pause");
		        system("cls");
		        main();
	}
}


void niki()
{
	printf("\n\n\n\n");
	printf("\t\t\t\t--------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX---------------");
	printf("\n\t\t\t\t\t==========================================");
	line();
	line();
	printf("\n\t\t\t\t>>::::::::::<>::::::::::EMPLOYEE MANAGEMENT SYSTEM::::::::<>::::::::<<");
	line();
	line();
	printf("\n\t\t\t\t\t==========================================");
	printf("\n\t\t\t\t--------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX---------------");
	printf("\n\n\n\n\t\t\t\t\t\t Developer : Nikita Chaurasia\n");
	system("pause\n");
}



void newemp()
{
	
	fp=fopen("pro.text","a");
	if(fp==NULL) {
	printf("\n\t\t\t\t\t\tFILE NOT FOUND");
	return; }
	while(1)
	{
		printf("Enter stu id ");
		scanf("%d",&e.id);
		fflush(stdin);
		printf("Enter stu name ");
		gets(e.enam);
		fwrite(&e,sizeof(e),1,fp);
		puts("1 row created");
		fflush(stdin);
		printf("Next stu [y/n] ");
		scanf("%c",&ch);
		if(ch=='n'||ch=='N') break;
	}
	
fclose(fp);
}
	



void displayrecord()
{
	fp=fopen("pro.text","r");
	if(fp==NULL) 
	{
	printf("\n\t\t\t\t\t\tERROR : FILE NOT FOUND");
	return; 
	}	
	rewind(fp);
	system("cls");
	line();
	printf("\n\t\t\t\t\t\t\tRECORDS");
	line();
	printf("\n\t\t\t\t\t\tID\t\tNAME");
	line();
	while(fread(&e,sizeof(e),1,fp)==1)
	{
		printf("\n\t\t\t\t\t\t%d\t\t%s",e.id,e.enam);
	}
	line();
fclose(fp);
}	


	
void findrecord()
{
	system("cls");
	fp=fopen("pro.text","r");
	if(fp==NULL) 
	printf("\n\t\t\t\t\t\tERROR : FILE NOT FOUND");
	printf("\nEnter the ID to find :  ");
	scanf("%d",&id);
	while(fread(&e,sizeof(e),1,fp)==1 && flag==0)
	{
		if(e.id==id)
		{
			flag=1;
			line();
			printf("\n\t\t\t\t\t\tID\t\tNAME");
			printf("\n\t\t\t\t\t\t%d\t\t%s",e.id,e.enam);
			printf("\n\n\t\t\t\t\t\tOne record successfully found!!");
			line();
		}	
	}
if(flag==0) printf("\nEMPLOYEE NOT FOUND");
fclose(fp);	
}	
	

void modifyrecord()
{
	displayrecord();
	fflush(stdin);
	fp=fopen("pro.text","r+");
	if(fp==NULL)
	printf("\n\t\t\t\t\t\tERROR :FILE NOT FOUND");
	printf("\nEnter the ID to modify : ");
	scanf("%d",&id);
	rewind(fp);
	while(fread(&e,sizeof(e),1,fp)==1 && flag==0)
	{
		if(e.id==id)
		{
			printf("\nPrevious data :ID\tNAME");
			printf("\n\t\t%d\t%s",e.id,e.enam);
			flag=1;
			fseek(fp,ftell(fp)-sizeof(e),SEEK_SET);
			fflush(stdin);
			printf("\nEnter NEW_ID & NEW_NAME : ");
			scanf("%d%s",&e.id,&e.enam);
			fwrite(&e,sizeof(e),1,fp);	
			printf("\nUpdated data :ID\tNAME ");
			printf("\n\t\t%d\t%s",e.id,e.enam);
			printf("\nONE ROW IS UPDATED");	
			break;
		}
	}
if(flag==0)
printf("\nInvalid ID");		
fclose(fp);	
}	
	


void deleterecord()
{
	fflush(stdin);
	system("cls");
	displayrecord();
	printf("\nEnter ID to delete record : ");
	scanf("%d",&id);
	fp=fopen("pro.text","r+");
	tp=fopen("p.text","a+");
	while(!feof(fp) && fread(&e,sizeof(e),1,fp)==1 )
	{
		
		if(e.id!=id)
		{
			fwrite(&e,sizeof(e),1,tp);	
		}				
	}	
fclose(fp);
fclose(tp);	
remove("pro.text");
rename("p.text","pro.text");
printf("\nOne record deleted successfully");
fflush(stdin);	
}

