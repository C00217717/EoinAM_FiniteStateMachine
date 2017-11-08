// author Peter Lowe
#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>
#include "FiniteStateMachine.h"

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();
	Animation FSM;

private:

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();
	
	void setupFontAndText();
	void setupSprite();



	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Texture m_animationTextures[5]; // texture used for sfml logo
	sf::Sprite m_animationSprite ; // sprite used for sfml logo

	sf::RectangleShape m_animationBlock;
	bool m_exitGame; // control exiting game

};

#endif // !GAME

