// keep safe some code


/************** MAIN LOOP WITH NO NINIT NO LOGIC BUT WINDOW CREATED *****************/
/*

    // Screen dimensions (as percentages of the actual screen dimensions)
    const int SCREEN_WIDTH_PERCENT = 80;
    const int SCREEN_HEIGHT_PERCENT = 80;


    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return -1;
    }

    // Flag to track whether the window is in full screen mode
    bool fullScreen = false;

    // Get the actual screen dimensions
    int screen_width, screen_height;
    SDL_DisplayMode displayMode;

    // SDL_GetCurrentDisplayMode(0, &screen_width, &screen_height);
    if (SDL_GetCurrentDisplayMode(0, &displayMode) == 0)
    {
        // Success! The current display mode is stored in the "displayMode" variable
        screen_width = displayMode.w;
        screen_height = displayMode.h;
        std::cout << "Success! The current display mode is stored in the displayMode variable, and we have " << screen_width << ", " << screen_height << std::endl;
    }
    else
    {
        // An error occurred. You can use SDL_GetError() to get the error message.
        std::cout << "An error occurred. You can use SDL_GetError() to get the error message" << std::endl;
        return -1;
    }

    // Calculate the dimensions of the game screen (as pixels)
    int game_screen_width = screen_width * SCREEN_WIDTH_PERCENT / 100;
    int game_screen_height = screen_height * SCREEN_HEIGHT_PERCENT / 100;

    // Create the window
    SDL_Window* window = SDL_CreateWindow("Breakout", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, game_screen_width, game_screen_height, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    if (window == NULL)
    {
        std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return -1;
    }

    // Create the renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL)
    {
        std::cout << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return -1;
    }


    // Set the frame rate
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    // Game loop
    bool running = true;
    while (running) {
        // Handle input

        // Handle events
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                running = false;
            }
            if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_f)
            {
                // Toggle full screen mode
                fullScreen = !fullScreen;
                SDL_SetWindowFullscreen(window, fullScreen ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0);
            }
        }

        // Update game state

        // Render game

        // Delay to achieve desired frame rate
        SDL_Delay(frameDelay);

        // Display the window
        SDL_RenderPresent(renderer);
    }

    // Clean up SDL
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
*/