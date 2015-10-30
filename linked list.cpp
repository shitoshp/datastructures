#include <iostream>

using namespace std;
struct first{
        int data;
        first* link;
    };

void print_list(first* head1);
void insert(first* head, int num, int position);

int main()
{


    first* n;
    first* head;
    first* temp;

    cout << "init" << endl;

    int i;
    int j[5] = {2, 1, 7, 4 , 9};


    n = new first();
    n -> link = NULL;
    head = n;
    temp = n;
    cout << "Start" << endl;
    bool headfirst = true;
    for (int k = 0; k < 5; k++){
            i = j[k];

            if (headfirst){
                head -> data = i;
                //cout << "LL: " << head -> data;
                headfirst = false;
            }

            else{
                n = new first();
                n -> data = i;
                temp -> link = n;
                temp = n;
            }
    }
    cout << "done" << endl;
    print_list(head);
    cout << endl;
    insert (head, 100, 3);
    print_list(head);

    int x;
    cin >> x;
    return 0;
}

void print_list(first* head1) {
	first* temp = head1;
	cout << head1->data << " ";
	while (temp->link != NULL) {

		temp = temp->link;
		cout << temp->data << " ";

	}
	//cout << endl << endl;
}

void insert(first* head, int num, int position){
    first* n = new first();
    n -> data = num;
    first* temp = head;
    first* next = head;

    for (int i = 0; i < position - 2; i ++){
        temp = temp -> link;
        next = next -> link;
    }
    next = next -> link;
    temp -> link = n;
    n -> link = next;
}

