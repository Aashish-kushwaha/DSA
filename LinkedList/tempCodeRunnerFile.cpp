node  *reversedl(node *h)
// {
//      if(h==NULL||h->next==NULL)
//      {
//         return h;
//      }

//      node *pre=NULL,*curr=h;
//      while(curr!=NULL)
//      {
//         pre=curr->prev;
//         curr->prev=curr->next;
//         curr->next=pre;
//         curr=curr->prev;

//      }
//      return pre->prev;
// }