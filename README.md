# Tamagotchi Pet Game

Welcome to the **Tamagotchi Pet Game**, a simulation game where users can adopt and interact with virtual pets. Players can choose from three unique pets: Dog, Cat, and Dragon. Each pet has its own characteristics, needs, and reactions, making the game an enjoyable and dynamic experience.

## Overview

This project was designed to provide an engaging and realistic pet simulation experience. The game allows users to adopt a pet, play with it, and manage its needs such as hunger and happiness. Pets cannot play endlessly and require care and attention, mirroring real-life pet ownership.

## Features

- **Adoptable Pets**: Choose from a Dog, Cat, or Dragon.
- **Realistic Needs**: Pets have hunger, boredom, and happiness levels.
- **Gameplay**: Players can engage their pets in various activities and games.
- **Save and Load**: Start a new game or continue from where you left off.
- **Dynamic Pet Behavior**: Each pet has unique behaviors and reactions.

## Classes

### Pet Class

The base class for all pets. It initializes common attributes and provides default behaviors such as updating stats and displaying the pet's condition. When a user adopts a pet, the stats (happiness, appetite, etc.) are randomized and adjusted based on gameplay actions.

### Cat Class

The Cat class derives from the Pet class and overrides specific methods to provide unique behaviors:

- **Attributes**: Includes a level of agility.
- **Suggestions**: Provides gameplay advice (e.g., avoid Tug of War if happiness is low).
- **Polymorphism**: Implements unique versions of methods like `PrintInfo()` and `Suggestions()`.

### Dragon Class

The Dragon class also derives from the Pet class with its own distinct traits:

- **Attributes**: Includes a level of speed.
- **Preferences**: Prefers games that involve flying, such as fetch.
- **Hunger Levels**: Gets hungry faster than other pets but is fed more efficiently when dropped off at daycare.

### Dog Class

The Dog class is similar to the Cat and Dragon classes but stands out due to its endurance:

- **Attributes**: Includes reflexes.
- **Energy Levels**: Can play longer without needing to eat.
- **Versatility**: A great choice for extended gameplay sessions.

## Game Loop

1. **Start Menu**: Choose between starting a new game or loading an existing one.
2. **Adoption**: Select a pet (Dog, Cat, or Dragon) and name it.
3. **Gameplay**: Interact with your pet by selecting activities from a menu. Each activity affects the pet’s stats differently.
4. **Care**: Monitor your pet’s appetite, happiness, and boredom levels.
5. **Save and Exit**: When hunger levels are high, it is recommended to save the game and drop the pet off at daycare. If ignored, the pet may run away.

## Special Instructions

1. When prompted to select a new game or load game, input `1` (New Game) or `2` (Load Game).
2. When asked what pet you would like to adopt, type one of the available options (Dog, Cat, or Dragon).
3. When naming your pet, enter a string of your choice.
4. When selecting a game to play with your pet, enter the number corresponding to the displayed options.

## Video Demonstration
