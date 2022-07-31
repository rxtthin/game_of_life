#pragma once

#include <SFML/Graphics/Color.hpp>

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;
typedef signed char i8;
typedef signed short i16;
typedef signed int i32;
typedef signed long i64;
typedef float f32;
typedef double f64;

#define GRID_W 500
#define GRID_H 500
#define WINDOW_W 1280
#define WINDOW_H 720
#define MOVE_SPEED 0.001f
#define UPDATE_RATE_MS 150
#define CELL_SIZE 10
#define OUTLINE_SIZE 1

static const u32 GRID_SIZE = GRID_W * GRID_H;
static const sf::Color ALIVE_CELL_COLOR = sf::Color::White;
static const sf::Color DEAD_CELL_COLOR = sf::Color(20,20,20,255);