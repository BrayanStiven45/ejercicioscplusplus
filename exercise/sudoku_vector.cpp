#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class sudoku{
    private: 
        vector<vector<vector<int>>> tablero;
    public:
    sudoku(vector<vector<vector<int>>>& p){
        tablero = p;
    }

    // muestra el vector sudoku
    void print_tablero(){
        for(int r = 0; r < tablero.size(); r++){
            for(vector<int>& apo : tablero[r]){
                cout<< apo[0]<<" ";
            }
            cout<<endl;
        }
    }

    //busca por filas si el numero i y verifica si ya esta
    bool search_rows(vector<vector<int>>& vec_row, int i){
        for(int r = 0; r < vec_row.size(); r++){
            if(vec_row[r][0] == i){
            return true;
            }
        }
        return false;
    }

    //busca por columnas el numero i y verifica si ya esta
    bool search_column(vector<vector<vector<int>>>& copia, int colu, int i){
        for(int r = 0; r < copia.size(); r++){
            if(copia.at(r).at(colu).at(0) == i){
            return true;
            }
        }
        return false;
    }

    //busca por divisiones de cuadros el numero (num) si ya esta en la division de cuadros
    bool search_squal(unsigned int i,unsigned const int j,const int num,const vector<vector<vector<int>>>& copia){
        int tam = sqrt(copia.size());
        for(int counter_i=0; counter_i < tam;counter_i++){
            for(int counter_j=0; counter_j < tam;counter_j++){
                if(copia[i + counter_i][j + counter_j][0] == num){
                    return true;
                }
            }
        }
        return false;
    }

    // llena el vector posible con los numeros que se pueden en esa posicion( el tercer vector del vector tablero)
    bool fill_posible(vector<vector<vector<int>>>& copia, const unsigned int row,const unsigned int colu){
        int tam = sqrt(copia.size());
        int pos_i = row/tam;
        int pos_j = colu/tam;
        for(int i = 1; i <= 9; i++){
            if(!search_rows(copia[row], i)){
                if(!search_column(copia, colu, i)){
                    if(!search_squal(pos_i*tam,pos_j*tam,i,copia)){
                        copia.at(row).at(colu).push_back(i);
                    }
                }
            }
        }
        return false;
    }


    //busco las poscisiones vacias del vector tablero
    void num_possible(vector<vector<vector<int>>>& copia){
        for(int r = 0; r < copia.size(); r++){
            for(int c = 0; c < copia[r].size();c++){
                if(copia.at(r).at(c).at(0) == 0){
                    fill_posible(copia, r, c);
                }
            }
        }
    }

    //Vacia el vector posible
    void empty_possible(vector<vector<vector<int>>>& copia){
        for(unsigned int row = 0; row < copia.size(); row++){
            for(unsigned int column = 0; column < copia.size(); column++){
                if(copia.at(row).at(column).at(0) == 0){
                    copia.at(row).at(column).clear();
                    copia.at(row).at(column).push_back(0);
                }
            }
        }
    }
    //Busca en los vectores possible los que tengan un size de 2 si es verdad, coloca el numero
    // de la posicion 1 en la poscion 0.
    void put_number(vector<vector<vector<int>>>& copia){
        for(unsigned int row = 0; row < copia.size(); row++){
            for(unsigned int column = 0; column < copia.size(); column++){
                if(copia.at(row).at(column).size() == 2){
                    int apo = copia.at(row).at(column).at(1); 
                    copia.at(row).at(column).clear();
                    copia.at(row).at(column).push_back(apo);
                }
            }
        }
    }

    //Busca un numero en un vector
    bool search_vector(const vector<int>& n, int num){
        for(unsigned int i = 0; i < n.size();i++){
            if(n.at(i) == num){
                return true;
            }
        }
        return false;
    }

    // Busca la veces en que se repite un numero en una divicion de cuadricula del tablero, 
    //si el numero se repite solo una veces y coloca el numero en la celda en la que se repite
    void put_number_only(unsigned int row,unsigned const int column,const int num,vector<vector<vector<int>>>& copia){
        int tam = sqrt(copia.size());
        int apo,i,j;
        int cont = 0;
        for(int counter_row = 0; counter_row < tam; row++,counter_row++){
            apo = column;
            for(int counter_column=0; counter_column < tam; apo++,counter_column++){
                if(search_vector(copia.at(row).at(apo),num)){
                    cont++;
                    i = row;
                    j = apo;
                }
            }
        }

        if(cont == 1){
            copia.at(i).at(j).clear();
            copia.at(i).at(j).push_back(num);
        }
    }

    bool verify_posible_empty(vector<vector<vector<int>>>& copia){
        for(unsigned int row = 0; row < copia.size();row++){
            for(unsigned int column = 0; column < copia.size();column++){
                if(copia.at(row).at(column).at(0) == 0){
                    if(copia.at(row).at(column).size() == 1){
                        return true;
                    }
                } 
            }
        }
        return false;
    }

    bool verify_complete(vector<vector<vector<int>>>& copia){
        for(unsigned int row = 0; row < copia.size();row++){
            for(unsigned int column = 0; column < copia.size();column++){
                if(copia.at(row).at(column).at(0) == 0){
                    return true;
                } 
            }
        }
        return false;
    }

    //Resuslve el tablero
    int solve_1(vector<vector<vector<int>>> copia){
        empty_possible(copia);
        num_possible(copia);
        
        int size = sqrt(copia.size());
        for(unsigned int row = 0; row < copia.size();row){
            for(unsigned int column = 0; column < copia.size();column){
                for(unsigned int num = 1; num <= 9; num++){
                    put_number_only(row,column,num,copia);
                }
                column = column + size;
            }
            row = row + size;
        }
        
        empty_possible(copia);
        num_possible(copia);

        if(verify_posible_empty(copia)){
            return 0;
        }

        if(!verify_complete(copia)){
            tablero = copia;
            return 1;
        }

        for(unsigned int row = 0; row < copia.size();row++){
            for(unsigned int column = 0; column < copia.size();column++){
                if(copia.at(row).at(column).at(0) == 0){
                    vector<int> posible = copia.at(row).at(column);
                    for(unsigned k = 1; k < posible.size(); k++){
                        copia.at(row).at(column).clear();
                        copia.at(row).at(column).push_back(posible.at(k));
                        if(solve_1(copia) == 1){
                            return 1;
                        }
                    }
                    return 0;
                }
            }
        }
        return 0;
    }

    void solve(){
        cout<<"Sudoku propuesto: "<<endl;
        print_tablero();
        solve_1(tablero);
        cout<<endl<<"Sudoku Resuelto: "<<endl;
        print_tablero();
    }
};



int main(){

    vector<vector<vector<int>>> p{
                        {{8},{3},{0},{2},{0},{0},{0},{4},{1}},
                        {{7},{0},{0},{0},{0},{0},{0},{0},{0}},
                        {{0},{0},{0},{0},{0},{9},{0},{0},{2}},
                        {{0},{0},{9},{0},{0},{0},{0},{1},{0}},
                        {{3},{1},{0},{0},{0},{5},{8},{0},{0}},
                        {{0},{0},{7},{3},{0},{0},{0},{0},{0}},
                        {{0},{0},{1},{0},{0},{0},{0},{0},{0}},
                        {{0},{0},{0},{0},{6},{0},{5},{0},{0}},
                        {{2},{4},{0},{9},{0},{0},{0},{8},{0}},
    };
    sudoku s(p);
    s.solve();
    return 0;
}