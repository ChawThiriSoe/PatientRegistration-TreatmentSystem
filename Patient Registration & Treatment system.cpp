#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;
class Patient{
	private:
		int Pid;
		string Pname; 
		string Paddress;
		string Pphone;
		int Page;
		string gender;
		string pdiseasename;
	public:
		Patient()
		{
			
		}
		Patient(int a, string b, string c, string d, int e, string f, string g)
		{
			Pid=a;
			Pname=b;
			Paddress=c;
			Pphone=d;
			Page=e;
			gender=f;
			pdiseasename=g;
		}
		void insertPatient()
		{
			cout<<"Enter Patient ID: ";
			cin>>Pid;
			cin.ignore();
			cout<<"Enter Patient name: ";
			getline(cin, Pname);
			cout<<"Enter Patient address: ";
			cin>>Paddress;
			cout<<"Enter Patient phone: ";
			cin>>Pphone;
			cout<<"Enter Patient age: ";
			cin>>Page;
			cout<<"Enter Patient gender: ";
			cin>>gender;
			cout<<"Enter Patient disease name: ";
			cin>>pdiseasename;
		}
		void showPatient()
		{
			cout<<setw(5)<<Pid<<setw(15)<<Pname<<setw(10)<<Paddress<<setw(15);
			cout<<Pphone<<setw(5)<<Page<<setw(10)<<gender<<setw(15)<<pdiseasename;
		}
		void updatePatient()
		{
			int pup;
			cout<<"Update Patient Information: "<<endl;
			cout<<"1. Update Name\n2. Update Address\n3. Update Phone\n";
			cout<<"4. Update Disease Name\n";
			cout<<"Choose updating patient info process number: ";
			cin>>pup;
			if (pup==1)
			{
				cout<<"Enter New Name: ";
				getline(cin, Pname);
			}
			else if (pup==2)
			{
				cout<<"Enter New Address: ";
				cin>>Paddress;
			}
			else if (pup==3)
			{
				cout<<"Enter New Phone: ";
				cin>>Pphone;
			}
			else if (pup==4)
			{
				cout<<"Enter New Disease Name: ";
				cin>>pdiseasename;
			}
		}
		int getPid()
		{
			return Pid;
		}
		string getpdisname()
		{
			return pdiseasename;
		}
		string getPname()
		{
			return Pname;
		}
}; // end of P class
class Doctor
{
	private:
		int Did;
		string Dname;
		string Daddress;
		string Dphone;
		string specilizedfield;
		string position;
		vector<string> vectime;
		vector<string> vecdate;
		vector<string> otherhopsitalname;
	public:
		Doctor()
		{
			
		}
		Doctor(int h, string i, string ab, string j, string k, string l, vector<string> time, vector<string> date, vector<string> hopname)
		{
			Did=h;
			Dname=i;
			Daddress=ab;
			Dphone=j;
			specilizedfield=k;
			position=l;
			
			for(int i=0;i<time.size();i++)
			{
				vectime.push_back(time[i]);
			}
			for(int i=0;i<date.size();i++)
			{
				vecdate.push_back(date[i]);
			}
			for(int i=0;i<hopname.size();i++)
			{
				otherhopsitalname.push_back(hopname[i]);
			}
		}
		void insertDoctor()
		{
			cout<<"Enter Doctor ID: ";
			cin>>Did;
			cin.ignore();
			cout<<"Enter Doctor name: ";
			getline(cin, Dname);
			cout<<"Enter Doctor address: ";
			getline(cin, Daddress);
			cout<<"Enter Doctor phone: ";
			cin>>Dphone;
			cin.ignore();
			cout<<"Enter Doctor specilized field: ";
			getline(cin, specilizedfield);
			cout<<"Enter Doctor position: ";
			getline(cin, position);
			char ch;
			do{
				string t;
				cout<<"Enter Time(e.g 1:00-5:00p.m): ";
				cin>>t;
				vectime.push_back(t);
				cout<<"do another? (y/n): ";
				cin>>ch;
			}while(ch=='y');
			
			char ch1;
			do{
				string d;
				cout<<"Enter Date(e.g Mon): ";
				cin>>d;
				vecdate.push_back(d);
				cout<<"do another? (y/n): ";
				cin>>ch1;
			}while(ch1=='y');
			
			char ch2;
			do{
				string hop;
				cout<<"Enter other hospital name: ";
				cin>>hop;
				otherhopsitalname.push_back(hop);
				cout<<"do another? (y/n): ";
				cin>>ch2;
			}while(ch2=='y');
		}
		void showDoctor()
		{
			string a, b, c;
			for(int i=0;i<vectime.size();i++)
			{
				a+=vectime[i]+"/";
			}
			for(int i=0;i<vecdate.size();i++)
			{
				b+=vecdate[i]+"/";
			}
			for(int i=0;i<otherhopsitalname.size();i++)
			{
				c+=otherhopsitalname[i]+"/";
			}
			cout<<setw(5)<<Did<<setw(13)<<Dname<<setw(15)<<Daddress<<setw(13)<<Dphone<<setw(15)<<specilizedfield;
			cout<<setw(15)<<position<<setw(30)<<a<<setw(25)<<b<<setw(28)<<c;
		}
		void updateDoctor()
		{
			int dup;
			cout<<"Update Doctor Information: "<<endl;
			cout<<"1. Update Name\n2. Update Phone\n3. position\n";
			cout<<"Choose updating Doctor info process number: ";
			cin>>dup;
			if (dup==1)
			{
				cout<<"Enter New Name: ";
				getline (cin,Dname);
			}
			else if (dup==2)
			{
				cout<<"Enter New Phone: ";
				cin>>Dphone;
			}
			else if (dup==3)
			{
				cout<<"Enter New position: ";
				cin>>position;
			}
		}
		int getDid()
		{
			return Did;
		}
		string getspecilizedfield()
		{
			return specilizedfield;
		}
		string getDname()
		{
			return Dname;
		}
}; //end of D class
class Medicinelist
{
	private:
		int Mid;
		string Mname;
		string mdiseasename;
		int relatedmedid;
		string type;
		string factorylocation;
		string expdate;
		float price;
		int Mqty;
	public:
		Medicinelist()
		{
			
		}
		Medicinelist(int m, string n, string o, int p, string q, string r, string s, float t,int u)
		{
			Mid=m;
			Mname=n;
			mdiseasename=o;
			relatedmedid=p;
			type=q;
			factorylocation=r;
			expdate=s;
			price=t;
			Mqty=u;
		}
		void insertMedicinelist()
		{
			cout<<"Enter Medicine`s ID: ";
			cin>>Mid;
			cin.ignore();
			cout<<"Enter Medicine`s name: ";
			getline(cin, Mname);
			cout<<"Enter Medicine`s disease name: ";
			getline(cin, mdiseasename);
			cout<<"Enter Medicine`s related medicine ID: ";
			cin>>relatedmedid;
			cout<<"Enter Medicine`s type: ";
			cin>>type;
			cout<<"Enter Medicine`s factory location: ";
			cin>>factorylocation;
			cout<<"Enter Medicine`s expire date: ";
			cin>>expdate;
			cout<<"Enter Medicine`s price: ";
			cin>>price;
			cout<<"Enter Medicine`s quentity: ";
			cin>>Mqty;
		}
		void showMedicinelist()
		{
			cout<<setw(5)<<Mid<<setw(20)<<Mname<<setw(15)<<mdiseasename<<setw(5)<<relatedmedid<<setw(10);
			cout<<type<<setw(10)<<factorylocation<<setw(15)<<expdate<<setw(10)<<price<<setw(10)<<Mqty;
		}
		void updateMedicinelist()
		{
			int mup;
			cout<<"Update Medicine List Information: "<<endl;
			cout<<"1. Update Name\n2. Update type\n3. Update related medicine ID\n";
			cout<<"4. Update factory location\n5. expire date\n6. price\n7. quentity";
			cout<<"Choose updating Medicine List info process number: ";
			cin>>mup;
			if (mup==1)
			{
				cout<<"Enter New Name: ";
				cin>>Mname;
			}
			else if (mup==2)
			{
				cout<<"Enter New type: ";
				cin>>type;
			}
			else if (mup==3)
			{
				cout<<"Enter New related medicine ID: ";
				cin>>relatedmedid;
			}
			else if (mup==4)
			{
				cout<<"Enter New factory location: ";
				cin>>factorylocation;
			}
			else if (mup==5)
			{
				cout<<"Enter New expire date: ";
				cin>>expdate;
			}
			else if (mup==6)
			{
				cout<<"Enter New price: ";
				cin>>price;
			}
			else if (mup==7)
			{
				cout<<"Enter New quentity: ";
				cin>>Mqty;
			}
		}
		int getMid()
		{
			return Mid;
		}
		string getMdisease()
		{
			return mdiseasename;
		}
		float getPrice()
		{
			return price;
		}
		string getMname()
		{
			return Mname;
		}
}; //end of M class
class Booking
{
	private:
		int B1id;
		string B1date;
		Patient p;
		Doctor d;
		string treatmentdate;
	public:
		Booking()
		{
			
		}
		Booking(int v, string w, string x)
		{
			B1id=v;
			B1date=w;
			treatmentdate=x;
		}
		void insertBooking(Patient pnew, Doctor dnew)
		{
			cout<<"Enter Booking ID: ";
			cin>>B1id;
			cout<<"Enter Booking date: ";
			cin>>B1date;
			cout<<"Enter treatment date: ";
			cin>>treatmentdate;
			p=pnew;
			d=dnew;
		}
		void showBooking()
		{
			cout<<setw(5)<<B1id<<setw(15)<<B1date<<setw(15)<<treatmentdate;
			cout<<setw(8)<<p.getPid()<<setw(8)<<d.getDid()<<endl;
		}
		void updateBooking()
		{
			int b1up;
			cout<<"Update Booking Information: "<<endl;
			cout<<"1. Update Booking date\n2. Update treatment date\n";
			cout<<"Choose updating Booking info process number: ";
			cin>>b1up;
			if (b1up==1)
			{
				cout<<"Enter New Booking date: ";
				cin>>B1date;
			}
			else if (b1up==2)
			{
				cout<<"Enter New treatment date: ";
				cin>>treatmentdate;
			}
		}
		int getB1id()
		{
			return B1id;
		}
		string getB1date()
		{
			return B1date;
		}
		int getB1did()
		{
			int did=d.getDid();
			return did;
		}
		string getB1pdname()
		{
			string pdn=p.getpdisname();
			return pdn;
		}
}; //end of B1 class
class Treatment
{
	private:
		int Tid;
		string Tdate;
		Patient p;
		Doctor d;
		vector<Medicinelist> m;
		vector<int> Medqty;
	public:
		Treatment()
		{
			
		}
		void insertTreatment(Patient pnew, Doctor dnew, vector<Medicinelist> allm)
		{
			cout<<"Enter Treatment ID: ";
			cin>>Tid;
			cout<<"Enter Treatment Date: ";
			cin>>Tdate;
			
			cout<<"Enter Medicine Info: "<<endl;
			for(int i=0;i<allm.size();i++)
			{
				cout<<" ("<<i+1<<")\t";
				allm[i].showMedicinelist();
				cout<<endl;
			}
			int mnum;int qty1;char ch;
			do{
				cout<<"Enter Medicine: ";
				cin>>mnum;
				m.push_back(allm[mnum-1]);
				cout<<"Quantity: ";
				cin>>qty1;
				Medqty.push_back(qty1);
				cout<<"Do another? (y/n): ";
				cin>>ch;
			}while(ch=='y');
			p=pnew;
			d=dnew;
		}
		void showTreatment()
		{
			cout<<"Treatment ID: "<<setw(5)<<Tid<<endl;
			cout<<"Treatment Date: "<<setw(12)<<Tdate<<endl;
			cout<<"Patient ID: "<<setw(5)<<p.getPid()<<endl;
			cout<<"Doctor ID: "<<setw(5)<<d.getDid()<<endl;
			
			cout<<setw(6)<<"Mid";
			cout<<setw(20)<<"Disease Name";
			cout<<setw(10)<<"Qty"<<endl;
			cout<<"------------------------------------"<<endl;
			for(int i=0;i<m.size();i++)
			{
				cout<<setw(6)<<m[i].getMid();
				cout<<setw(20)<<m[i].getMdisease();
				cout<<setw(10)<<Medqty[i]<<endl;
			}
			cout<<"------------------------------------"<<endl;
		}
		void updateTreatment()
		{
			int tup;
			cout<<"Update Treatment Information: "<<endl;
			cout<<"1. Update Treatment date\n";
			cout<<"Choose updating Treatment info process number: ";
			cin>>tup;
			if (tup==1)
			{
				cout<<"Enter New Date: ";
				cin>>Tdate;
			}
		}
		int callCost()
		{
			int total=0;
			for (int i=0; i<m.size();i++)
			{
				total+=m[i].getPrice()*Medqty[i];
			}
			return total;
		}
		int getTid()
		{
			return Tid;
		}
		string getpname()
		{
			string pna=p.getPname();
			return pna;
		}
		string getTpdname()
		{
			string pdna=p.getpdisname();
			return pdna;
		}
		int getTdid()
		{
			int did=d.getDid();
			return did;
		}
		string getdname()
		{
			string dna=d.getDname();
			return dna;
		}
		vector<string> getTmname()
		{
			vector<string> Tmname;
			for(int i=0;i<m.size();i++)
			{
				string a=m[i].getMname();
				Tmname.push_back(a);
			}
			return Tmname;
		}
		vector<float> getTmprice()
		{
			vector<float> Tmprice;
			for(int i=0;i<m.size();i++)
			{
				float b=m[i].getPrice();
				Tmprice.push_back(b);
			}
			return Tmprice;
		}
		vector<int> getmedqty()
		{
			return Medqty;
		}
		string getTdate()
		{
			return Tdate;
		}
}; //end of T class
class Bill
{
	private:
		int B2id;
		string B2date;
		Treatment t;
		float totalcost;
	public:
		Bill()
		{
			
		}
		Bill(int aa, string bb, float cc)
		{
			B2id=aa;
			B2date=bb;
			totalcost=cc;
		}
		void insertBill(Treatment tnew)
		{
			cout<<"Enter Bill ID: ";
			cin>>B2id;
			cout<<"Enter Bill date: ";
			cin>>B2date;
			t=tnew;
			totalcost=tnew.callCost();
		}
		void showBill()
		{
			vector<string> Mn=t.getTmname();
			vector<float> pr=t.getTmprice();
			vector<int> qty=t.getmedqty();
			
			cout<<"Doctor: "<<t.getdname();
			cout<<setw(20)<<"Patient: "<<t.getpname();
			cout<<setw(10)<<"Date: "<<B2date<<endl;
			cout<<endl;
			cout<<setw(20)<<"Medicine Name";
			cout<<setw(10)<<"Qty";
			cout<<setw(10)<<"Price";
			cout<<setw(10)<<"Amount"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			for(int i=0;i<Mn.size();i++)
			{
				cout<<setw(20)<<Mn[i];
				cout<<setw(10)<<pr[i];
				cout<<setw(10)<<qty[i];
				
				float j=pr[i]*qty[i];
				cout<<setw(10)<<j;
				cout<<endl;
			}
			cout<<setw(30)<<"Total Amount"<<setw(20)<<totalcost<<endl;
			cout<<"--------------------------------------------------"<<endl;
		}
		void updateBill()
		{
			int b1up;
			cout<<"Update Bill Information: "<<endl;
			cout<<"1. Update Bill date\n2. Update Totalcost\n";
			cout<<"Choose updating Bill info process number: ";
			cin>>b1up;
			if (b1up==1)
			{
				cout<<"Enter New Bill date: ";
				cin>>B2date;
			}
			else if (b1up==2)
			{
				cout<<"Enter New Totalcost: ";
				cin>>totalcost;
			}
		}
		int getB2id()
		{
			return B2id;
		}
		string getB2date()
		{
			return B2date;
		}
		int getB2tid()
		{
			int tid=t.getTid();
			return tid;
		}
		int getB2did()
		{
			int did=t.getTdid();
			return did;
		}
		string getB2tpdname()
		{
			string tpd=t.getTpdname();
			return tpd;
		}
}; //end of B2 class
int main( )
{
	vector<Patient> pvec;	
	vector<Doctor> dvec;
	vector<Medicinelist> mvec;
	vector<Booking> b1vec;
	vector<Treatment> tvec;
	vector<Bill> b2vec;
	
	////////////////////////////// Patient File /////////////////////////////////
	ifstream rfile;
	rfile.open("Patient.txt");
	string data;
	int index;
	int Pid;
	string Pname; 
	string Paddress;
	string Pphone;
	int Page;
	string gender;
	string pdiseasename;
	
	if (rfile.is_open())
	{
		while (getline(rfile,data))
		{
			index=data.find(";");
			string a=data.substr(0,index);
			Pid=atof(a.c_str());
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			Pname=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			Paddress=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			Pphone=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			string b=data.substr(0,index);
			Page=atof(b.c_str());
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			gender=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			pdiseasename=data;
			
			Patient p(Pid,Pname,Paddress,Pphone,Page,gender,pdiseasename);
			pvec.push_back(p);
		} //end while
	} //end if
	
	////////////////////////////// Medicine List File /////////////////////////////////
	ifstream r1file;
	r1file.open("Medicinelist.txt");
	int Mid;
	string Mname;
	string mdiseasename;
	int relatedmedid;
	string type;
	string factorylocation;
	string expdate;
	float price;
	int Mqty;
	
	if (r1file.is_open())
	{
		while (getline(r1file,data))
		{
			index=data.find(";");
			string c=data.substr(0,index);
			Mid=atof(c.c_str());
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			Mname=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			mdiseasename=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			string d=data.substr(0,index);
			relatedmedid=atof(d.c_str());
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			type=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			factorylocation=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			expdate=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			string e=data.substr(0,index);
			price=atof(e.c_str());
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			string f=data.substr(0,index);
			Mqty=atof(f.c_str());
			data=data.substr(index+1,data.length());
						
			Medicinelist m(Mid,Mname,mdiseasename,relatedmedid,type,factorylocation,expdate,price,Mqty);
			mvec.push_back(m);
		} //end while
	} //end if
	
	////////////////////////////// Doctor File /////////////////////////////////
	ifstream r2file;
	r2file.open("Doctor.txt");
	int Did;
	string Dname;
	string Daddress;
	string Dphone;
	string specilizedfield;
	string position;
		
	if (r2file.is_open())
	{
		while (getline(r2file,data))
		{
			vector<string> vectime;
			vector<string> vecdate;
			vector<string> otherhopsitalname;
						
			index=data.find(";");
			string h=data.substr(0,index);
			Did=atof(h.c_str());
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			Dname=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			Daddress=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			Dphone=data.substr(0,index);
			data=data.substr(index+1,data.length());
						
			index=data.find(";");
			specilizedfield=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			position=data.substr(0,index);
			data=data.substr(index+1,data.length());
			
			index=data.find(";");
			string alltime=data.substr(0,index);
			int i=alltime.find(",");
			while (i<alltime.size())
			{
				string ti=alltime.substr(0,i);
				alltime=alltime.substr(i+1,alltime.length());
				vectime.push_back(ti);
				i=alltime.find(",");
			}
			vectime.push_back(alltime);
			data=data.substr(index+1,data.length());
			//end of time
			
			index=data.find(";");
			string alldate=data.substr(0,index);
			int j=alldate.find(",");
			while (j<alldate.size())
			{
				string ti=alldate.substr(0,j);
				alldate=alldate.substr(j+1,alldate.length());
				vecdate.push_back(ti);
				j=alldate.find(",");
			}
			vecdate.push_back(alldate);
			data=data.substr(index+1,data.length());
			//end of time
			
			string allhop=data;
			int k=allhop.find(",");
			while (k<allhop.size())
			{
				string hop=allhop.substr(0,k);
				allhop=allhop.substr(k+1,allhop.length());
				otherhopsitalname.push_back(hop);
				k=allhop.find(",");
			}
			otherhopsitalname.push_back(allhop);
			//end of time
			
			Doctor d(Did,Dname,Daddress,Dphone,specilizedfield,position,vectime,vecdate,otherhopsitalname);
			dvec.push_back(d);
		} //end while
	} //end if			
	
	int mainnum;
	mainlabel:
	cout<<"\n\n***************** Patient Registration and Treatment System *******************"<<endl;
	cout<<"********************************** Main Menu **********************************"<<endl;
	cout<<"1. Patient Menu\n2. Doctor Menu\n3. Medicine List Menu\n";
	cout<<"4. Booking Menu\n5. Treatment Menu\n6. Bill Slip Menu\n7. Exit"<<endl;
	cout<<"Choose Main process number: ";
	cin>>mainnum;
	switch(mainnum)
	{
		case 1:{
			int pnum;
			plabel:
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Patient Menu ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<"1. Insert Patient\n2. Update Patient\n3. Delete Patient\n";
			cout<<"4. Show Patient\n5. Search Doctor List\n6. Make Booking\n7. Back\n";
			cout<<"Choose patient process number: ";
			cin>>pnum;
			switch (pnum)
			{
				case 1:{
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~ Inserting Patient Information ~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Enter Patient Information: "<<endl;
					Patient p;
					p.insertPatient();
					pvec.push_back(p);
					cout<<"Inserted Successfully\n";
					goto plabel;
				}
				break;
				case 2:{
					int paid;
					int found=-1;
					puplabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~ Updating Patient Information ~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Patient ID list:"<<endl;
					for (int i=0;i<pvec.size();i++)
					{
						cout<<pvec[i].getPid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Patient ID to Update: ";
					cin>>paid;
					for (int i=0;i<pvec.size();i++)
					{
						if (paid==pvec[i].getPid())
						found=i;
						break;
					}
					if (found >= 0)
					{
						pvec[found].updatePatient();
						cout<<"Update Succeccfully\n";
						goto plabel;
					}
					else
					{
						cout<<"No data for patient ID\n";
						goto puplabel;
					}
				}
				break;
				case 3:{
					int pid;
					int found=-1;
					pdellabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~ Deleting Patient Information ~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Patient ID list:"<<endl;
					for (int i=0;i<pvec.size();i++)
					{
						cout<<pvec[i].getPid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Patient ID to delete: ";
					cin>>pid;
					for(int i=0;i<pvec.size();i++)
					{
						if (pid==pvec[i].getPid())
						{
							found=i;
							break;
						}
					}
					if (found>=0)
					{
						pvec.erase(pvec.begin()+found);
						cout<<"Delete Successfully\n";
						goto plabel;
					}
					else
					{
						cout<<"!!!!!Wrong Patient ID to delete!!!!!\n";
						goto pdellabel;
					}
				}
				break;
				case 4:{
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~ Showing Patient Information ~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Number of Patient: "<<pvec.size()<<endl;
					cout<<setw(5)<<"ID"<<setw(15)<<"Name"<<setw(10)<<"Address"<<setw(15);
					cout<<"Phone"<<setw(5)<<"Age"<<setw(10)<<"Gender"<<setw(15)<<"Disease Name"<<endl;
					cout<<"---------------------------------------------------------------------------"<<endl;
					for(int i=0;i<pvec.size();i++)
					{
						pvec[i].showPatient();
						cout<<endl;
					}
					cout<<"---------------------------------------------------------------------------"<<endl;
					goto plabel;
				}
				break;
				case 5:{
					int pid, found=-1;
					doclist:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Search Doctor List ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Patient ID list:"<<endl;
					for (int i=0;i<pvec.size();i++)
					{
						cout<<pvec[i].getPid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Patinet ID to view doctor list: ";
					cin>>pid;
					for(int i=0;i<pvec.size();i++)
					{
						if (pid==pvec[i].getPid())
						{
							found=i;
							break;
						}
					}
					if (found>=0)
					{
						for(int i=0;i<dvec.size();i++)
						{
							if(pvec[found].getpdisname()==dvec[i].getspecilizedfield())
							{
								dvec[i].showDoctor();
								cout<<endl;
							}
						}
						goto plabel;
					}
					else
					{
						cout<<"No data for the Patient ID!!"<<endl;
						goto doclist;
					}
				}
				break;
				case 6:{
					int pid, found=-1;
					Pmakebook:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Make Booking ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Patient ID list:"<<endl;
					for (int i=0;i<pvec.size();i++)
					{
						cout<<pvec[i].getPid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Patient ID to make booking: ";
					cin>>pid;
					for(int i=0;i<pvec.size();i++)
					{
						if(pid==pvec[i].getPid())
						{
							found=i;
							break;
						}
					}
					if(found>=0)
					{
						int dnum;int dcount=0;
						cout<<"Doctor List: "<<endl;
						for(int i=0;i<dvec.size();i++)
						{
							if(dvec[i].getspecilizedfield()==pvec[found].getpdisname())
							{
								dcount++;
								cout<<"("<<i+1<<")\t";
								dvec[i].showDoctor();
								cout<<endl;
							}
						}
						if (dcount==0)
						{
							cout<<"No Doctor data for this patient!!!"<<endl;
							goto Pmakebook;
						}
						else{
							cout<<"Choose Doctor to make booking: ";
							cin>>dnum;
							Booking b1;
							b1.insertBooking(pvec[found],dvec[dnum-1]);
							b1vec.push_back(b1);
							cout<<"Make Booking from Patient is successfully inserted!!!"<<endl;
							goto plabel;
						}
					}
					else
					{
						cout<<"Wrong Patient ID!!!"<<endl;
						goto Pmakebook;
					}
				}
				break;
				case 7:{
					goto mainlabel;
				}
				break;
				default:{
				cout<<"Wrong patient process number!\n";
				goto plabel;				
				}
				break;
			}
		} //end of Patient
		break;
		case 2:{
			int dnum;
			dlabel:
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Doctor Menu ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<"1. Insert Doctor\n2. Update Doctor\n3. Delete Doctor\n";
			cout<<"4. Show Doctor\n5. View Booking List\n6. Make Treatment\n";
			cout<<"7. View Treatment Record\n8. View Medicine List\n9. Back\n";
			cout<<"Choose doctor process number: ";
			cin>>dnum;
			switch (dnum)
			{
				case 1:{
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~ Inserting Doctor Information ~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Enter Doctor Information: "<<endl;
					Doctor d;
					d.insertDoctor();
					dvec.push_back(d);
					cout<<"Inserted Successfully\n";
					goto dlabel;
				}
				break;
				case 2:{
					int doid;
					int found=-1;
					duplabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~ Updating Doctor Information ~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID to Update: ";
					cin>>doid;
					for (int i=0;i<dvec.size();i++)
					{
						if (doid==dvec[i].getDid())
						{
							found=i;
						}
						break;
					}
					if (found>=0)
					{
						dvec[found].updateDoctor();
						cout<<"Update Succeccfully\n";
						goto dlabel;
					}
					else
					{
						cout<<"No data for Doctor ID\n";
						goto duplabel;
					}
				}
				break;
				case 3:{
					int did;
					int found=-1;
					ddellabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~ Deleting Doctor Information ~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID to delete: ";
					cin>>did;
					for(int i=0;i<dvec.size();i++)
					{
						if (did==dvec[i].getDid())
						{
							found=i;
							break;
						}
					}
					if (found>=0)
					{
						dvec.erase(dvec.begin()+found);
						cout<<"Delete Successfully\n";
						goto dlabel;
					}
					else
					{
						cout<<"!!!!!Wrong Doctor ID to delete!!!!!\n";
						goto ddellabel;
					}
				}
				break;
				case 4:{
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~ Showing Doctor Information ~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Number of Doctor: "<<dvec.size()<<endl;
					cout<<setw(5)<<"ID"<<setw(13)<<"Name"<<setw(15)<<"Address"<<setw(13)<<"Phone"<<setw(15)<<"Feild";
					cout<<setw(15)<<"Position"<<setw(30)<<"Time"<<setw(25)<<"Date"<<setw(28)<<"Other Hopsital"<<endl;
					cout<<"-----------------------------------------------------------------------------";
					cout<<"----------------------------------------------------------------------------------"<<endl;
					for(int i=0;i<dvec.size();i++)
					{
						dvec[i].showDoctor();
						cout<<endl;
					}
					cout<<"-----------------------------------------------------------------------------";
					cout<<"----------------------------------------------------------------------------------"<<endl;
					goto dlabel;
				}
				break;
				case 5:{
					int did, found=-1;
					bookinglist:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ View Booking List ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID to view booking list: ";
					cin>>did;
					for(int i=0;i<dvec.size();i++)
					{
						if (did==dvec[i].getDid())
						{
							found=i;
							break;
						}
					}
					if (found>=0)
					{
						cout<<setw(5)<<"B-ID"<<setw(15)<<"B-Date"<<setw(15)<<"T-Date";
						cout<<setw(8)<<"P-ID"<<setw(8)<<"D-ID"<<endl;
						for(int i=0;i<dvec.size();i++)
						{
							if(dvec[found].getDid()==b1vec[i].getB1did())
							{
								b1vec[i].showBooking();
								cout<<endl;
							}
						}
						goto dlabel;
					}
					else
					{
						cout<<"No data for the Doctor ID!!"<<endl;
						goto bookinglist;
					}
				}
				break;
				case 6:{
					Dtinsert:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Make Treatment ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Enter Treatment Information: "<<endl;
					int pid;int found=-1;
					cout<<"Patient ID list:"<<endl;
					for (int i=0;i<pvec.size();i++)
					{
						cout<<pvec[i].getPid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Patient ID to make booking: ";
					cin>> pid;
					for (int i=0;i<pvec.size();i++)
					{
						if (pid==pvec[i].getPid())
						{
							found=i;
							break;
						}
					}
					int did;int found1=-1;
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<=dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID to make booking: ";
					cin>>did;
					for (int i=0;i<dvec.size();i++)
					{
						if (did==dvec[i].getDid())
						{
							found1=i;
							break;
						}
					}
					if ((found>=0) && (found1>=0))
					{
						Treatment t;
						t.insertTreatment(pvec[found],dvec[found1],mvec);
						tvec.push_back(t);
						cout<<"Inserted Successfully!!!!"<<endl;
						goto dlabel;						
					}
					else
					{
						cout<<"Retype Patient or Doctor ID to make booking!!"<<endl;
						goto Dtinsert;
					}
				}
				break;
				case 7:{
					int did, found=-1;
					treatlist:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~ View Treatment Record ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID to view treatment record: ";
					cin>>did;
					for(int i=0;i<dvec.size();i++)
					{
						if (did==dvec[i].getDid())
						{
							found=i;
							break;
						}
					}
					if (found>=0)
					{
						for(int i=0;i<tvec.size();i++)
						{
							if(dvec[found].getDid()==tvec[i].getTdid())
							{
								tvec[i].showTreatment();
								cout<<endl;
							}
						}
						goto dlabel;
					}
					else
					{
						cout<<"No data for the Doctor ID!!"<<endl;
						goto treatlist;
					}
				}
				break;
				case 8:{
					int did, found=-1;
					medilist:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ View Medicine List ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID to view medicine list: ";
					cin>>did;
					for(int i=0;i<dvec.size();i++)
					{
						if (did==dvec[i].getDid())
						{
							found=i;
							break;
						}
					}
					if (found>=0)
					{
						cout<<setw(5)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Disease"<<setw(5)<<"R-ID"<<setw(10);
						cout<<"Type"<<setw(10)<<"Factory"<<setw(15)<<"Expire Date"<<setw(10);
						cout<<"Price"<<setw(10)<<"Quentity"<<endl;
						cout<<"-----------------------------------------------------------------------------";
						cout<<"-----------------------"<<endl;
						for(int i=0;i<mvec.size();i++)
						{
							if(dvec[found].getspecilizedfield()==mvec[i].getMdisease())
							{
								mvec[i].showMedicinelist();
								cout<<endl;
							}
						}
						cout<<"-----------------------------------------------------------------------------";
						cout<<"-----------------------"<<endl;
						goto dlabel;
					}
					else
					{
						cout<<"No data for the Doctor ID!!"<<endl;
						goto medilist;
					}
				}
				break;
				case 9:{
					goto mainlabel;
				}
				break;
				default:{
				cout<<"Wrong doctor process number!\n";
				goto dlabel;				
				}
				break;
			}
		} //end of doctor
		break;
		case 3:{
			int mnum;
			mlabel:
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Medicine List Menu ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<"1. Insert Medicine List\n2. Update Medicine List\n3. Delete Medicine List\n";
			cout<<"4. Show Medicine List\n5. Back\n";
			cout<<"Choose medicine list process number: ";
			cin>>mnum;
			switch (mnum)
			{
				case 1:{
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~ Inserting Medicine Information ~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Enter Medicine List Information: "<<endl;
					Medicinelist m;
					m.insertMedicinelist();
					mvec.push_back(m);
					cout<<"Inserted Successfully\n";
					goto mlabel;
				}
				break;
				case 2:{
					int mid;
					int found=-1;
					muplabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~ Updating Medicine Information ~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Medicine ID list:"<<endl;
					for (int i=0;i<mvec.size();i++)
					{
						cout<<mvec[i].getMid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Medicine List ID to Update: ";
					cin>>mid;
					for (int i=0;i<mvec.size();i++)
					{
						if (mid==mvec[i].getMid())
						found=i;break;
					}
					if (found >= 0)
					{
						mvec[found].updateMedicinelist();
						cout<<"Update Succeccfully\n";
						goto mlabel;
					}
					else
					{
						cout<<"No data for Medicine List ID\n";
						goto muplabel;
					}
				}
				break;
				case 3:{
					int meid;
					int found=-1;
					mdellabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~ Deleting Medicine Information ~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Medicine ID list:"<<endl;
					for (int i=0;i<mvec.size();i++)
					{
						cout<<mvec[i].getMid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Medicine ID to delete: ";
					cin>>meid;
					for(int i=0;i<mvec.size();i++)
					{
						if (meid==mvec[i].getMid())
						{
							found=i;
							break;
						}
					}
					if (found>=0)
					{
						mvec.erase(mvec.begin()+found);
						cout<<"Delete Successfully\n";
						goto mlabel;
					}
					else
					{
						cout<<"!!!!!Wrong Medicine ID to delete!!!!!\n";
						goto mdellabel;
					}
				}
				break;
				case 4:{
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~ Showing Medicine Information ~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Number of Medicine List: "<<mvec.size()<<endl;
					cout<<setw(5)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Disease"<<setw(5)<<"R-ID"<<setw(10);
					cout<<"Type"<<setw(10)<<"Factory"<<setw(15)<<"Expire Date"<<setw(10);
					cout<<"Price"<<setw(10)<<"Quentity"<<endl;
					cout<<"-----------------------------------------------------------------------------";
					cout<<"-----------------------"<<endl;
					for(int i=0;i<mvec.size();i++)
					{
						mvec[i].showMedicinelist();
						cout<<endl;
					}
					cout<<"-----------------------------------------------------------------------------";
					cout<<"-----------------------"<<endl;
					goto mlabel;
				}
				break;
				case 5:{
					goto mainlabel;
				}				
				break;
				default:{
				cout<<"Wrong medicine process number!\n";
				goto mlabel;				
				}
				break;
			}
		} //end of  medicine
		break;
		case 4:{
		int b1num;
			b1label:
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Booking Menu ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<"1. Insert Booking\n2. Update Booking\n3. Delete Booking\n";
			cout<<"4. Show Booking\n5. Search Daily Booking by Doctor ID\n";
			cout<<"6. Search Monthly Booking by Doctor ID\n7. Search Daily Booking by Patient Disease\n";
			cout<<"8. Search Monthly Booking by Patient Disease\n9. Back\n";
			cout<<"Choose booking process number: ";
			cin>>b1num;
			switch (b1num)
			{
				case 1:{
					b1insert:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~ Inserting Booking Information ~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Enter Booking Information: "<<endl;
					int pid;int found=-1;
					cout<<"Patient ID list:"<<endl;
					for (int i=0;i<pvec.size();i++)
					{
						cout<<pvec[i].getPid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Patient ID to make booking: ";
					cin>> pid;
					for (int i=0;i<pvec.size();i++)
					{
						if (pid==pvec[i].getPid())
						{
							found=i;
							break;
						}
					}
					int did;int found1=-1;
					cout<<"Doctor ID list:"<<endl;
					for (int j=0;j<dvec.size();j++)
					{
						cout<<dvec[j].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID to make booking: ";
					cin>>did;
					for (int j=0;j<dvec.size();j++)
					{
						if (did==dvec[j].getDid())
						{
							found1=j;
							break;
						}
					}
					if ((found>=0) && (found1>=0))
					{
						Booking b1;
						b1.insertBooking(pvec[found],dvec[found1]);
						b1vec.push_back(b1);
						cout<<"Inserted Successfully!!!!"<<endl;
						goto b1label;						
					}
					else
					{
						cout<<"Retype Patient or Doctor ID to make booking!!"<<endl;
						goto b1insert;
					}
				}
				break;
				case 2:{
					int b1id;
					int found=-1;
					b1uplabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~ Updating Booking Information ~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Booking ID list:"<<endl;
					for (int i=0;i<b1vec.size();i++)
					{
						cout<<b1vec[i].getB1id()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Booking ID to Update: ";
					cin>>b1id;
					for (int i=0;i<b1vec.size();i++)
					{
						if (b1id==b1vec[i].getB1id())
						found=i;break;
					}
					if (found >= 0)
					{
						b1vec[found].updateBooking();
						cout<<"Update Succeccfully\n";
						goto b1label;
					}
					else
					{
						cout<<"No data for Booking ID\n";
						goto b1uplabel;
					}
				}
				break;
				case 3:{
					int boid;
					int found=-1;
					b1dellabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~ Deleting Booking Information ~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Booking ID list:"<<endl;
					for (int i=0;i<b1vec.size();i++)
					{
						cout<<b1vec[i].getB1id()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Booking ID to delete: ";
					cin>>boid;
					for(int i=0;i<b1vec.size();i++)
					{
						if (boid==b1vec[i].getB1id())
						{
							found=i;
							break;
						}
					}
					if (found>=0)
					{
						b1vec.erase(b1vec.begin()+found);
						cout<<"Delete Successfully\n";
						goto b1label;
					}
					else
					{
						cout<<"!!!!!Wrong Booking ID to delete!!!!!\n";
						goto b1dellabel;
					}
				}
				break;
				case 4:{
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~ Showing Patient Information ~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Number of Booking: "<<b1vec.size()<<endl;
					cout<<setw(5)<<"B-ID"<<setw(15)<<"B-Date"<<setw(15)<<"T-Date";
					cout<<setw(8)<<"P-ID"<<setw(8)<<"D-ID"<<endl;
					cout<<"---------------------------------------------------"<<endl;
					for(int i=0;i<b1vec.size();i++)
					{
						b1vec[i].showBooking();
						cout<<endl;
					}
					cout<<"---------------------------------------------------"<<endl;
					goto b1label;
				}
				break;
				case 5:{
					B1ddsearch:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~ Search Daily Booking By Doctor ID ~~~~~~~~~~~~~~~~~~~~~~\n";
					string dd; int found=-1, did;
					cout<<"Enter date to search data:";
					cin>>dd;
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID: ";
					cin>>did;
					for(int i=0;i<b1vec.size();i++)
					{
						if (dd==b1vec[i].getB1date())
						{
							found=i;
						}
					}
					cout<<setw(5)<<"B-ID"<<setw(15)<<"B-Date"<<setw(15)<<"T-Date";
					cout<<setw(8)<<"P-ID"<<setw(8)<<"D-ID"<<endl;
					for(int i=0;i<b1vec.size();i++)
					{
						if ((found>=0) && (did==b1vec[i].getB1did()))
						{
							b1vec[found].showBooking();
							goto b1label;
						}
						else
						{
							cout<<"Retype Date or Doctor ID to search data!!"<<endl;
							goto B1ddsearch;
						}
					}
				}
				break;
				case 6:{
					B1mdsearch:
					cout<<"~~~~~~~~~~~~~~~~~~~~~ Search Monthly Booking By Doctor ID ~~~~~~~~~~~~~~~~~~~~~\n";
					string m, y; int found=-1, found1=-1, did;
					cout<<"Enter Month to search data:";
					cin>>m;
					cout<<"Enter Year to search data:";
					cin>>y;
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID: ";
					cin>>did;
					cout<<setw(5)<<"B-ID"<<setw(15)<<"B-Date"<<setw(15)<<"T-Date";
					cout<<setw(8)<<"P-ID"<<setw(8)<<"D-ID"<<endl;
					for(int i=0;i<=b1vec.size();i++)
					{
						string r=b1vec[i].getB1date();
						int index;
					
						index=r.find(".");
						string dd=r.substr(0,index);
						r=r.substr(index+1,r.length());
					
						index=r.find(".");
						string mm=r.substr(0,index);
						r=r.substr(index+1,r.length());
					
						string yy=r;
					
						if (m==mm)
						{
							found=i;
						}
						if (y==yy)
						{
							found1=i;
						}
						if ((found>=0) && (found1>=0) && (did==b1vec[i].getB1did()))
						{
							b1vec[found].showBooking();
							goto b1label;
						}
						else
						{
							cout<<"Retype Month, Year or Doctor ID to search data!!"<<endl;
							goto B1mdsearch;
						}
					}
				}
				break;
				case 7:{
					B1dpsearch:
					cout<<"~~~~~~~~~~~~~~~~~~~ Search Daily Booking By Patient Disease ~~~~~~~~~~~~~~~~~~~\n";
					string dd, pd; int found=-1;
					cout<<"Enter date to search data:";
					cin>>dd;
					cout<<"Enter Patient Disease name: ";
					cin>>pd;
					for(int i=0;i<b1vec.size();i++)
					{
						if (dd==b1vec[i].getB1date())
						{
							found=i;
							break;
						}
					}
					cout<<setw(5)<<"B-ID"<<setw(15)<<"B-Date"<<setw(15)<<"T-Date";
					cout<<setw(8)<<"P-ID"<<setw(8)<<"D-ID"<<endl;
					for(int i=0;i<b1vec.size();i++)
					{
						if ((found>=0) && (pd==b1vec[i].getB1pdname()))
						{
							b1vec[found].showBooking();
							goto b1label;
						}
						else
						{
							cout<<"Retype Date or Disease name to search data!!"<<endl;
							goto B1dpsearch;
						}
					}
				}
				break;
				case 8:{
					B1mpsearch:
					cout<<"~~~~~~~~~~~~~~~~~~ Search Monthly Booking By Patient Disease ~~~~~~~~~~~~~~~~~~\n";
					string m, y, pd; int found=-1, found1=-1;
					cout<<"Enter Month to search data:";
					cin>>m;
					cout<<"Enter Year to search data:";
					cin>>y;
					cout<<"Enter Patient Disease name: ";
					cin>>pd;
					cout<<setw(5)<<"B-ID"<<setw(15)<<"B-Date"<<setw(15)<<"T-Date";
					cout<<setw(8)<<"P-ID"<<setw(8)<<"D-ID"<<endl;
					if (b1vec.size()==0)
					{
						cout<<"!!!!!No data in Booking List!!!!";
						goto b1insert;
						cout<<endl;
					}
					for(int i=0;i<b1vec.size();i++)
					{
						string r1=b1vec[i].getB1date();
						int index;
					
						index=r1.find(".");
						string dd=r1.substr(0,index);
						r1=r1.substr(index+1,r1.length());
					
						index=r1.find(".");
						string mm=r1.substr(0,index);
						r1=r1.substr(index+1,r1.length());
					
						string yy=r1;
					
						if (m==mm)
						{
							found=i;
						}
						
						if (y==yy)
						{
							found1=i;
						}
						if ((found>=0) && (found1>=0) && (pd==b1vec[i].getB1pdname()))
						{
							b1vec[found].showBooking();
							goto b1label;
						}
						else
						{
							cout<<"Retype Month, Year or Disease name to search data!!"<<endl;
							goto B1mpsearch;
						}
					}
				}
				break;
				case 9:{
					goto mainlabel;
				}				
				break;
				default:{
				cout<<"Wrong booking process number!\n";
				goto b1label;				
				}
				break;
			}
		} //end of booking
		break;
		case 5:{
		int tnum;
			tlabel:
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Treatment Menu ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<"1. Insert Treatment\n2. Update Treatment\n3. Delete Treatment\n";
			cout<<"4. Show Treatment\n5. Search Daily Treatment by Doctor ID\n";
			cout<<"6. Search Monthly Treatment by Doctor ID\n7. Search Daily Booking by Patient Disease\n";
			cout<<"8. Search Monthly Booking by Patient Disease\n9. Back\n";
			cout<<"Choose treatment process number: ";
			cin>>tnum;
			switch (tnum)
			{
		 			case 1:{
					tinsert:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~ Inserting Treatment Information ~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Enter Treatment Information: "<<endl;
					int pid;int found=-1;
					cout<<"Patient ID list:"<<endl;
					for (int i=0;i<pvec.size();i++)
					{
						cout<<pvec[i].getPid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Patient ID to make booking: ";
					cin>>pid;
					for (int i=0;i<pvec.size();i++)
					{
						if (pid==pvec[i].getPid())
						{
							found=i;
							break;
						}
					}
					int did;int found1=-1;
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID to make booking: ";
					cin>>did;
					for (int i=0;i<dvec.size();i++)
					{
						if (did==dvec[i].getDid())
						{
							found1=i;
							break;
						}
					}
					if ((found>=0) && (found1>=0))
					{
						Treatment t;
						t.insertTreatment(pvec[found],dvec[found1],mvec);
						tvec.push_back(t);
						cout<<"Inserted Successfully!!!!"<<endl;
						goto tlabel;						
					}
					else
					{
						cout<<"Retype Patient or Doctor ID to make booking!!"<<endl;
						goto tinsert;
					}				
				}
				break;
				case 2:{
					int tid;
					int found=-1;
					tuplabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~ Updating Treatment Information ~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Treatment ID list:"<<endl;
					for (int i=0;i<tvec.size();i++)
					{
						cout<<tvec[i].getTid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Treatment ID to Update: ";
					cin>>tid;
					for (int i=0;i<tvec.size();i++)
					{
						if (tid==tvec[i].getTid())
						found=i;break;
					}
					if (found >= 0)
					{
						tvec[found].updateTreatment();
						cout<<"Update Succeccfully\n";
						goto tlabel;
					}
					else
					{
						cout<<"No data for Treatment ID\n";
						goto tuplabel;
					}
				}
				break;
				case 3:{
					int tid;
					int found=-1;
					tdellabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~ Deleting Treatment Information ~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Treatment ID list:"<<endl;
					for (int i=0;i<tvec.size();i++)
					{
						cout<<tvec[i].getTid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Treatment ID to delete: ";
					cin>>tid;
					for(int i=0;i<tvec.size();i++)
					{
						if (tid==tvec[i].getTid())
						{
							found=i;
							break;
						}
					}
					if (found>=0)
					{
						tvec.erase(tvec.begin()+found);
						cout<<"Delete Successfully\n";
						goto tlabel;
					}
					else
					{
						cout<<"!!!!!Wrong Treatment ID to delete!!!!!\n";
						goto tdellabel;
					}
				}
				break;
				case 4:{
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~ Showing Treatment Information ~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Number of Treatment: "<<tvec.size()<<endl;
					for(int i=0;i<tvec.size();i++)
					{
						tvec[i].showTreatment();
						cout<<endl;
					}
					goto tlabel;
				}
				break;
				case 5:{
					Tddsearch:
					cout<<"~~~~~~~~~~~~~~~~~~~~~ Search Daily Treatment By Doctor ID ~~~~~~~~~~~~~~~~~~~~~\n";
					string dd; int found=-1; 
					int did;
					cout<<"Enter date to search data:";
					cin>>dd;
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID: ";
					cin>>did;
					for(int i=0;i<tvec.size();i++)
					{
						if (dd==tvec[i].getTdate())
						{
							found=i;
							break;
						}
					}
					for (int i=0;i<tvec.size();i++)
					{
							if ((found>=0) && (did==tvec[i].getTdid()))
						{
							tvec[found].showTreatment();
							goto tlabel;
						}
						else
						{
							cout<<"Retype Date or Doctor ID to search data!!"<<endl;
							goto Tddsearch;
						}
					}
				}
				break;
				case 6:{
					tmdsearch:
					cout<<"~~~~~~~~~~~~~~~~~~~~ Search Monthly Treatment By Doctor ID ~~~~~~~~~~~~~~~~~~~~\n";
					string m, y; int found=-1, found1=-1, did;
					cout<<"Enter Month to search data:";
					cin>>m;
					cout<<"Enter Year to search data:";
					cin>>y;
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID: ";
					cin>>did;
					for(int i=0;i<tvec.size();i++)
					{
						string r=tvec[i].getTdate();
						int index;
					
						index=r.find(".");
						string dd=r.substr(0,index);
						r=r.substr(index+1,r.length());
					
						index=r.find(".");
						string mm=r.substr(0,index);
						r=r.substr(index+1,r.length());
					
						string yy=r;
					
						if (m==mm)
						{
							found=i;
						}
						if (y==yy)
						{
							found1=i;
						}
						if ((found>=0) && (found1>=0) && (did==tvec[i].getTdid()))
						{
							tvec[found].showTreatment();
							goto tlabel;
						}
						else
						{
							cout<<"Retype Month, Year or Doctor ID to search data!!"<<endl;
							goto tmdsearch;
						}
					}
				}
				break;
				case 7:{
					Tdpsearch:
					cout<<"~~~~~~~~~~~~~~~~~~ Search Daily Treatment By Patient Disease ~~~~~~~~~~~~~~~~~~\n";
					string dd, pd; int found=-1; 
					cout<<"Enter date to search data: ";
					cin>>dd;
					cout<<"Enter Patient Disease name: ";
					cin>>pd;
					for(int i=0;i<tvec.size();i++)
					{
						if (dd==tvec[i].getTdate())
						{
							found=i;
							break;
						}
					}
					for (int i=0;i<tvec.size();i++)
					{
							if ((found>=0) && (pd==tvec[i].getTpdname()))
						{
							tvec[found].showTreatment();
							goto tlabel;
						}
						else
						{
							cout<<"Retype Date or Doctor ID to search data!!"<<endl;
							goto Tdpsearch;
						}
					}
				}
				break;
				case 8:{
					tmpsearch:
					cout<<"~~~~~~~~~~~~~~~~~ Search Monthly Treatment By Patient Disease ~~~~~~~~~~~~~~~~~\n";
					string m, y, pd; int found=-1, found1=-1;
					cout<<"Enter Month to search data:";
					cin>>m;
					cout<<"Enter Year to search data: ";
					cin>>y;
					cout<<"Enter Patient Disease name: ";
					cin>>pd;
					if (tvec.size()==0)
					{
						cout<<"!!!!!No data in Booking List!!!!";
						goto tinsert;
						cout<<endl;
					}
					for(int i=0;i<tvec.size();i++)
					{
						string r=tvec[i].getTdate();
						int index;
					
						index=r.find(".");
						string dd=r.substr(0,index);
						r=r.substr(index+1,r.length());
					
						index=r.find(".");
						string mm=r.substr(0,index);
						r=r.substr(index+1,r.length());
					
						string yy=r;
					
						if (m==mm)
						{
							found=i;
						}
						if (y==yy)
						{
							found1=i;
						}
						if ((found>=0) && (found1>=0) && (pd==tvec[i].getTpdname()))
						{
							tvec[found].showTreatment();
							goto tlabel;
						}
						else
						{
							cout<<"Retype Month, Year or Doctor ID to search data!!"<<endl;
							goto tmpsearch;
						}
					}
				}
				break;
				case 9:{
					goto mainlabel;
				}
				break;
				default:{
				cout<<"Wrong treatment process number!\n";
				goto tlabel;				
				}
				break;
			}
		} //end of  treatment
		break;
		case 6:{
			int b2num;
			b2label:
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Bill Menu ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<"1. Insert Bill\n2. Update Bill\n3. Delete Bill\n";
			cout<<"4. Show Bill\n5. Search Daily Bill Slip by doctor ID\n";
			cout<<"6. Search Monthly Bill Slip by doctor ID\n7. Search Daily Bill Slip by Patient Disease\n";
			cout<<"8. Search Monthly Bill Slip by Patient Disease\n9. Back\n";
			cout<<"Choose bill process number: ";
			cin>>b2num;
			switch (b2num)
			{
				case 1:{
					B2insert:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~ Inserting Bill Slip Information ~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Enter Bill information: "<<endl;
					int tid; int found=-1;
					cout<<"Treatment ID list:"<<endl;
					for (int i=0;i<tvec.size();i++)
					{
						cout<<tvec[i].getTid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Treatment ID to make bill slip: ";
					cin>>tid;
					for (int j=0;j<b2vec.size();j++)
					{
						if (tid==b2vec[j].getB2tid())
						{
							cout<<"The bill slip is already out for this treatment!!"<<endl;
							goto B2insert;
						}
					}
					for(int i=0;i<tvec.size();i++)
					{
						if (tid==tvec[i].getTid())
						{
							found=i;
							break;
						}					
					}
					if(found>=0)
					{
						Bill b2;
						b2.insertBill(tvec[found]);
						b2vec.push_back(b2);
						cout<<"Inserted Successfully!!\n";
						goto b2label;
					}
					else 
					{
						cout<<"Bill slip with that Treatment is already out!!"<<endl;
						cout<<"Please enter again Treatment ID!!"<<endl;
						goto B2insert;
					}
				}
				break;
				case 2:{
					int b2id;
					int found=-1;
					b2uplabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~ Updating Bill Slip Information ~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Bill slip ID list:"<<endl;
					for (int i=0;i<b2vec.size();i++)
					{
						cout<<b2vec[i].getB2id()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Bill ID to Update: ";
					cin>>b2id;
					for (int i=0;i<b2vec.size();i++)
					{
						if (b2id==b2vec[i].getB2id())
						found=i;
						break;
					}
					if (found >= 0)
					{
						b2vec[found].updateBill();
						cout<<"Update Succeccfully\n";
						goto b2label;
					}
					else
					{
						cout<<"No data for Bill ID\n";
						goto b2uplabel;
					}
				}
				break;
				case 3:{
					int biid;
					int found=-1;
					b2dellabel:
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~ Deleting Bill Slip Information ~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<"Bill slip ID list:"<<endl;
					for (int i=0;i<b2vec.size();i++)
					{
						cout<<b2vec[i].getB2id()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Bill ID to delete: ";
					cin>>biid;
					for(int i=0;i<b2vec.size();i++)
					{
						if (biid==b2vec[i].getB2id())
						{
							found=i;
							break;
						}
					}
					if (found>=0)
					{
						b2vec.erase(b2vec.begin()+found);
						cout<<"Delete Successfully\n";
						goto b2label;
					}
					else
					{
						cout<<"!!!!!Wrong Bill ID to delete!!!!!\n";
						goto b2dellabel;
					}
				}
				break;
				case 4:{
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~ Showing Bill Slip Information ~~~~~~~~~~~~~~~~~~~~~~~\n";
					for(int i=0;i<b2vec.size();i++)
					{
						b2vec[i].showBill();
						cout<<endl;
					}
					goto b2label;
				}
				break;
				case 5:{
					B2ddsearch:
					cout<<"~~~~~~~~~~~~~~~~~~~~~ Search Daily Bill Slip By Doctor ID ~~~~~~~~~~~~~~~~~~~~~\n";
					string dd; int found=-1, did;
					cout<<"Enter date to search data:";
					cin>>dd;
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID: ";
					cin>>did;
					for(int i=0;i<b2vec.size();i++)
					{
						if (dd==b2vec[i].getB2date())
						{
							found=i;
							break;
						}
					}
					for (int i=0;i<b2vec.size();i++)
					{
						if ((found>=0)  && (did==b2vec[i].getB2did()))
						{
							b2vec[found].showBill();
							goto b2label;
						}
						else
						{
							cout<<"Retype Date to search data!!"<<endl;
							goto B2ddsearch;
						}
					}
				}
				break;
				case 6:{
					B2mdsearch:
					cout<<"~~~~~~~~~~~~~~~~~~~~ Search Monthly Bill Slip By Doctor ID ~~~~~~~~~~~~~~~~~~~~\n";
					string m, y; int found=-1, found1=-1, did;
					cout<<"Enter Month to search data:";
					cin>>m;
					cout<<"Enter Year to search data:";
					cin>>y;
					cout<<"Doctor ID list:"<<endl;
					for (int i=0;i<dvec.size();i++)
					{
						cout<<dvec[i].getDid()<<"\t";
					}
					cout<<endl;
					cout<<"Enter Doctor ID: ";
					cin>>did;
					for(int i=0;i<b2vec.size();i++)
					{
						string r=b2vec[i].getB2date();
						int index;
					
						index=r.find(".");
						string dd=r.substr(0,index);
						r=r.substr(index+1,r.length());
					
						index=r.find(".");
						string mm=r.substr(0,index);
						r=r.substr(index+1,r.length());
					
						string yy=r;
					
						if (m==mm)
						{
							found=i;
						}						
						if (y==yy)
						{
							found1=i;
						}
						if ((found>=0) && (found1>=0) && (did==b2vec[i].getB2did()))
						{
							b2vec[found].showBill();
							goto b2label;
						}
						else
						{
							cout<<"Retype Month or Year to search data!!"<<endl;
							goto B2mdsearch;
						}
					}
				}
				break;
				case 7:{
					B2dpsearch:
					cout<<"~~~~~~~~~~~~~~~~~~ Search Daily Bill Slip By Patient Disease ~~~~~~~~~~~~~~~~~~\n";
					string dd, pd; int found=-1;
					cout<<"Enter date to search data:";
					cin>>dd;
					cout<<"Enter Patient Disease name: ";
					cin>>pd;
					for(int i=0;i<b2vec.size();i++)
					{
						if (dd==b2vec[i].getB2date())
						{
							found=i;
							break;
						}
					}
					for (int i=0;i<b2vec.size();i++)
					{
						if ((found>=0)  && (pd==b2vec[i].getB2tpdname()))
						{
							b2vec[found].showBill();
							goto b2label;
						}
						else
						{
							cout<<"Retype Date to search data!!"<<endl;
							goto B2dpsearch;
						}
					}
				}
				break;
				case 8:{
					B2mpsearch:
					cout<<"~~~~~~~~~~~~~~~~~ Search Monthly Bill Slip By Patient Disease ~~~~~~~~~~~~~~~~~\n";
					string m, y, pd; int found=-1, found1=-1;
					cout<<"Enter Month to search data:";
					cin>>m;
					cout<<"Enter Year to search data:";
					cin>>y;
					cout<<"Enter Patient Disease name: ";
					cin>>pd;
					if (b2vec.size()==0)
					{
						cout<<"!!!!!No data in Booking List!!!!";
						goto B2insert;
						cout<<endl;
					}
					else{
						for(int i=0;i<b2vec.size();i++)
						{
							string r=b2vec[i].getB2date();
							int index;
						
							index=r.find(".");
							string dd=r.substr(0,index);
							r=r.substr(index+1,r.length());
					
							index=r.find(".");
							string mm=r.substr(0,index);
							r=r.substr(index+1,r.length());
						
							string yy=r;
							if (m==mm)
							{
								found=i;
							}						
							if (y==yy)
							{
								found1=i;
							}
							if ((found>=0) && (found1>=0) && (pd==b2vec[i].getB2tpdname()))
							{
								b2vec[found].showBill();
							}
							else
							{
								cout<<"Retype Month or Year to search data!!"<<endl;
								goto B2mpsearch;
							}
						}
					}
				}
				break;
				case 9:{
					goto mainlabel;
				}
				break;
				default:{
				cout<<"Wrong bill process number!\n";
				goto b2label;				
				}
				break;
			}
		} //end of  bill
		break;
		case 7:{
			cout<<"###############################################################################\n";
			cout<<"################################## Thank You ##################################\n";
			cout<<"###############################################################################";
			exit(0);
		}//end of  exit
		break;
		default:{
			cout<<"Wrong main process number!\n";
			goto mainlabel;		
		}
		break;
	} //end of main switch
	goto mainlabel;
} //end of program