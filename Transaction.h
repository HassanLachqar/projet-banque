enum class TypeTransaction{Depot,Retrait,VirementEntrant,VirementSortant};
class Transaction{

    TypeTransaction type;
    double montant;
    int NumeroCompte;
    Transaction(){
        type = TypeTransaction(0);
        montant = 0;
        NumeroCompte = 0;
    }
    double getmontant();
    double setmontant(double montant);

};