/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>
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

	/// <summary>
	/// Finite state Machine object
	/// </summary>
	Animation FSM;

private:

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();
	
	/// <summary>
	/// Functions to setup Sprites and Fonts
	/// </summary>
	void setupFontAndText();
	void setupSprite();

	/// <summary>
	/// Timers array for each animation
	/// </summary>
	int m_timer[6];

	/// <summary>
	/// Current Animation number
	/// </summary>
	int m_currentAnimation{ 0 };


	sf::RenderWindow m_window; 
	sf::Font m_ArialBlackfont; 
	sf::Text m_buttonText;
	
	/// <summary>
	/// Array of textures
	/// </summary>
	sf::Texture m_animationTextures[6]; // texture used for sfml logo
	
	/// <summary>
	/// Rectangle shape to be textured to sprite image
	/// </summary>
	sf::RectangleShape m_animationBlock;
	
	bool m_exitGame; // control exiting game

};

#endif // !GAME

