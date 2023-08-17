#define MAXSIZE 100
using namespace std;

int b[MAXSIZE];
int n;
void trav_forward();
void create_array();
void trav_backward();
void insert_last(int);
void insert_beginning(int);
void insert_specific(int);
void insert_at_given_position();
void deletion_last();
void delete_beginning();

void create_array()
{
    cout<<"eneter the size of the array:\t";
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>b[i];
}
void trav_forward()
{
    cout<<"the elements are : "<<endl;
    for(int i=0; i<n; i++)
    cout<<b[i]<<endl;
}

void trav_backward(){
    cout<<"the element in the backward order: "<<endl;
    for(int i=n-1; i>=0; i--)
    cout<<b[i]<<endl;
}

void insert_last(int x)
{
    cout<<"\nafter the insertion in the last "<<endl;
    b[n]=x;
    n++;
}

void insert_beginning(int y)
{
    cout<<"after the insertion in the beginning: ";
    for (int i=n-1; i>=0; i--)
    b[i+1]=b[i];
    b[0]=y;
    n++;
}


void insert_at_given_position()
{
	int p,d;
	cout<<"enter position :";
	
}

void deletion_last()
{
	for int i
}
int main()
{
    int p;
    create_array();
    trav_forward();
    trav_backward();
    insert_last(6);
    trav_forward();
    cout<<"enter the biginning element  "<<endl;
    cin>>p;
    insert_beginning(p);
    trav_forward();
}
