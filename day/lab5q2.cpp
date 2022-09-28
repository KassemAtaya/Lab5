/******************************************************************************



*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;



double total(double,double,double,double,double,double);
void welcome();
void final_data(double,double,double,double);

int main(){
    double scost = 1.75, mcost = 1.90, lcost = 2.00, samount = 0, mamount = 0, lamount = 0;
    welcome();
    cout<<"_______________________________________________"<<endl;
    cout<<"Enter the amount of cups desired for each size."<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Small cups : ";
    cin>>samount;
    cout<<"Total cost: "<<total(scost,mcost,lcost,samount,mamount,lamount)<<"$---"<<endl;
    cout<<"Medium cups : ";
    cin>>mamount;
    cout<<"Total cost: "<<total(scost,mcost,lcost,samount,mamount,lamount)<<"$---"<<endl;
    cout<<"large cups : ";
    cin>>lamount;
    cout<<"Total cost: "<<total(scost,mcost,lcost,samount,mamount,lamount)<<"$---"<<endl;
    
    final_data(samount,mamount,lamount, total(scost,mcost,lcost,samount,mamount,lamount));
    
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void welcome(){
    cout<<"Hello welcome to Jasons coffee shop!!!!"<<endl;
    cout<<"_____________________"<<endl;
    cout<<"Small coffee : 1.75$"<<endl;
    cout<<"Medium coffee: 1.90$"<<endl;
    cout<<"Large coffee : 2.00$"<<endl;
    cout<<"--------------------"<<endl;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double total(double sc,double mc,double lc,double sa,double ma,double la){
    double total = (sc*sa)+(mc*ma)+(lc*la);
    return total;
    
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void final_data(double sa,double ma, double la, double total){
    cout<<"----------------------------------------------"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"You have sold : "<<sa<<" small coffees"<<endl;
    cout<<"              : "<<ma<<" medium coffees"<<endl;
    cout<<"              : "<<la<<" large coffees"<<endl;
    cout<<"And made a profit of : "<<total<<"$ so far!!!"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"----------------------------------------------"<<endl;
}







