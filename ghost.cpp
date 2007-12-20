/* This file is part of Kapman.
   Created by Alexandre GALINIER <alex.galinier@hotmail.com>

   Kapman is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation, version 2.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301, USA
*/

#include "ghost.h"

const qreal Ghost::SPEED = 2.5;

Ghost::Ghost(qreal p_x, qreal p_y, QString p_imageURL) : Character(p_x, p_y) {
	m_imageURL = p_imageURL;
	
	// Makes the ghost move as soon as the game is created
	goLeft();
}

Ghost::~Ghost() {

}

void Ghost::goUp() {
	m_xSpeed = 0;
 	m_ySpeed = -SPEED;
}
 
void Ghost::goDown() {
	m_xSpeed = 0;
	m_ySpeed = SPEED;
}

void Ghost::goRight() {
	m_xSpeed = SPEED;
	m_ySpeed = 0;
}

void Ghost::goLeft() {
	m_xSpeed = -SPEED;
	m_ySpeed = 0;
}

QString Ghost::getImageURL() const  {
	return m_imageURL;
}
