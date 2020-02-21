#include<iostream>
using namespace std;
class choice{
public:
	int n, n1;
	void rethek(){
		cout<<"welcome to Rethek's dessert'.\nKindly select your desired option.\n[1]:EXCLUSIVIE DESSERTSS\n[2]:CAKES \n[3]:CUPCAKE \n";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                          \tEXCLUSIVE DESSERT\n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]:Creme Brulee\ntRS:300\n\n[2]:Nutella Sundae\ntRS: 350\n\n[3]:Red Velvet Sundae\nRS 450\n\n[4]:Summer Berry Grunt\nRS:80 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \CAKES\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Cadbury Dairy Milk\t\nRs: 1000\n\n[2]:Mousse Cake\nRs: 1100\n\n[3]:Maltesers\nRS: 1200\n\n[4]:Belgian Chocolate Cake\n RS: 1600\n\n[5]:Chocolate Heaven\n RS 250\n\n[6]:Kit Kat Cake\n RS:1100";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		 }     
	    if(n==3){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tCUPCAKES       \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Classic Chocolate\t\nRs: 120\n\n[2]:Cream Cheese\nRs: 110\n\n[3]:Original Malt\nRS: 120\n\n[4]:Salted Caramel\n RS: 100\n\n[5]:Belgian Malt\n RS 150";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		
		}
			
		}
	void sarah(){
		cout<<"welcome to Sarah's resturant.\nKindly select your desired option.\n[1]:EXCLUSIVIE DISCOUNT DEALS\n[2]VEG DEALS \n[3]BAR \n[4]FAST FOOD";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tEXCLUSIVE DEALS\n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]DEAL 1: Zinger with 250 ml softdrink\ntRS:300\n\n[2]DEAL2:Zinger, chicken piece, frise and softdrink\ntRS: 350\n\n[3] DEAL 3: 2 Zinger, fries and 500ml softdrink\nRS 450 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tBREAKFAST DEALS\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Egg Sandwich with Spread Cheese with coffee\t\nRs: 60\n\n[2]:Chicken Mayo Garlic Wrap With Coffe\nRs: 110\n\n[3]:Falafel Wrap With Coffee\nRS: 100\n\n[4]:Chicken Strip Wrap With Coffee\n RS: 400\n\n[5]:Chicken Kabab Wrap With Coffee\n RS 250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		 }     
	    if(n==3){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tBARBEQUE  DEALS\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Malai Tikka\t\nRs: 60\n\n[2]:Beef Seekh Kabab\nRs: 110\n\n[3]:Chicken Seekh Kabba\nRS: 100\n\n[4]:Grilled Chicken With 300 ml pepsi\n RS: 400\n\n[5]:Chicken Tikka With 300 ml pepsi\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		
		}
		if(n==4){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tFASTFOOD  DEALS\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:4 Zing burgers, 4 regular fries & 1.5 litre soft drink\nRs: 600\n\n[2]:4 GMC burgers, 4 regular fries & 1.5 litre soft drink\nRs: 510\n\n[3]:3 Breast Pieces with regular fries & hot garlic mayo sauce\nRS: 100\n\n[4]:Beef Zinger Burger With 300 ml pepsi\n RS: 400\n\n[5]:Grilled Chicken Burger With 300 ml pepsi\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    cin>>n1;
		
		}
			
		}
		void umaima(){
			cout<<"welcome to Umaima's Kabab House.\nKindly select your desired option.\n[1]:KARHAI SPECIALITIES\n[2]:BBQ DISHES \n[3]:KATAKAT SPECIALITES \n[4]:BEVERAGES";
		cin>>n;
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tKARHAI SPECIALITIES\n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]:KATAT MIX PLATE\ntRS:2300\n\n[2]:BRAIN MASALA\ntRS: 1350\n\n[3]:KIDNEY MASALA\nRS 450\n\n[4]:KAPOORA MASALA\N RS:1350 \n\n[5]:KAPOORA MASALA WITH BUTTER \nRS: 1900 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
		}
		if(n==3){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tBBQ DISHES\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:UMAIMA SPECIAL KABAB BEEF\t\nRs: 260\n\n[2]:MALAI TIKKA\nRs: 120\n\n[3]:CHICKEN MALAI BOTI\nRS: 180\n\n[4]:MUTTON CHAMP\n RS: 400\n\n[5]:Chicken Kabab Wrap \n RS 250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		 }     
	    if(n==4){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \BEVERAGESS \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Pepsi\t\nRs: 60\n\n[2]:Marinda\nRs: 60\n\n[3]:7up\nRS: 60\n\n[4]:7up diet\n RS: 60\n\n[5]:mineral water\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		
		}
		if(n==1){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tKARHAI  SPECIALS\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Peshawari Karhai\nRs: 600\n\n[2]:Red Karhai\nRs: 510\n\n[3]:3White KarhainRS: 100\n\n[4]:Beef Karahi\n\n[5]:Chicken Karhai\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    cin>>n1;
		
		}
		}
		
	void stovesandcloves(){
		cout<<"welcome to Stoves And Cloves resturant.\nKindly select your desired option.\n[1]:BREAKFAST \n[2]:STARTERS \n[3]:PIZZA \n[4]:DESSERT\n[5]:MAIN COURSE";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tBREAKFAST      \n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]:Cheese & Mushroom Omelette\ntRS:450\n\n[2]:Pakistani Omelette\ntRS: 350\n\n[3]:Breakfast Burrito\nRS 450 \n\n[4]:STOVES AND CLOVES'S SPECIAL OMELETE\n\nRS:800";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tSTARTERS      \n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Caesar Salad\t\nRs: 600\n\n[2]:Chicken Strips\nRs: 190\n\n[3]:Peri Bites\nRS: 180\n\n[4]:Fries\n RS: 190\n\n[5]:Fries with Dip\n RS 250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		 }     
	    if(n==4){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tDESSERTS       \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Chocolate Decadence Cake Slice\t\nRs: 400\n\n[2]:Chocolate Malt Cake Slice\nRs: 310\n\n[3]:Chocolate Heaven Cake Slice\nRS: 140\n\n[4]:Red Velvet Cake Slice\n RS: 400\n\n[5]:New York Cheese Cake\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		
		}
		if(n==5){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tMAIN    COURSE\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Grilled Chicken Sandwich\nRs: 600\n\n[2]:Penne Arrabiata\nRs: 410\n\n[3]:Fettuccine Alfredo\nRS: 800\n\n[4]:Classic Beef Burger\n RS: 400\n\n[5]:Chicken Mushroom Burger\n RS 550";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    cin>>n1;
		
		}
		if(n==3){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tPIZZAS        \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Margherita\nRs: 600\n\n[2]:Chicken Tikka\nRs: 410\n\n[3]:Hot & Spicy\nRS: 800\n\n[4]:Pepperoni\n RS: 400\n\n[5]:Mediterranean Pizza\n RS 550";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    cin>>n1;
		
		}}
};
int main(){
	choice c;
	c.sarah();
}
