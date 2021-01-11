using namespace std;
class Lista{
    private:
        Node *Position;
    public:
        Lista();
        bool TaVazia();
        void AddDepoisPosition(int i);
        void AddAntesPosition(int i);
        void DeletaDepois();
        void DeletaAntes();
        int GetValue();
        void MovePositionProxPos();
        void MovePositionAntesPos();
        int BuscaValor(int value);
};
