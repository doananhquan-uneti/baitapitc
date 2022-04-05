#include <iostream.h>
	struct ngaysinh{
		int ngay ,thang,nam;
	}ns;
	class khachhang{
		private:
			char ht[30];
			char cmt[10];
			char hokhau[50];
			int tuoi;
			ngaysinh ngay;
		public:
			friend istream& operator >>(istream& is, khachhang &a)
				{
					cout<<" \n nhap ho ten khach hang: ";
					is.getline(a.ht , 30);
					cout<<" \n nhap cmt: ";
					is.getline(a.cmt, 10);
					cout<<" \n nhap ho khau: ";
					is.getline(a.hokhau, 50);
					cout<<" \n nhap ngay sinh ";
					is>>ns.ngay;
					cout<<" \n nhap thang: ";
					is>>ns.thang;
					cout<<" \n nhap nam: ";
					is>>ns.nam;
					cout<<" \n tuoi: ";
					is>>a.tuoi;
			}
			friend ostream& operator <<(ostream& os, khachhang &a)
			{
				os<<" \n ho ten khach hang "<<a.ht<<endl;
				os<<" \n cmt khach hang "<<a.cmt<<endl;
				os<<" \n ho khau khach hang "<<a.hokhau<<endl;
				os<<" \n ngay sinh "<<ns.ngay<<endl;
				os<<" \n thang sinh "<<ns.thang<<endl;
				os<<" \n nam sinh "<<ns.nam<<endl;
				os<<" \n tuoi "<<a.tuoi<<endl;
			}
			int old(){
				return tuoi;
			}
			char *nhao(){
				return hokhau;
			}
			
				
	};
int main(int argc, char *argv[])
{
	khachhang client[100];
	int n;
	cout<<" \n Nhap so luong khach hang: ";
	cin>>n;
	for( int i =0; i < n; i++)
	{
		cout<<" \n khach hang thu "<<i+1<<endl;
		fflush(stdin);
		cin>>client[i];
	}
	cout<<" Danh sach da xuat!!!! "<<endl;
	for( int i=0; i < n; i++)
	{
		cout<<" khach hang thu "<<i+1<<endl;
		cout<<client[i];
	}
	cout<<" danh sach khach hang sau khi da sap xep!!!!!!!!!! "<<endl;
	for( int i =0; i < n; i++)
	{
		khachhang temp;
		for( int j=i+1; j < n ;j++)
		{
			if(client[i].old() > client[j].old())
			{
				temp=client[i];
				client[i]=client[j];
				client[j]=temp;
			}
		}
		cout<<client[i];
	}
	cout<<" "
	for(int i=0; i < n; i++)
	{
		if(strcmpi(client[i].nhao(),"ha noi")==0)
		{
			cout<<client[i];
		}
	}
	return 0;
}