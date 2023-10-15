#ifndef TROJKAT_H
#define TROJKAT_H


class Trojkat
{
    public:
        Trojkat(float a, float b, float c);
        Trojkat(float a, float h);
        float podajPole(){ return pole; }
        virtual ~Trojkat();

    protected:

    private:
        float pole;
};

#endif // TROJKAT_H
