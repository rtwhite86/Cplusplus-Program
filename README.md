# Cplusplus-Program

# Summarize the project and what problem it was solving.
The Corner Grocer Item Tracking Program was created to analyze grocery purchase data and determine
how often each item was purchased. The program reads item names from an input file and stores the 
frequency of each item. The user can then search for a specific grocery item, display a list of all
items and their purchase frequencies, or view a histogram that represents the frequency of each item
using asterisks. The program also creates a backup file containing the item frequency data. This 
project provided a practical way to use C++ to organize and analyze information from a file while
giving the user an easy way to view the results. 

# What did you do particularly well? 
One part of the project that I did particularly well was organizing the program into separate functions
and using the GroceryTracker class to handle the grocery data. Instead of putting allof the program
logic inside main(), I separated tasks such as loading the data, searching for an item, displaying
frequencies, creating the histogram, and creating the backup file. I also used a map to store each 
grocery item and its frequency, which made it easier to keep the data organized. Another area I focused 
on was input validation. The program handles invalid menu selections and nonnumeric input without 
crashing and allows the user to try again. 

# Where could you enhance your code? How would these improvements make your code more efficient, secure, etc? 
One improvement I could make woulod be to make the item search more flexible. Currently, the user needs
to enter an item in the expected format for the program to find it. I could improve this by making searches
case-insensitive so that entries such as "broccoli" and "Broccoli" would return the same result. I could
also add more detailed error handling for problems such as a missing or unreadable input file. These improvements
would make the program more user-friendly and reliable while reducing the possibility of unexpected behavior when 
incorrect input or file problems occur.

# Did you find writing any piece of this code challenging and how did you overcome this? What tools and/or resources are you adding to your support network? 
One of the more chellenging parts of the project was making sure the different parts of the program
worked together correctly, especially the class declarations, function definitions, and file-processing
code. Debugging build errors also required me to carefully review where functions were declared and 
defined and verify that the correct files were included in the project. I overcame these challenges
by testing the program frequently instead of waiting until the entire project was complete. I also used
course materials, zyBooks, Visual Studio's compiler messages, and other technical resources to better
understand errors and determine now to correct them. Moving forward, these resources will continue to 
be useful when I encounter unfamiliar programming problems. 

# What skills from this project will be particularly transferable to other projects and/or course work? 
Several skills from this project will transfer directly to future programming projects. Object-oriented
programming, classes, functions, file input and output, maps, loops, and input validation are concepts that
can be applied to much larger applications. The project also gave me more experience breaking a larger 
problem into smaller pieces instead of trying to solve everything inside one function. Debugging and testing
the different menu options also reinforced the importance of verifying that a program works with both
expected and unexpected input. These are skills I will continue using in future computer science courses
and software development projects. 

# How did you make this program maintainable, readable, and adaptable?
I made the program maintainable and readable by separating responsibilities between the GroceryTracker class
and the main program. Functions were created for specific tasks instead of repeating code, and descriptive
names were used for variables, functions, and class members. I also included comments throughout the code
to explain important sections and make the program easier to follow. Keeping the grocery tracking 
functionality inside its own class makes the program easier to modify later. For example, additional reports
or menu options could be added without completely redesigning the existing program. Overall, the project
helped me understand how organization and readability are just as important as getting a program to produce
the correct output. 
