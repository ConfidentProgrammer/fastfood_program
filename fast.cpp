//geniune progam for fastf00d shops
#include <iostream>
#include <stdlib.h>
using namespace std;

 class myshop{
 	private:
      int size;
      int code;
      int total[10];
      int sum;
 	public: 
 	
 	
     void Shop_total_finance(){ //function for menu
     
     
	 string name[12]={"Bhajya","Pav-Bhaji","Pizza","Sandwich","Pasta","CheeseBurger","Hotdog","Panipuri","Dabeli","Vadapav","Bhajya"};
     int price[12]={30,180,80,60,50,100,20,25,30,25,30,30};
    
	 system("color b");
     cout<<"\t\t\t\t\t      ****MENU FOR SNACKS****\n\n";//title
     for(int i=1; i<=10 ;++i){
     	cout<<i<<") "<<name[i]<<"\t\t"<<price[i]<<"/-\n";
	 }
	 
	  // finance 
	  
	 cout<<"\nEnter number of food you want to eat: ";  // for taking numbber of food 
	 cin>>size;
	     for(int i=1; i<=size ; ++i){   // assigning the price to the food
	     	 cout<<i<<". Enter code for food: ";
	     	 cin>>code;
	     	 while(code>10 || code<1){ //checking invalid input
	     	 	cout<<"Enter valid code for food: ";
	     	    cin>>code;
			  }
	     	 total[i]=price[code];
		 }
		 for(int i=1 ;i<=size ;++i){  //calculating total for food
		 	sum=sum+total[i];
		 }
		 cout<<"Total Price: "<<sum<< "/-";
		 
		 }
	    
	     
	   } ; 

int main (){
	string deep;
	repeat:
	system("cls");	
	myshop food;
	food.Shop_total_finance();
	cout<<"\nEnter 'y' For New Page: "; // for repetetion of same page of the menu for the shop
	cin>>deep;
	while(deep!="y" && deep!="Y"){ //checking invliad input
		cout<<"Invalid character, Try again: ";
		cin>>deep;
	}
	if(deep=="y" || deep=="Y"){
		goto repeat;
	}
	
	system("pause");
}

