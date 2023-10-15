#ifndef UKLADROWNAN_H
#define UKLADROWNAN_H

enum TypRozwiazania{
    BrakRozwiazan,
    NieskonczenieWieleRozwiazan,
    JednoRozwiazanie
};
class UkladRownan
{
    public:
        UkladRownan(float a0, float b0, float a1, float b1);
        virtual ~UkladRownan();
        float podajX(){ return x; }
        float podajY() { return y; }
        TypRozwiazania podajTypRozwiazania () { return typRozwiazania; }

    protected:

    private:
        float a0;
        float b0;
        float a1;
        float b1;
        float x;
        float y;
        TypRozwiazania typRozwiazania;
        void Rozwiaz();

};

#endif // UKLADROWNAN_H
