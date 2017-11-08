// author Peter Lowe

#include "Game.h"
#include <iostream>



Game::Game() :
	m_window{ sf::VideoMode{ 800, 600, 32 }, "SFML Game" },
	m_exitGame{false} //when true game will exit
{
	setupFontAndText(); // load font 
	setupSprite(); // load texture
}


Game::~Game()
{
}


void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.f / 60.f); // 60 fps
	while (m_window.isOpen())
	{
		processEvents(); // as many as possible
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents(); // at least 60 fps
			update(timePerFrame); //60 fps
		}
		render(); // as many as possible
	}
}
/// <summary>
/// handle user and system events/ input
/// get key presses/ mouse moves etc. from OS
/// and user :: Don't do game update here
/// </summary>
void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if ( sf::Event::Closed == event.type) // window message
		{
			m_window.close();
		}
		if (sf::Event::KeyPressed == event.type) //user key press
		{
			if (sf::Keyboard::Escape == event.key.code)
			{
				m_exitGame = true;
			}

			if (sf::Keyboard::Num1 == event.key.code)
			{
				FSM.idle();
				m_animationBlock.setTexture(&m_animationTextures[0]);
			}
			if (sf::Keyboard::Num2 == event.key.code)
			{
				FSM.walking();
				m_animationBlock.setTexture(&m_animationTextures[1]);
			}
			if (sf::Keyboard::Num3 == event.key.code)
			{
				FSM.jumping();
				m_animationBlock.setTexture(&m_animationTextures[2]);
			}

			if (sf::Keyboard::Num4 == event.key.code)
			{
				FSM.shovelling();
				m_animationBlock.setTexture(&m_animationTextures[3]);
			}

			if (sf::Keyboard::Num5 == event.key.code)
			{
				FSM.hammering();
				m_animationBlock.setTexture(&m_animationTextures[4]);
			}

			if (sf::Keyboard::Num6 == event.key.code)
			{
				FSM.swordManShip();
				m_animationBlock.setTexture(&m_animationTextures[5]);
			}
		}

	}
}

/// <summary>
/// Update the game world
/// </summary>
/// <param name="t_deltaTime">time interval per frame</param>
void Game::update(sf::Time t_deltaTime)
{
	if (m_exitGame)
	{
		m_window.close();
	}
}

/// <summary>
/// draw the frame and then switch bufers
/// </summary>
void Game::render()
{
	m_window.clear(sf::Color::White);
	m_window.draw(m_welcomeMessage);
	m_window.draw(m_animationSprite);
	m_window.display();
}

/// <summary>
/// load the font and setup the text message for screen
/// </summary>
void Game::setupFontAndText()
{
	if (!m_ArialBlackfont.loadFromFile("ASSETS\\FONTS\\ariblk.ttf"))
	{
		std::cout << "problem loading arial black font" << std::endl;
	}
	m_welcomeMessage.setFont(m_ArialBlackfont);
	m_welcomeMessage.setString("SFML Game");
	m_welcomeMessage.setStyle(sf::Text::Underlined | sf::Text::Italic | sf::Text::Bold);
	m_welcomeMessage.setPosition(40.0f, 40.0f);
	m_welcomeMessage.setCharacterSize(80);
	m_welcomeMessage.setOutlineColor(sf::Color::Red);
	m_welcomeMessage.setFillColor(sf::Color::Black);
	m_welcomeMessage.setOutlineThickness(3.0f);

}

/// <summary>
/// load the texture and setup the sprite for the logo
/// </summary>
void Game::setupSprite()
{
	/// <summary>
	/// IDLE
	/// </summary>
	if (!m_animationTextures[0].loadFromFile("ASSETS\\IMAGES\\idle.gif"))
	{
		// simple error message if previous call fails
		std::cout << "problem loading logo" << std::endl;
	}

	/// <summary>
	/// Walking
	/// </summary>
	if (!m_animationTextures[1].loadFromFile("ASSETS\\IMAGES\\walking.png"))
	{
		// simple error message if previous call fails
		std::cout << "problem loading logo" << std::endl;
	}

	/// <summary>
	/// Jumping
	/// </summary>
	if (!m_animationTextures[2].loadFromFile("ASSETS\\IMAGES\\jumping.jpg"))
	{
		// simple error message if previous call fails
		std::cout << "problem loading logo" << std::endl;
	}

	/// <summary>
	/// Shovelling
	/// </summary>
	if (!m_animationTextures[3].loadFromFile("ASSETS\\IMAGES\\shovelling.jpg"))
	{
		// simple error message if previous call fails
		std::cout << "problem loading logo" << std::endl;
	}

	/// <summary>
	/// Swordsmanship
	/// </summary>
	if (!m_animationTextures[40].loadFromFile("ASSETS\\IMAGES\\swordsman.png"))
	{
		// simple error message if previous call fails
		std::cout << "problem loading logo" << std::endl;
	}
	m_animationSprite.setTexture(m_animationTextures[0]);
}
