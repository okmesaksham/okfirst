int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    if(n==1)
    {
        cout<<"one";
    }
    else if(n==2)
    {
        cout<<"two";
    }
    else if(n==3)
    {
        cout<<"three";    
    }
    else if(n==4)
    {
        cout<<"four";
    }
    else if(n==5)
    {
        cout<<"five";
    }
    else if(n==6)
    {
        cout<<"six";
    }
    else if(n==7)
    {
        cout<<"seven";
    }
    else if(n==8)
    {
        cout<<"eight";
    }
    else if(n==9)
    {
        cout<<"nine";
    }
    if(n<9){
        cout<<"Greater than 9";
    }
    return 0;
}
