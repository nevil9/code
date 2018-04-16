
void Book:: update(char* t)  // book title pass karis.
{
    fstream flie;
    file.open("File.dat",ios::in | ios::out | ios::binary | ios::app ); // open file
    file.seekg(0); //to move your pointer to 0th place i.e at begging. to search
    while(!file.eof())
    {
        file.read((char*)this,sizeof(*this));
        if(strcmp(title,t)==0) // to find your record on which you want to perform update.
        {
            GetBookDetails();// taru je fun hoy e call a kari de
            file.seekp(file.tellp()-sizeof(*this)); // aapno pointer next line point karto has eetle ek line pachad java mate. inshort we move back by one obj
            file.write((char*)this,sizeof(*this)); //new record
        }
    }
}
