class consumer
	{
			int cno;
			
			long long int a,b,c;
			long long int i;
			public:
	 		string  cname;
			string adress;
     
 		
			public:
 
     		void entry()
		
			  	{
					cout<<"\t ****TECH-TRADERS*****\n";

					cout<<"Customer ID :\n";

					cout<<"Customer name :\n";

					cout<<"Customer adress :\n";

					cout<<"Customer Service number :\n";

					cout<<"Costumer Smart card number :\n";

					cout<<"Costumer Phone number :\n";

					cout<<"Customer Bill number :\n";

					cin>>cno;

					cin>>cname;
					

					cin>>adress;
					

					cin>>a;

					cin>>b;

					cin>>c;

					cin>>i;
				}

      
 
	    	void display()
			    {
				    cout<<"\n\n";
				    
				    cout<<"Customer ID :";
				    cout<<cno<<"\n";
				    cout<<"i am here-\n";
				    cout<<"Customer name :";
				    //puts(cname);
				    cout<<cname<<"\n";
				    cout<<"Customer adress :"<<adress<<"\n";
				    
				    cout<<"Customer Service number :" <<a<<"\n";
				    
				    cout<<"Costumer Smart card number :"<<b<<"\n";
				    
				    cout<<"Costumer Phone number :"<<c<<"\n";
				    
				    cout<<"Customer Bill number :"<<i<<"\n";
			    }


			int rcno()
				{
					return cno;
					//dgrgd
					//sdgsg/\
					//sdgdsg/
				}


     		void printname()
				{
					cout<<cname;
					//dgrgd
					//sdgsg/\
					//sdgdsg/

				}


			void printadd()
				{
				cout<<adress;
				}
	}c;