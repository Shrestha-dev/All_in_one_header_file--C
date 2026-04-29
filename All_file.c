/*-------------------------------------------------------------------
All in one header file
 it has seft made replica of various built in libraries
Here you will get libraries of string.h , math.h and ctype.h
----------------------------------------------------------------------*/

//self constructed built in libraries of string.h

static int stlen(char ch[])       // to get length of string
{
    int i=0;
    while(!(ch[i] == '\0'))
    {
        i++;
    }
    return i;
}

static int stcomp (char x[],  char y[])        // to compare two strings
{
    int i = 0;
    while(!(x[i] == '\0') && !(y[i] == '\0'))
    {
        if(x[i] !=  y[i])
        {
            x[i] - y[i];
        }
        i++;
    }
    return x[i] -y[i];
}

static void stcat (char a[], char b[])       // to concatinate two string
{
    int i = 0,j = 0;
    while((a[i] != '\0'))
    {
        i++;
    }
    while((b[j] != '\0'))
    {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
}

static void stcopy (char b[], char a[])         // to copy one string to another
{
    int i = 0;
    while(a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] ='\0';
}

static stchr (char a[], char x)              // to check character availability in the users string 
{
    int i = 0;
    while(a[i] != '\0')
    {
        if(a[i] == x)
        {
            return 1;
        }
        i++;
    }
    return 0;
}



// self constructed built in libraries of ctype.h

static  char alpha( char x)    // to check alphabet
{
    return ((x >= 'a' || x <= 'z') && (x >= 'A' || x <= 'Z'));
} 

static char spch (char x)      // to chech special character
{
    return (!(x >= 'a' || x <= 'z') || !(x >= 'A' || x <= 'Z') || !(x >= '0' && x <= '9'));
}

static int digit (int x)       // to check digit
{
    return (x >= '0' && x <= '9');
}

static char upcalpha (char x)   // to check uppercase
{
    return (x >= 'A' || x <= 'Z');
}

static char lowcalpha (char x)  // to check lowercase
{
    return (x >= 'a' || x <= 'z');
}

static char space (char x)     // to chech whitespace
{
    return (x == ' ');
}

/*static char lowc_upc (char x)     // to chnage from lower to uppercase
{
    return ( );
}
    
static char upc_lowc (char x)     // to chnage from uppercase to uppercase
{
    return ( );
}*/





