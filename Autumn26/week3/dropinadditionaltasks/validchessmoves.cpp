#include <iostream>
#include <string>

int main(){

    //piece to move
    std::string piece_input;

    std::cout << "what piece do you want to move\n";
    std::cin >> piece_input;
    

    if(piece_input == "knight"){
        int source_x, source_y, dest_x, dest_y;

        std::cout << "type the source square of the knight in the format x y\n";
        std::cin >> source_x >> source_y;

        std::cout << "type the destination square of the knight in the format x y\n";
        std::cin >> dest_x >> dest_y;

        //checks if modulus of difference between one axis of source square and destination
        //square is 2, and if the modulus on the other axis is one
        if((((source_x - dest_x == 2) || (source_x - dest_x == -2)) && ((source_y - dest_y == 1) || (source_y - dest_y == -1))) || (((source_x - dest_x == 1) || (source_x - dest_x == -1)) && ((source_y - dest_y == 2) || (source_y - dest_y == -2)))){
            if((dest_x <= 8) && (dest_x >= 1) && (dest_y <= 8) && (dest_y >= 1)){
                std::cout << "valid move\n";

            }

            else{
                std::cout << "invalid move\n";

            }
        }

        else{
            std::cout << "invalid move\n";
            
        }
    
    }

    else if(piece_input == "bishop"){
        int source_x, source_y, dest_x, dest_y;

        std::cout << "type the source square of the bishop in the format x y\n";
        std::cin >> source_x >> source_y;

        std::cout << "type the destination square of the bishop in the format x y\n";
        std::cin >> dest_x >> dest_y;

        //a move made along the diagonal has equivalent differences between the source and destination on both axes
        if(dest_x - source_x == dest_y - source_y){
            if((dest_x <= 8) && (dest_x >= 1) && (dest_y <= 8) && (dest_y >= 1)){
                std::cout << "valid move\n";

            }

            else{
                std::cout << "invalid move\n";

            }
        }

        else{
            std::cout << "invalid move\n";

        }
    
    }

    else if(piece_input == "rook"){
        int source_x, source_y, dest_x, dest_y;

        std::cout << "type the source square of the rook in the format x y\n";
        std::cin >> source_x >> source_y;

        std::cout << "type the destination square of the rook in the format x y\n";
        std::cin >> dest_x >> dest_y;

        //rook has no difference between source and destination on one axis and has a difference on another
        if(((dest_x - source_x == 0) && (dest_y - source_y != 0)) || ((dest_y - source_y == 0) && (dest_x - source_x != 0))){
            if((dest_x <= 8) && (dest_x >= 1) && (dest_y <= 8) && (dest_y >= 1)){
                std::cout << "valid move\n";

            }

            else{
                std::cout << "invalid move\n";

            }
        }

        else{
            std::cout << "invalid move\n";

        }    

    }
    


    else if(piece_input == "queen"){
        int source_x, source_y, dest_x, dest_y;

        std::cout << "type the source square of the queen in the format x y\n";
        std::cin >> source_x >> source_y;

        std::cout << "type the destination square of the queen in the format x y\n";
        std::cin >> dest_x >> dest_y;


        //just bishop behaviour or rook behaviour
        if((((dest_x - source_x == 0) && (dest_y - source_y != 0)) || ((dest_y - source_y == 0) && (dest_x - source_x != 0))) || (dest_x - source_x == dest_y - source_y)){
            if((dest_x <= 8) && (dest_x >= 1) && (dest_y <= 8) && (dest_y >= 1)){
                std::cout << "valid move\n";

            }

            else{
                std::cout << "invalid move\n";

            }
        }

        else{
            std::cout << "invalid move\n";

        }    

    }

    else if(piece_input == "king"){
        int source_x, source_y, dest_x, dest_y;

        std::cout << "type the source square of the king in the format x y\n";
        std::cin >> source_x >> source_y;

        std::cout << "type the destination square of the king in the format x y\n";
        std::cin >> dest_x >> dest_y;
        
        //same check as queen but also checks if differences are less than or equal to one
        if((((dest_x - source_x == 0) && (dest_y - source_y != 0)) || ((dest_y - source_y == 0) && (dest_x - source_x != 0))) || (dest_x - source_x == dest_y - source_y)){
            if(dest_x - source_x <= 1 && dest_x - source_x >= -1 && dest_y - source_y <= 1 && dest_y - source_y >= -1){
                if((dest_x <= 8) && (dest_x >= 1) && (dest_y <= 8) && (dest_y >= 1)){

                    std::cout << "valid move\n";

                }

                else{
                    std::cout << "invalid move\n";

                }

            }

            else{
                std::cout << "invalid move\n";

            }
        }

        else{
            std::cout << "invalid move\n";

        }    

    }



}