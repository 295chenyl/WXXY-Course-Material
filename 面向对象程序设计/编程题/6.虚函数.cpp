//�麯������̬�󶨵Ļ�����ʵ�����й����еĶ�̬���Ǿ�̬������Ա
//ʵ�ֶ�̬��̬���ͱ���ʹ�� �麯�� 
//�麯������ֻ�ܳ������ඨ��ĺ���ԭ�������У������ڳ�Ա����ʵ�ֵ�ʱ��
//virtual ���� ������ 
 #include<iostream>
using namespace std;

class base1{
	public:
		virtual void display() const ;		//�����麯��ֻ�ܳ������ඨ��ĺ���ԭ��������
		virtual ~base1();					//�����������������鹹�캯�� 
}; 

void base1::display()  const{			//��Ա����ʵ��
		cout<<"this is base1"<<endl;	//�麯�����������ڳ�Ա����ʵ�ֵ�ʱ��
} 

class base2:public base1{		
	public:
		void display() const {cout<<"this is base2"<<endl;}		//�Զ��жϸ��ǻ�����麯�� 
};

class de:public base2{
	public:
	virtual void display() const {cout<<"this is de"<<endl;}	//���ǻ�����麯�� 
};

void fun(base1 *ptr){
	ptr->display();
}

void fun1(base1 *ptr){
	ptr->base1::display();
}

int main(){
	base1 b1;	//����base1����� 
	base2 b2;
	de d;
	
	fun(&b1);
	fun(&b2);	//��base2����ָ�����fun���� 
	fun(&d);
	
	fun1(&b1);
	fun1(&b2);	
	fun1(&d);
	
	return 0;
}
