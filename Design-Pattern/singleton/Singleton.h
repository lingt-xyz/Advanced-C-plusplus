#ifndef SINGLETON_H
#define SINGLETON_H


class Singleton {
public:
    static Singleton &instance();

    void fun();

protected:
private:
    int uid;
    static Singleton *pInstance;

    Singleton();

    Singleton(const Singleton &);

    Singleton &operator=(const Singleton &);

    ~Singleton();
};

#endif // SINGLETON_H
