void write()
		{
			char ch;
			
			fstream f1;
			c.entry();

			
			cout<<"\n";
			f1.open("main.txt",ios::app | ios :: binary | ios ::out);
			cout<<"\n\n\tDO you want to save the record(y/n)-\n";
			cin>>ch;
			if(ch=='y')
			{
			f1.write((char*)&c,sizeof(c));
			}
			f1.close();
		}
 
	  
 
      void read()
		{
			//consumer c;
			ifstream f1;
			//f1.seekg(0, ios::beg);
			f1.open("main.txt", ios::in | ios :: binary);
			//f1.seekg(0, ios::in | ios :: binary);
			while(f1.read((char*)&c,sizeof(c)))
			{
				
			c.display();

			
		
			
			}
				getch();
			f1.close();
		}
 
      
 
      void search()
		{
			//consumer c;
			int rn;
			char found='n';
			ifstream f1;
			f1.open("main.txt",ios ::in | ios ::binary);
			cout<<"\n\n Enter Customer ID you want to SEARCH :";
			cin>>rn;
			//f1.seekg (0, ios::beg);
	    	
			while(f1.read((char*)&c, sizeof(c)))
			{
			
			if(c.rcno()==rn)
				{
				c.display();
				getch();
				found='y';
				
				}
				
			}

			if(found=='n')
			cout<<"\n\n\tRECORD NOT FOUND!!!!!!!!!!!!!\n"<<endl;
			f1.close();
		}
 
      
 
      void del()
		{
			ifstream f1("main.txt",ios::in);
			ofstream f2("temp.txt",ios::out);
			int rno;
			char found='f',confirm='n';
			cout<<"\n\n Enter Customer ID you want to DELETE :\t";
			cin>>rno;
			
			while(!f1.eof())
			{
				f1.read((char*)&c,sizeof(c));
				if(c.rcno()==rno)
				{
					c.display();
					found='t';
					cout<<"\n\n Are you sure want to DELETE this record ? (y/n)\t";
					cin>>confirm;
					if(confirm=='n')
						f2.write((char*)&c,sizeof(c));
				}
				else
					f2.write((char*)&c,sizeof(c));
			}
			if(found=='f')
			cout<<"\n\n\tRECORD NOT FOUND\n";
			f1.close();
			f2.close();
			remove("main.txt");
			rename("temp.txt","main.txt");
			f1.open("main.txt",ios::in);
			system("clear");
			cout<<"\n\n\n Now the file contains\n\n\n";
			while(!f1.eof())
			{
			f1.read((char*)&c,sizeof(c));
			if(f1.eof())
			c.display();
			}
			f1.close();
		}
 
      
 
      void update()
		{
			fstream f1("main.txt",ios::in | ios::out | ios::binary);
			int rno;
			long pos;
			char found='f';
			cout<<"\n\n Enter the Customer ID you want to MODIFY :\t";
			cin>>rno;
			while(!f1.eof())
				{
					pos=f1.tellg();
					f1.read((char*)&c,sizeof(c));
					if(c.rcno()==rno)
						{
							c.entry();
							f1.seekg(pos);
							f1.write((char*)&c,sizeof(c));
							found='t';
							break;
						}
				}
			if(found=='f')
			cout<<"\n\n\tRECORD NOT FOUND\n";
			f1.seekg(0);
			system("clear");
			cout<<"\n Now the file contains\n\n";
			c.display();
			f1.close();
			getch();
		}