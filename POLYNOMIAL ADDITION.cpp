#include<stdio.h>
#include<stdlib.h>
struct poly
{
    int coeff;
    int power;
    struct poly*next;
    
}*t1;
struct poly*poly_add(struct poly*poly1,struct poly*poly2);
struct poly*create_node(int co,int po)
{
    struct poly *t1=(struct poly*)malloc(sizeof(struct poly));
    t1->coeff=co;
    t1->power=po;
    t1->next=NULL;
    return t1;
}
struct poly*create_poly(int count,int A_coeff[],int A_power[])
{
    struct poly *t1,*last=NULL,*polylink=NULL;
    int i;
    for(i=0;i<count;i++)
    {
                t1=create_node(A_coeff[i],A_power[i]);
                if(polylink==NULL)
                {
                    polylink=last=t1;
                }
                else
                {
                    last->next=t1;
                    last=last->next;
                }
    }
    return polylink;
}
void display(struct poly*first)
{
    t1=first;
    printf("poly:\n");
    while(t1!=NULL)
    {
        printf("%d %d\n",t1->coeff,t1->power);
        t1=t1->next;
    }
    
}
struct poly*poly_add(struct poly *poly1,struct poly *poly2)
{
    struct poly*p,*q,*t1,*res=NULL,*reslast=NULL;
    p=poly1;
    q=poly2;
    while(1)
    {
        if(p==NULL||q==NULL)
        {
        break;
        }
        if(p->power > q->power)
        {
            t1=create_node(p->coeff,p->power);
            p=p->next;
        }
        else if(p->power < q->power)
        {
            t1=create_node(q->coeff,q->power);
            q=q->next;
            
        }
        else
        {
            t1=create_node(p->coeff + q->coeff,q->power);
            p=p->next;
            q=q->next;
        }
        if(res==NULL)
            {
            res=reslast=t1;
            }
            else
            {
                reslast->next=t1;
                reslast=reslast->next;
            }
    }
            while(p!=NULL)
            {
                t1=create_node(p->coeff,p->power);
                p=p->next;
                if(res==NULL)
                {
                    res=reslast=t1;
                }
                else
                {
                    reslast->next=t1;
                    reslast=reslast->next;
                }
            }
        
            
    
    while(q!=NULL)
    {
                t1=create_node(q->coeff,q->power);
                q=q->next;
                if(res==NULL)
                {
                    res=reslast=t1;
                }
                else
                {
                    reslast->next=t1;
                    reslast=reslast->next;
                }
    }
                return res;
            
}  
int  main()
{
    int c1=5;
    int A_ce1[]={5,4,6,7,8};
    int A_po1[]={6,3,2,1,0};
    int c2=3;
    int A_ce2[]={13,14,16};
    int A_po2[]={4,3,2};
    struct poly *poly1,*poly2,*poly3=NULL;
    poly1=create_poly(c1,A_ce1,A_po1);
    poly2=create_poly(c2,A_ce2,A_po2);
    display(poly1);
    display(poly2);
    poly3=poly_add(poly1,poly2);
    display(poly3);
}

/* OUTPUT
poly:
5 6
4 3
6 2
7 1
8 0
poly:
13 4
14 3
16 2
poly:
5 6
13 4
18 3
22 2
7 1
8 0

--------------------------------
Process exited after 0.1006 seconds with return value 0
Press any key to continue . . .*/


