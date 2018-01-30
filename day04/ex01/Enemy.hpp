#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
	public:
		Enemy(Enemy const& src);
		Enemy(int health, std::string const& type);
		virtual ~Enemy();

		std::string const& getType() const;
		int getHP() const;

		virtual void takeDamage(int);

		Enemy& operator=(Enemy const& rhs);

	protected:
		std::string const _type;
		int _health;
	private:
		Enemy();
};
#endif
