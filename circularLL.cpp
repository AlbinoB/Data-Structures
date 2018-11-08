//circular linklist
#include<iostream>
using namespace std;

	//void delete1(int &h);
	//void bubble(int &n);
	//void linearsearch(int &n);
	//void binarysearch(int &n);
int count1=0;

	class node
	{
	    public:int data;
	    node *next;
	};

    node* delete1(node *last);
    node* insert1(node *last);
	node* insert_position(node *last);
	void display(node *last);

int main()
{

    node *last=NULL;
	int n,c;
    display(last);
	do
	{       cout<<"\n*********************************\n";

		cout<<"\n\n\n enter your choice \n 1:insert. \n 2.insert at a particular position \n 3.delete from a particular postion. \n 4.display sort. \n 0.exit.";
		cin>>c;
		switch(c)
		{
			case 1:{
				last=insert1(last);
				display(last);
				count1++;
				break;
				}
            case 2:{
				last=insert_position(last);
				display(last);
				count1++;
				break;
				}
			case 3:{
				last=delete1(last);
				count1--;
				break;
				}
			case 4:{
				display(last);
				break;
				}
 /*
			case default:{
					cout<<"\n wrong input entered!!!";
					break;
				      }
*/
		}
	    cout<<"\n___________________________________________________\n";
	}while(c!=0 && c<5 && c>0);
	return 0;
}

    void display(node *last)
		{
			if(last==NULL)
            {
                cout<<"\n the link list is empty!!!";
            }else
            {
                node *currnode=last->next;
                do
                {
                    cout<<currnode->data<<"  ";
                    currnode=currnode->next;
                }while(currnode!=last->next);

            }
		}


    node* delete1(node *last)
    { /*
        int value;
        node *temp=last,*nexttemp=temp->next;
        cout<<"\n enter the value to be deleted:";
        cin>>value;
        if(temp->data==value && temp==last)
        {
            last=last->next;
        }
        else
        {
            while(temp->next!=NULL && temp->next->data!=value)
                {
                    temp=temp->next;
                }

            if(temp->next!=NULL)
                {
                    temp->next=temp->next->next;

                }
            else
                {
                    cout<<"\n the value is not found!!!";

                }
        }
        */
        return last;
    }

	node* insert1(node *last)
	{
        if(last==NULL)
        {
            node *a;
            a=new(node);
            cout<<"\n enter the value:";
			cin>>a->data;
			a->next=a;
			last=a;
        }else
        {
            node *a;
            a=new(node);
            cout<<"\n enter the value:";
			cin>>a->data;
			a->next=last->next;
			last->next=a;
        }
            return last;
	}

   node* insert_position(node *last){
         int pos;
        node *temp=last->next;
        cout<<"\n enter the position to be inserted:";
        cin>>pos;
            node *a;
            a=new(node);
            cout<<"\n enter the value:";
			cin>>a->data;
			a->next=NULL;
        if(pos==1)
        {
            a->next=last->next;
			last->next=a;

        }else
            {
                if(pos<=count1+1){

                for(int i=1;i<pos-1;i++)
                {
                    temp=temp->next;
                }
                if(pos==count1+1)
                {
                      a->next=last->next;
                      temp->next=a;
                      last=a;

                }
                else {

                      a->next=temp->next;
                      temp->next=a;
                    }
                }
                else{


                    cout<<"\n position out of bound!!!";

                }
            }

        return last;
    }
