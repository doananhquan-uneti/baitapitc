#include <iostream.h>
#include <iomanip.h>
	class GiaoVien{
		private:
		char hoten[30], bc[15], cnganh[20];
		int t;
		float bluong, luong;
		public:
		void nhap(){
			cout<<"nhap danh sach giao vien "<<endl;
			cout<<" nhap ho ten: ";
			cin.getline(hoten, 30);
			cout<<"\n nhap bang cap: ";
			cin.getline(bc, 15);
			cout<<"\n nhap chuyen nganh: ";
			cin.getline(cnganh, 20);
			cout<<"\n nhap tuoi: ";
			cin>>t;
			cout<<"\n nhap bac luong: ";
			cin>>bluong;
		}
		void lcb(){
			luong= bluong*610;
		}
		void tieude(){
			cout<<setw(9)<<" ho ten "
				<<setw(12)<<" bang cap "
				<<setw(15)<<" chuyen nganh"
				<<setw(7)<<" tuoi "
				<<setw(12)<<" bac luong "
				<<setw(10)<<" luong "<<endl;
		}
		char *chuyennganh(){
			return cnganh;
		}
		void xuat(){
			cout<<setw(9)<<hoten
				<<setw(12)<<bc
				<<setw(15)<<cnganh
				<<setw(7)<<t
				<<setw(12)<<bluong
				<<setw(10)<<luong<<endl;
		}
		void luongnhohon2000(){
			if( luong < 2000 )
			{
				xuat();
			}
		}
		
	};
int main(int argc, char *argv[])
{
	GiaoVien a[100];
	int n;
	do{
	cout<<" nhap so luong giao vien: ";
	cin>>n;
	if ( n < 0 )
	{
		cout<< " nhap lai!! "<<endl;
	}
	}while(n < 0);
	for(int i = 0; i < n; i++)
	{
		fflush(stdin);
		cout<<" giao vien thu: "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"\n xuat danh sach giao vien!! "<<endl;
	a->tieude();
	for(int i=0; i < n; i++)
	{
		a[i].lcb();
		a[i].xuat();
	}
	cout<< "\n danh sach giao vien luong nho hon 2000!! "<<endl;
	a->tieude();
	for(int i=0; i < n; i++)
	{
		a[i].luongnhohon2000();
	}
	cout<<" \n\nsap xep "<<endl;
	for(int i=0; i < n; i++)
	{
		for( int j=i+1 ; j < n; j++)
		{
			GiaoVien temp;
			if(strcmpi(a[i].chuyennganh(), a[j].chuyennganh()) > 0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		a[i].xuat();
	}	


	return 0;
}