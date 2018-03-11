#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
	node *prev;
};

node* insert(node *s,int x)
{
	node *temp=new node();
	temp->next = NULL;
	temp->prev = NULL;
	temp->data=x;
	if(s==NULL)
		return temp;
	else
	{
		node *t=s;
		while(t->next!=NULL)
			t=t->next;
		t->next=temp;
		temp->prev=t;
		return s;
	}
}

void print(node *a,node *b)
{
	node *t1,*t2;
	t1=a;
	t2=b;
	if(t1==NULL && t2==NULL)
	{
		cout<<"Both lists are empty\n";
		return;
	}
	if(t1==NULL || t2==NULL)
	{
		if(t2==NULL)
		{
			cout<<"List B is empty\n";
			cout<<"List A is:-\n";
			while(t1!=NULL)
			{
				cout<<t1->data<<" ";
				t1=t1->next;
			}
			cout<<"\n";
		}
		else
		{
			cout<<"List A is empty\n";
			cout<<"List B is:-\n";
			while(t2!=NULL)
			{
				cout<<t2->data<<" ";
				t2=t2->next;
			}
			cout<<"\n";
		}
		return;
	}
	while(t1->next!=NULL)
		t1=t1->next;
	while(t2->next!=NULL)
		t2=t2->next;
	if(t1!=t2)
	{
		cout<<"Both list are not merged at all\n";
		t1=a;
		t2=b;
		cout<<"List A is:-\n";
		while(t1!=NULL)
		{
			cout<<t1->data<<" ";
			t1=t1->next;
		}
		cout<<"\n";
		cout<<"List B is:-\n";
		while(t2!=NULL)
		{
			cout<<t2->data<<" ";
			t2=t2->next;
		}
		cout<<"\n";
	}
	else
	{
		t1=a;
		while(t1!=NULL)
		{
			t2=b;
			while(t2!=NULL)
			{
				if(t1==t2)
					break;
				t2=t2->next;
			}
			if(t2!=NULL)
				break;
			t1=t1->next;
		}
		cout<<"List A before merging is:-\n";
		t2=a;
		while(t2!=t1)
		{
			cout<<t2->data<<" ";
			t2=t2->next;
		}
		cout<<"\n";
		cout<<"List B before merging is:-\n";
		t2=b;
		while(t2!=t1)
		{
			cout<<t2->data<<" ";
			t2=t2->next;
		}
		cout<<"\n";
		cout<<"Merged list is:-\n";
		while(t1!=NULL)
		{
			cout<<t1->data<<" ";
			t1=t1->next;
		}
		cout<<"\n";
	}
}

int main()
{
	node *a=NULL,*b=NULL;
	int n,i,j,d,flag=0;
	pair <node*,node*> r;
	cout<<"Enter number of nodes you want to insert\n";
	cin>>n;
	cout<<"Enter 0 to merge two lists\n1 to insert in A\n2 to insert in B\n";
	for(i=0;i<n;i++)
	{
		if(flag==0)
		{
			cout<<"Enter choice and and data for "<<i+1<<" node\n";
			cin>>j>>d;
			if(j==0)
			{
				flag=1;
				node *t1=a,*t2=b;
				node *temp=new node();
				temp->data=d;
				temp->next=NULL;
				temp->prev=NULL;
				if(t1==NULL)
					a=temp;
				else
				{
					while(t1->next!=NULL)
						t1=t1->next;
					t1->next=temp;
					temp->prev=t1;
				}
				if(t2==NULL)
					b=temp;
				else
				{
					while(t2->next!=NULL)
						t2=t2->next;
					t2->next=temp;
				}
			}
			else if(j==1)
				a=insert(a,d);
			else if(j==2)
				b=insert(b,d);
		}
		else
		{
			cout<<"Enter only data for "<<i+1<<" node\n";
			cin>>d;
			a=insert(a,d);
		}
	}
	cout<<"\n";
	print(a,b);
	return 0;
}
