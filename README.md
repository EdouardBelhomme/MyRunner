# B-MUL-100: My Runner - C Graphical Programming

## My Runner

**Binary Name:** my_runner  
**Repository Name:** MUL_my_runner_$ACADEMIC_YEAR  
**Repository Rights:** ramassage-tek  
**Language:** C  
**Compilation:** via Makefile, including re, clean, and fclean rules

- Your repository must contain the totality of your source files, but no useless files (binary, temp files, obj files,...).
- All bonus files, including a potential specific Makefile, should be in a directory named bonus.
- Error messages have to be written on the error output, and the program should then exit with the 84 error code (0 if there is no error).

In this project, you are tasked with creating a small video game based on the rules of a finite Endless Running Game.

The basic rules for My Runner are as follows:
- The player is a character who runs in a map provided as a parameter.
- Enemies and obstacles must appear on the opposite side of the player's position.
- The player can use the space bar to jump and avoid obstacles and enemies.
- As the player runs, a score, which will be displayed, will increase.
- When the player dies or finishes the map, the score is displayed inside the window.

Managing inputs from the user and displaying animated sprites are key skills for developing basic games. Additionally, you will need to manage various new game-making skills such as reading a file describing an environment, using it to render a visual, managing basic game physics, and handling multiple entities simultaneously.

Your project should be more than just a technical demonstration; aim for a real game. Strive for consistency between your sprites, sound effects, and the game world.

## Requirements

### Must
- The window must be closed using events.
- The program must manage input from the keyboard.
- The program must contain animated sprites rendered thanks to sprite sheets.
- The program must contain moving (rotating, translating, or scaling) elements.
- The program background must include parallax scrolling with at least 3 objects moving at different speeds.
- The program must take a file as an argument containing the map of your current game.
- The program must display a score that is regularly updated during the game.
- The program must have an end, whether it's a victory or a defeat.
- The program must handle basic game physics (jumping/falling/hitting a wall).
- The program must have at least one music and one sound effect.

### Should
- The program should have randomly spawning enemies.
- Animations and movements in your program should not depend on the speed of your computer.
- Animations and movements in your program should be timed by `sfClock` elements.
- Your window should stick between 800x600 pixels and 1920x1080 pixels.
- Your window should have a limited frame rate such that it can be computed without lagging.
- The program should accept the “-h” option, then display usage of the program.
- Possible user interactions should be explicitly explained in a usage.

### Could
- The program could have several different levels.
- The program could have a main menu.
- The program could have a pause menu.
- The program could store the highest score made.
- The program could have an infinite mode where you generate randomly the map till the player dies.
- The program could let the user customize its character.
- The program could have bonus/malus which gives/removes points or advantages to the player.

The size of your repository (including the assets) must be as small as possible. Think about the format and the encoding of your resource files (sounds, musics, images, etc.). An average maximal size might be 15MB, all included.

## Gameplay

While the requirements don’t go deep into the gameplay, we are still asking you to make a video game. A basic example of what we are expecting is a simple game where we could score points by avoiding obstacles (either by jumping or crouching) while our character is running towards them. If you make an endless level, the score should also be based on how long the player can keep avoiding obstacles.

## Map Example

Here is an example of a map where spaces are the sky, 1 are solid ground, and 2 are spikes that the player can’t touch. For the example, we use 3 to describe blocks with a different sprite. You are free to use any kind of map formatting as long as it’s described in a hidden file named `.legend` and located at the root of your repository.

```plaintext
∼/B-MUL-100> cat map/map1




                3
         223    1
1111111111111111111111111111111111111
1111111111111111111111111111111111111
1111111111111111111111111111111111111
```

## Usage

```bash
∼/B-MUL-100> ./my_runner; echo $?
./my_runner: bad arguments: 0 given but 1 is required
retry with -h
84
```
This is an example; you don’t need to have the exact same usage. Keep in mind that a good usage covers the integrality of your project.

```bash
∼/B-MUL-100> ./my_runner -h
Finite runner created with CSFML.

USAGE
    ./my_runner map.txt
OPTIONS
    -i  launch the game in infinity mode.
    -h  print the usage and quit.
USER INTERACTIONS
    SPACE_KEY jump.
```
## Authorized Functions

Here is the full list of authorized functions.

### From the C library
- malloc
- free
- memset
- rand
- srand
- time (only with srand)
- (f)open
- (f)read
- (f)write
- (f)close
- getline

### From the CSFML library
All functions

### From the math library
All functions

Any unspecified functions are de facto banned, except for bonus features.

## Technical Formalities

Your project will be entirely evaluated with Automated Tests, by analyzing your source files and configuration files.

In order to be correctly evaluated, your repository must at least contain the following files:
```
.
| - - my_runner
| - - map
| | - - map1
| | - - map2
| - - .legend
| - - bonus
| | - - // bonus files here
```