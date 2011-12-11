// taken from (3rd approach): http://de.wikipedia.org/wiki/Singleton_(Entwurfsmuster)#Implementierung_in_C.2B.2B
#ifndef __Singleton__H__
#define __Singleton__H__

template <class T_DERIVED>
class Singleton
{
public:
    static T_DERIVED& getInstance()
    {
        static T_DERIVED oInstance ;
        return oInstance ;
    }

protected:
    Singleton(){}

private:
    Singleton( const Singleton& ) ;
    Singleton& operator=( const Singleton& ) {return *this;}
};

// Usage:
/*
class MySingleton : public Singleton< MySingleton >
{
    friend class Singleton< MySingleton >;

private:
    MySingleton();
};
*/
#endif
