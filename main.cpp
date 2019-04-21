  #include<stdio.h>
	     #include<stdlib.h>
 	    #define N sizeof(Node)

 	    struct Node
 	    {
	         int date;
 	        Node*next;
 	    };

 	     Node*create()
	     {
 	         Node*head,*p,*pre;
 	        int n;
 	         head=p=pre=NULL;
 	         n=0;

 	         scanf("%d",&n);
 	         while(n!=-1)
 	        {
 	             p=(Node*)malloc(N);
 	             if(head==NULL)
	            {
 	                 head=p;
 	            }
	             else
	             {
	                 pre->next=p;
	        }
 	            p->date=n;
	             p->next=NULL;
	             pre=p;
 	             scanf("%d",&n);
 	        }
	         return head;
 	     }

 	    Node* fun(Node* head)
 	     {
	         Node* p,*pre;
 	        int a,b;
 	         p=pre=head;
 	         a=b=0;

	        scanf("%d%d",&a,&b);
 	         while(p)
 	    {
 	             if(p->date>a&&p->date<b)
 	            {
	                 if(p==head)
	                {
	                    head=pre=p->next;
	            }
                 else
 	                 {
 	                    pre->next=p->next;
 	                }
 	                free(p);

	                if(pre!=NULL)
	                   {
	                      p=pre->next;
 	                   }
	                 else
 	                    {
 	                        break;
 	                    }
	             }

 	            else
	             {
	                pre=p;
 	                p=p->next;
 	            }

	        }

 	         return head;
 	     }

 	    void display(Node* head)
 	     {
	        Node* p;
 	         p=head;

 	         while(p)
	        {
 	            printf("%d ",p->date);
 	            p=p->next;
 	        }
 	    }

	 int main()
 	{
 	         Node* p;
 	         p=create();
 	         p=fun(p);
 	        display(p);

 	         return 0;
 	}
