/*
 "XYZ Transport company" charges the parcels from Nashik to Pune & vice versa as per the given tariff:
 1.Wt upto 15 kg - Rs.20 per kg
 2.For next 20 kg - Rs.10 per kg
 3.For next 20 kg - Rs.8 per kg
 4.More than that - Rs.5 per kg
 Taking the wt. of the parcel as input , write a C++ program to calculate the total charges.
 (service tax = 12%)
*/
#include <iostream>
using namespace std;
class XYZ {
	char name[20];
	long mobileNo;
	float parcelWt , totalCharge , billAmt;
public:
	XYZ(){
		parcelWt = 0.0;
		totalCharge = 0.0;
		billAmt = 0.0;
	}
	void acceptOrder();
	void calBill();
	void displayBill();
};
void XYZ :: acceptOrder() {
	cout<<"Enter Customer Name & Contact No. : \n";
	cin>>name>>mobileNo;
	cout<<"Enter weight of the parcel (in kg) : \n";
	cin>>parcelWt;
}
void XYZ :: calBill() {
	if(parcelWt <= 15){
		totalCharge = parcelWt * 20;
	}
	else if(parcelWt <= 35){
		totalCharge = (15 * 20) + ((parcelWt - 15) * 10);
	}
	else if(parcelWt <= 55){
		totalCharge = (15 * 20) + (20 * 10) + ((parcelWt - 35) * 8);
	}
	else{
		totalCharge = (15 * 20) + (20 * 10) + (20 * 8) + ((parcelWt - 55) * 5);
	}
	billAmt = totalCharge * (1 + 0.12);
}
void XYZ :: displayBill() {
	cout<<"-----------------------------------------------------\n";
	cout<<"             XYZ TRANSPORT COMPANY                   \n";
	cout<<"-----------------------------------------------------\n";
	cout<<"Name Of The Customer : "<<name<<"\n";
	cout<<"Contact No.          : "<<mobileNo<<"\n";
	cout<<"Weight Of The Parcel : "<<parcelWt<<"\n";
	cout<<"Charge Calculated    : "<<totalCharge<<"\n";
	cout<<"Service Tax          : 12%\n";
	cout<<"Final Bill Amount    : "<<billAmt<<"\n";

}
int main() {
	XYZ order;
	order.acceptOrder();
	order.calBill();
	order.displayBill();
	return 0;
}
