
#include <iostream>
using namespace std;

// membuat struktur untuk object double Linkedlist
struct Node
{
    // deklarasi noMhs dan name untuk menampung data
    int noMhs; 
    string name;
    // deklarasi pointer next dan pref untuk penunjukan data sebelum dan sesudah
    Node *next;
    Node *prev;

};

// deklarasi pointer START dan pemberian nilai
Node *START = NULL;
void addNode()
{

    // pembuatan node dan pemberian value untuk data noMhs dan name 
    None * newNode = new Node(); // step 1 buat Node baru
    cout << "\nEnter the roll number of the student: ";
    cin >> newEnter->noMhs; // Assign value to the data fiel of the new node
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name; // Assign value to the data fiel of the

    // insert the new node in the list
    // kondisi jika star == null atau noMhs node baru <= noMhs start
    if (START == NULL || newNode->noMhs <= START->noMhs)
    {
        //step 2: insert the new node at the begining
        // kondisi jika star tidak ksong dan noMHs node baru sama dengan noMhs
        if (START != NULL &&newNode->noMhs == START->noMhs)
        {
            cout << "\033[31mDuplicate roll numbers not allowed \033[0m" << endl;]]
            return;

        }
        //if the list empty, make the new node the START
        // jika list kosong, maka node next nya adalah START
        newNode->next = START; // step 3; make the new node point the frst node 
        if (START != NULL)
    {
         START->prev = newNode; // step 4: make the first node point to the new node
    }
         // memberikan nilai prev = null dan start = node baru 
        newNode->prev = NULL; // STEP 5: make the node point to NULL
         START = newNode; 
    }
        // kondisi jika semua kondisi if tidak terpenuhi 
        else
    {
        // insert the new node in the middle of at the end
        // set nilai current = start dan nilai previous = null 
        Node *current = START; // step 1.a: start from the first node 
        Node *previous = NULL; // step 1.b: previous node is null initially
        
        //looping selama current != null dan noMhs danri current lebih kecil dan tidak sama dengan noMhs no baru
        while (current != NULL && current->noMhs < newNode->noMhs)
        {                       // step 1.c: traverse the list to the list
            previous = current; // step 1.d: move the previous to the current
            current = current->next; // step 1.e: move the current to the next node
        }
        // kondisi jika current tidak sama dengan null 
        if (current != NULL)
        {
            current->prev = newNode; // step 6: make the previous of the current
        }
        // kondisi jika if previous sama dengan null 
        else
        {
            // if previous if still NULL, if means newNode is now first node
            START = newNode;
        }

    }



}

// pembuatanfunction untuk mencari data
bool search(int rollNo, Node **previous, Node **current)
{
    *previous = NULL;
    *current = START;
    while (*current != NULL && (*current)->noMhs < rollNo)
    {
        *previous = *current; 
        *current = (*current)->next; 
    }
    return (*current !=NULL);

}

// pembuatan prosedur delete untuk menghapus data
void deleteNode()
{
    int rollNo;
    cout << "\nEnter the roll number of the student to delete: ";
    cin << rollNo; // step 3: get the roll number to be deleted

    if (START == NULL)
    {
        cout << "List if empty" << endl;
        return;
    }

    current = START; // step 1: set current to the first node
    previous = NULL;

}

// locate the node to be deleted
while (current != NULL && current->noMhs < rollNo)
{
    previous = current; 
    current = current->next; 
}

if (current ==NULL)
{
    cout << "\033[31mThe record with roll number " << rollNo << " not found\033[0m" << endl;
    return;
}

//node to be deleted is the first node
if (current == START)

{
    START = START->next; // step 2: udate the START pointer 
    if (START != NULL)
    {
        START->prev = NULL; 
    }
}
else
{
    // node to be deleted is not the first node
    previous->next = current->next; 
    if (current->next != NULL)
    { // if there's a successor, udate its previous pointer
        current->next->prev = previous; 
    }
}
{
// release the memory of the deleted node marked as current
delete current; 
cout << "\x1b[32mRecord with roll number " << rollNo << " deleted \x1b[0m" << endl;
}

// method untuk mengecek apakah list kosong
bool isEmpty()
{
    return START == NULL; 
}

// prosedur trverse untuk menampilkan data secara urut
void traverse()
{
    if (isEmpty())
    
        cout << "\nList is empty" << endl;
        else
    {
        cout << "\nRecords in desceding order of roll number are: " << endl;
        Node *currentNode = START; 
        while (currentNode != NULL)
          currentNode = currentNode->next; 
        {
            cout << currentNode->noMhs << " " << currentNode->name << endl; 
            currentNode = currentNode->prev; 
        }
    }

}

// prosedur untuk menampilkan data dan menampilkan data yang dicari jika ada
void searchNode()
{
    if (listEmpaty())
    {
        cout << "\nList is empty" << endl;
    }
    Node *prev, *curr;
    prev = curr = NULL;
    cout << "\nEnter the roll number of the student whose reord you want to search: ";
    int num;
    cin >> num;
    if(search(num, &prev, &curr))
    cout << "\nRecord not found" << endl;
else 

    {
        cout << "\nRecord found: " << endl;
        cout << "\nRoll number: " << curr->noMhs << endl;
        cout << "\nName: " << curr->name << endl;
    }
    
}