 Node* insert(Node *head,int data)
      {
          if(head){
              Node *start = head;

              while(start->next) start = start->next;
              
              start->next = new Node(data);
          }
          else
            head = new Node(data);
          //Complete this method
          /*if(head){
              cout << 'h';
              

              start->next = np;
          }
          else{
              head = np;
          }*/
          return head;
      }
