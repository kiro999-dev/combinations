#include <unistd.h>
void print_nbr(int n)
{
    char c=n+'0';
    write(1,&c,1);

}
void print_sperator()
{
    write(1," ,",2);
}
void generat_combo(int n,int start,int index,int buffer[n])
{
if (n==index)
{
    int i=0;
    while (i<index)
    {
        print_nbr(buffer[i]);
        i++;
    }
    if (buffer[0]!=10-n)
    {
        print_sperator();
    }
    
    return;
}

    int  i=start;
    while (i<=9)
    {
       buffer[index]=i;
       generat_combo(n,i+1,index+1,buffer);
       i++;
    }

}

void ft_print_combn(int n)
{
    int buffer[n];
    generat_combo(n,0,0,buffer);

}
int main() {
    ft_print_combn(2); 
    return 0;
}

