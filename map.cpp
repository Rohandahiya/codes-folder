    #include<iostream>
    #include<map>

    using namespace std;

    int main()
    {
    map <string,int> m;

    m["Mango"]= 456;

    m.insert(make_pair("Apple",120));

    if(m.count("Apple")==1)
    {
        cout<<"Price of Apple is"<<m["Apple"];
    }

return 0;
}
