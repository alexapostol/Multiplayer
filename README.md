# Unreal Multiplayer Course - Section 1 - Puzzle Platforms

Teaching the basic client server model and get multiple instances connected through a collaborative puzzle game.

### 0 Course Promo ###

+ Why you should take the course.
+ We overview the journey.
+ What are the prerequisites?

### 0b Introduction to Puzzle Platforms ###

+ Overview of the course structure.
+ What will we cover this section.
+ Let's get stuck in!

### 1 Connecting Two Players ###

+ Notes on Unreal versions.
+ Creating the base project.
+ Testing with multiple players.
+ What's under the hood.
+ Finding an Unreal .gitignore.

### 2 How to Be an Active Student ###

+ Source control and where to get code.
+ Our community site.
+ Reading the slides.
+ Our rich community.

### 3 Surveying the Multiplayer Space ###

+ Overview of multiplayer game types.
+ Outlining the journey.
+ Sharing our ambitions.

### 4 Meet the Client-Server Model ###

+ Client-Server vs Peer-to-Peer
+ Launching a game from the command-line.
+ Launching a dedicated server.
+ Join with clients.

### 5 Detecting Where Code is Running ###

+ Create a `AStaticMeshActor` subclass.
+ Adding mobility in C++.
+ Running code only on the server.

### 6 Authority and Replication ###

+ Understand Actor "Authority".
+ Enable replication of movement.
+ What happens with disagreement.

### 7 Widgets For FVector Properties ###

+ Adding 3D gizmos to a UPROPERTY.
+ Vector for A to B travel.
+ Moving our platform.

### 8 Sending The Platform Back ###

+ What we want to achieve.
+ Continuing past the target.
+ Swapping the start and target.

### 9 Set Up A Simple Puzzle ###

+ Better jump controls.
+ Layout a puzzle.

### 9b Playing Over The Internet ###

+ Local vs global internet.
+ Simulating LAN with Hamachi.
+ Connecting Unreal over Hamachi.
+ Getting connected with others.

### 10 Set Up A Platform Trigger ###

+ Create the C++ class.
+ Add a box component.
+ Tweak the Blueprint.
+ Place it in the world.

### 11 Handling Overlap Events In C++ ###

+ Implement the handler function.
+ Register the event callback.
+ Reloading the map to call constructors.
+ Repeat for `EndOverlap`.

### 12 Activating Platforms From Triggers ###

+ The desired behaviour.
+ Creating the platform interface.
+ TArray for hooking up platforms.
+ Implementing the logic.

### 13 When To Use A GameInstance ###

+ What is a `GameInstance`?
+ Set a custom `GameInstance` for you project.
+ Init vs Constructor.

### 14 Console Commands With Exec ###

+ What is the console.
+ What classes support Exec functions.
+ Creating out own.
+ How to log to the screen from C++.
+ Dealing with arguments.

### 15 Hosting Servers With ServerTravel ###

+ Creating a Lobby.
+ What is travelling?
+ Hosting a server with travel.
+ Testing with and without `?listen`.

### 16 Joining Servers With ClientTravel ###

+ `ClientTravel` vs `ServerTravel`.
+ Getting the `PlayerController`.
+ Implementing `ClientTravel`.

### 17 Sharing Your Game On Itch.io ###

+ Building your game.
+ Introduction to Itch.io.
+ A note on security.
+ Sharing our game.

### 99 Puzzle Platforms Wrap-up ###

+ Well done!
+ Get inspired to extend your project.
+ Make sure you're ready for the next section.


# Unreal Multiplayer Course - Section 2 - Menu System

How to create rich UI using Unreal's UMG in C++. This project lays the foundations for creating complex menu systems for multiplayer games.

### 0 Introduction to Menu System ###

+ Overview of the section.
+ Why we need to cover UI.

### 1 Create a Menu Blueprint ###

+ Importing last section's project.
+ Creating a menu Blueprint.
+ Revision of layout.
+ Create a basic menu.

### 2 Accessing UI Classes in C++ ###

+ Using the `FClassFinder`.
+ Finding `BP_PlatfromTrigger`.
+ Accessing UMG from C++.
+ Saving our menu class.

### 3 Load And Display UMG In C++ ###

+ Creating an interface.
+ `CreateWidget` in C++.
+ Setup a MainMenu level.

### 4 Changing UI Input Modes ###

+ Using `SetInputMode()`.
+ Configuring an input mode.
+ Displaying the cursor.
+ Repeat for yourselves.

### 5 Advanced UMG Widget Layout ###

+ How container widgets work.
+ Canvas panel.
+ Horizontal/vertical boxes.
+ Size boxes as spacers.
+ Overlay.
+ Create a layout.

### 6 Custom Buttons And Fonts ###

+ 9-slice images for buttons.
+ Box vs border vs image.
+ Using Google fonts.
+ Scale box for backgrounds.
+ Make it pretty.

### 7 Solution: Custom Buttons And Fonts ###

+ We make our menu pretty.

### 8 Connecting UMG to C++ ###

+ Create a `UUserWidget` class.
+ Reparent the widget BP.
+ Add a bind widget property.
+ What do the errors mean?

### 9 Initialisers and UButton Callbacks ###

+ How to `Initialize` a UserWidget.
+ The UButton OnClick handler.
+ Add a dynamic handler.

### 10 Interfaces To Invert Dependencies ###

+ Intro to inverting dependencies.
+ How to make a interface in Unreal.
+ Using an interface for callbacks.
+ Injecting the dependency.

### 11 Solution: Injecting Dependencies ###

+ We solve last lecture's challenge.

### 12 Deactivating Menus ###

+ Refactoring our menu setup.
+ Creating a teardown stub.
+ Reversing the setup logic.

### 13 Sub-Menus With Widget Switchers ###

+ What are widget switchers.
+ Creating a "Join" menu.
+ Styling the menu.

### 14 Solution: Styling Our Sub-Menu ###

+ We finish styling out menu.

### 15 Navigating Menus In C++ ###

+ Binding the WidgetSwitcher.
+ Investigating the API.
+ Switching menus.
+ Implement a back button.

### 16 Reading Text Fields From C++ ###

+ Set startup level.
+ Bind the text field.
+ Call the `Join()` function.

### 17 Challenge: Loading In-Game Menus ###

+ Create the new widget.
+ Create the layout.
+ Load on `ESC` key in level.
+ Create a `UMenuWidget`.

### 18 Challenge: Leaving A Server ###

+ The challenge spec.
+ Hook up the cancel button.
+ Hook up the quit button.

### 19 Quitting A Game From C++ ###

+ How to quit from the console.
+ Running console commands from C++.
+ Quitting from a button press.

### 99 Menu System Wrap-up ###

+ How to polish your menu system.
+ Share it with other students.