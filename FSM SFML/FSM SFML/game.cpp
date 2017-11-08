/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#include "Game.h"
#include <iostream>



Game::Game() :
	m_window{ sf::VideoMode{ 800, 600, 32 }, "Finite State Machine" },
	m_exitGame{false}
{
	setupFontAndText();
	setupSprite(); 
	m_animationBlock.setSize(sf::Vector2f(600, 400));
	m_animationBlock.setPosition(sf::Vector2f(120,0));
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
				m_currentAnimation = 0;
				m_timer[m_currentAnimation] = 0;
			}
			if (sf::Keyboard::Num2 == event.key.code)
			{
				FSM.walking();
				m_animationBlock.setTexture(&m_animationTextures[1]);
				m_currentAnimation = 1;
				m_timer[m_currentAnimation] = 0;
			}
			if (sf::Keyboard::Num3 == event.key.code)
			{
				FSM.jumping();
				m_animationBlock.setTexture(&m_animationTextures[2]);
				m_currentAnimation = 2;
				m_timer[m_currentAnimation] = 0;
			}

			if (sf::Keyboard::Num4 == event.key.code)
			{
				FSM.shovelling();
				m_animationBlock.setTexture(&m_animationTextures[3]);
				m_currentAnimation = 3;
				m_timer[m_currentAnimation] = 0;
			}

			if (sf::Keyboard::Num5 == event.key.code)
			{
				FSM.hammering();
				m_animationBlock.setTexture(&m_animationTextures[4]);
				m_currentAnimation = 4;
				m_timer[m_currentAnimation] = 0;
			}

			if (sf::Keyboard::Num6 == event.key.code)
			{
				FSM.swordManShip();
				m_animationBlock.setTexture(&m_animationTextures[5]);
				m_currentAnimation = 5;
				m_timer[m_currentAnimation] = 0;
			}
		}

	}
}

void Game::update(sf::Time t_deltaTime)
{
	m_animationBlock.setTexture(&m_animationTextures[m_currentAnimation]);
	m_timer[m_currentAnimation] ++;

	if (m_timer[m_currentAnimation] == 60)
	{
		FSM.idle();
		m_currentAnimation = 0;
	}

	if (m_exitGame)
	{
		m_window.close();
	}
}

void Game::render()
{
	m_window.clear(sf::Color::White);
	m_window.draw(m_buttonText);
	m_window.draw(m_animationBlock);
	m_window.display();
}

void Game::setupFontAndText()
{
	if (!m_ArialBlackfont.loadFromFile("ASSETS\\FONTS\\ariblk.ttf"))
	{
		std::cout << "problem loading arial black font" << std::endl;
	}
	m_buttonText.setFont(m_ArialBlackfont);
	m_buttonText.setString("Press the Button to change animation \n1) Idle	2) Walking	3) Jumping \n4)Shovelling	5)Swordsman Ship \n				6) Hammering");
	m_buttonText.setPosition(25.0f, 400.0f);
	m_buttonText.setCharacterSize(35);
	m_buttonText.setFillColor(sf::Color::Black);


}

void Game::setupSprite()
{
	/// <summary>
	/// IDLE
	/// </summary>
	if (!m_animationTextures[0].loadFromFile("ASSETS\\IMAGES\\idle.png"))
	{
		// simple error message if previous call fails
		std::cout << "problem loading logo" << std::endl;
	}

	/// <summary>
	/// Walking
	/// </summary>
	if (!m_animationTextures[1].loadFromFile("ASSETS\\IMAGES\\walking.jpg"))
	{
		// simple error message if previous call fails
		std::cout << "problem loading logo" << std::endl;
	}

	/// <summary>
	/// Jumping
	/// </summary>
	if (!m_animationTextures[2].loadFromFile("ASSETS\\IMAGES\\jumping.png"))
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
	if (!m_animationTextures[4].loadFromFile("ASSETS\\IMAGES\\swordsman.png"))
	{
		// simple error message if previous call fails
		std::cout << "problem loading logo" << std::endl;
	}

	/// <summary>
	/// Hammering
	/// </summary>
	if (!m_animationTextures[5].loadFromFile("ASSETS\\IMAGES\\hammering.png"))
	{
		// simple error message if previous call fails
		std::cout << "problem loading logo" << std::endl;
	}
	m_animationBlock.setTexture(&m_animationTextures[0]);
}
