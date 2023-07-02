#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;
class menu
{
    public:
	char name[30],add[30], pizza1[20]="Chicken Fazita" ,pizza2[50]="Chicken Bar BQ" ,pizza3[20]="Peri Peri" ,pizza4[20]="Creamy Max",
	 roll1[20]="Chicken Chatni Roll", roll2[20]="Chicken Mayo Roll", roll3[20]="Veg Roll With Fries",bur1[20]="Zinger Burger",
	 bur2[20]="Chicken Burger",bur3[20]="Beef Burger";
	char sand1[20]="Club Sandwich", sand2[50]="Chicken Crispy Sandwich", sand3[50]="Extream Veg Sandwich";
	char bir1[20]="Chicken Biryani", bir2[20]="Prawn Biryani", bir3[20]="Beef Biryani", hotel1[20]="Abhiruchi", 
	hotel2[20]="Sizens",hotel3[20]="Midland",hotel4[20]="Iceberg",hotel5[20]="KOKO",gotostart ;
	int choice=0,pchoice,pchoice1,pchoice2, quantity;
	long long int n;
	void display()
	{
			beginning :
						cout<<"\t\t\t---------- Info Tech Fast Food -----------\n\n";
					 	cout<<"Please Enter Your Name:  ";
						cin.getline(name, 20);
						cout<<"\nPlease Enter Your Address:  ";
						cin.ignore();
						cin.getline(add, 20);
						ac:
						cout<<"\nEnter your Mobile No : ";
						cin>>n;
						if(n>=1000000000 && 9999999999)
						{
							cout<<"\n\n***Mobile no. registered successfully***\n\n\n";
							cout<<"\n**** Hello "<<name<<" !"<<endl;
							hotel();
							cout<<"\n\n***What would you like to order.....?\n\n";
						    cout<<"\t\t\t\t--------Menu--------\n\n";
					        cout<<"1) Pizzas\n";
							cout<<"2) Burgers\n";
							cout<<"3) Sandwich\n";
							cout<<"4) Rolls\n";
							cout<<"5) Biryani\n\n";
						}
						else
						{
							
							cout<<"\n\n********Entered Mobile no is not valid********\n\n";
							cout<<"\n\nPlease Enter Valid Mobile no :  ";
							goto ac;
						}
	}
	void hotel()
	{
		cout<<"\n\n*** From which hotel you like to order.....?\n\n";
 		cout<<"\t\t\t\t--------Hotels--------\n\n";
	    cout<<"1) Abhiruchi\n";
	   	cout<<"2) Seasons\n";
		cout<<"3) Midland\n";
		cout<<"4) Iceberg\n";
		cout<<"5) KOKO\n\n";
		cout<<"\n\nPlease Enter your Choice: ";
		cin>>pchoice2;
		switch(pchoice2)
		{
			case 1:
				cout<<"\n you selected hotel Abhiruchi\n ";
				break;
			case 2:
				cout<<"\n you selected hotel Seasons\n ";
				break;
			case 3:
				cout<<"\n you selected hotel Midland\n ";
				break;
			case 4:
				cout<<"\n you selected hotel Iceberg\n ";
				break;
			case 5:
				cout<<"\n you selected hotel KOKO \n";
				break;
		}
		
	}
						
	};
class a : public menu
{	
    public :
	void getdata()
	{
		beginning :
	cout<<"\n\nPlease Enter your Choice: ";
	cin>>choice;
    if(choice==1)
	 {
		cout<<"\n1) "<<pizza1<<"\n";
		cout<<"2) "<<pizza2<<"\n";
		cout<<"3) "<<pizza3<<"\n";
		cout<<"4) "<<pizza4<<"\n";
		bb:
		cout<<"\nPlease Enter which Flavour would you like to have?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=5)
		{
			cout<<"\n1) Small Rs.200\n"<<"2) Regular Rs.400\n"<<"3) Large Rs.800\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 200*quantity;
			break;

			case 2: choice = 400*quantity;
			break;

			case 3: choice = 800*quantity;
			break;
            }
			system("CLS");
			switch (pchoice)
			{
			 case 1:
			 cout<<"\n\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Chicken Fazita ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From Info Tech Fast Food\n";
			 break;
			 
			 case 2:
			 cout<<"\n\t\t--------Your Order---------\n";
			 cout<<quantity<<": Chicken Bar BQ ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From Info Tech  Fast Food\n";
			 break;
			 
			 case 3:
				 cout<<"\n\t\t--------Your Order---------\n";
				 cout<<""<<quantity<<" : Peri Peri ";
				 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				 cout<<"\n\nThank you For Ordering From Info Tech  Fast Food\n";
				 break;
			 case 4:
				 cout<<"\t\t--------Your Order---------\n";
				 cout<<quantity<<" : Creamy Max ";
				 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				 cout<<"\n\nThank you For Ordering From Info Tech  Fast Food\n";
				 break;

			}
		
		}
		else
		{
			cout<<"\n\nenter correct choice :";
			goto bb;
		}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
				hotel();
					cout<<"\t\t\t\t--------Menu--------\n\n";
	
					cout<<"1) Pizzas\n";
					cout<<"2) Burgers\n";
					cout<<"3) Sandwich\n";
					cout<<"4) Rolls\n";
					cout<<"5) Biryani\n\n";
			  goto beginning;
		
			}



		}

	 }


	 else if(choice==2)
	 {
		cout<<"\n1 "<<bur1<<" Rs.180"<<"\n";
		cout<<"2 "<<bur2<<" Rs.150"<<"\n";
		cout<<"3 "<<bur3<<" Rs.160"<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 180*quantity;
			break;

			case 2: choice = 150*quantity;
			break;

			case 3: choice = 160*quantity;
			break;

			}
			
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\n\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Zinger Burger ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From Info Tech  Fast Food \n";
			 break;
			 case 2:
			 cout<<"\n\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Chicken Burger ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From info Tech  Pizza\n";
			 break;
			 case 3:
			 cout<<"\n\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Beef Burger ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From info Tech  Fast Food\n";
			 break;


			}
			
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
				hotel();
				cout<<"\t\t\t\t--------Menu--------\n\n";
	
					cout<<"1) Pizzas\n";
					cout<<"2) Burgers\n";
					cout<<"3) Sandwich\n";
					cout<<"4) Rolls\n";
					cout<<"5) Biryani\n\n";
			  
			  goto beginning;
			  
			}

 }
}
	else if(choice==3)
	 {
		cout<<"\n1  "<<sand1<<" Rs.200"<<"\n";
		cout<<"2  "<<sand2<<" Rs.120"<<"\n";
		cout<<"3  "<<sand3<<" Rs.100"<<"\n";
		
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 200*quantity;
			break;

			case 2: choice = 120*quantity;
			break;

			case 3: choice = 100*quantity;
			break;

			}
			
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\n\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Club Sandwich ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\n you For Ordering From info Tech  Fast Food\n";
			 break;
			 case 2:
			 cout<<"\n\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Chicken Crispy Sandwich  ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From info Tech  Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Extream Veg Sandwich ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From info Tech  Fast Food\n";
			 break;


			}
			
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
				hotel();
					cout<<"\t\t\t\t--------Menu--------\n\n";
	
		cout<<"1) Pizzas\n";
		cout<<"2) Burgers\n";
		cout<<"3) Sandwich\n";
		cout<<"4) Rolls\n";
		cout<<"5) Biryani\n\n";
			  goto beginning;
			  
			}
			}
			}


	 else if(choice==4)
	 {
		cout<<"\n1 "<<roll1<<" Rs.120"<<"\n";
		cout<<"2 "<<roll2<<" Rs.80"<<"\n";
		cout<<"3 "<<roll3<<" Rs.100"<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nHow Much Rolls Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 120*quantity;
			break;

			case 2: choice = 80*quantity;
			break;

			case 3: choice = 100*quantity;
			break;

			}
			
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\n\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Chicken chatani Roll ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From info Tech  Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Chicken Mayo Roll ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From info Tech  Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Veg Roll With fries ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From info Tech  Fast Food\n";
			 break;
		}
		
			 cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
				hotel();
					cout<<"\t\t\t\t--------Menu--------\n\n";
	
				cout<<"1) Pizzas\n";
				cout<<"2) Burgers\n";
				cout<<"3) Sandwich\n";
				cout<<"4) Rolls\n";
				cout<<"5) Biryani\n\n";
					  goto beginning;
					  

			}



		}

 }

	else if(choice==5)
	 {
		cout<<"\n1 "<<bir1<<" Rs.160"<<"\n";
		cout<<"2 "<<bir2<<" Rs.220"<<"\n";
		cout<<"3 "<<bir3<<" Rs.140"<<"\n";
		cout<<"\nPlease Enter which Biryani you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 160*quantity;
			break;

			case 2: choice = 220*quantity;
			break;

			case 3: choice = 140*quantity;
			break;

			}
		
			system("CLS");
			switch (pchoice)
			{
			 case 1:
			 cout<<"\n\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Chicken Biryani ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From info Tech  Fast Food \n";
			 break;
			 case 2:
			 cout<<"\n\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Prawn Biryani ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From info Tech  Fast Food\n";
			 break;
			 case 3:
			 cout<<"\n\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" : Beef Biryani ";
			 cout<<"\nYour Total Bill is :"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From info Tech  Fast Food\n";
			 break;


		}
		
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
				hotel();
					cout<<"\t\t\t\t--------Menu--------\n\n";
	
		cout<<"1) Pizzas\n";
		cout<<"2) Burgers\n";
		cout<<"3) Sandwich\n";
		cout<<"4) Rolls\n";
		cout<<"5) Biryani\n\n";
			  goto beginning;
			  //return 0;
			}
			}
			}

			else
			{
				system("CLS");
				cout<<"Please Select Right Option: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
					hotel();
						cout<<"\t\t\t\t--------Menu--------\n\n";
	
		cout<<"1) Pizzas\n";
		cout<<"2) Burgers\n";
		cout<<"3) Sandwich\n";
		cout<<"4) Rolls\n";
		cout<<"5) Biryani\n\n";
				  goto beginning;
			}
			}
 
}
};

int main()
{
	a m;
	m.display();
	m.getdata();
	return 0;
}

