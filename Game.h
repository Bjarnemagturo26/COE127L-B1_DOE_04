#ifndef GAME_H
#define GAME_H

class Game
{

    public:
        Game();
        virtual ~Game();
        void play();


    protected:


    private:
    Player player1;
    Player player2;


};

#endif // GAME_H_
