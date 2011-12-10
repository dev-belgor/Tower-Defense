// taken from (3rd approach): http://de.wikipedia.org/wiki/Singleton_(Entwurfsmuster)#Implementierung_in_C.2B.2B
template <class T_DERIVED>
class singleton
{
public:
    static T_DERIVED& get_instance()
    {
        static T_DERIVED oInstance ;
        return oInstance ;
    }

protected:
    singleton(){}

private:
    singleton( const singleton& ) ;
    singleton& operator=( const singleton& ) {return *this;}
};

// Usage:
/*
class my_singleton : public singleton< my_singleton >
{
    friend class singleton< my_singleton >;

private:
    my_singleton(){}
};
*/
