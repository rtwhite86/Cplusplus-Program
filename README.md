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



---

# CS 230 - Operating Platforms

## The Gaming Room - Software Design Document

### Briefly summarize The Gaming Room client and their software requirements. Who was the client? What type of software did they want you to design? 
The Gaming Room was a client seeking to expand its existing Android-based game, Draw It or Lose It, into a web-based application that could be accessed
across multiple operating platforms. The game allows teams to compete by guessing images displayed during timed rounds. The client needed a solution 
that would support multiple teams and players while ensuring that game and team names remained unique. The application also needed to be scalable, secure
and accessible from different devices without requiring separate versions for each operating system. My resposibility was to develop a software design 
document that evaluated operating platforms, system architecture, storage, memory management, networking, and security to recommend an effective solution 
for the client's requirements. 

### What did you do particularly well in developing this documentation?
One area I did particularly well in was organizing the technical information into clear sections that explained how different operating platforms and 
system components would support The Gaming Room's requirements. I evaluated Linux, Windows, and macOS as potential server platforms while considering
factors such as performance, scalability, cost, and security. I also explained how memory management, storage management, and networking would affect
the performance of Draw It or Lose It. I believe my strongest contribution was connecting these technical considerations to the client's need rather than 
simply describing the technologies. This helped me develop recommendations that were practical and supported by the requirements of the application.

### What about the process of working through a design document did you find helpful when developing the code?
Working through the software design document helped me understand the importance of identifying requirements and planning the structure of an application
before beginning development. Creating and reviewing the domain model helped me understand how the GameService, Game, Team, and Player classes needed
to interact with one another. This was especially useful when implementing the singleton and iterator patterns in the Java application. The singleton
pattern ensured that only one instance of GameService managed the games, while the iterator pattern helped manage collections of game objects. Have a clear
understanding of the relationships between these components made it easier to organize the code, avoid unnecessary duplication, and verify that the 
application met the client's requirements. This experience reinforced how effective planning can make software development more manageable and organized. 

### If you could choose one part of your work on these documents to revise, what would you pick? How would you improve it?
If I could revise one part of my software design documentation, I would focus on improving the system architecture section by including more detailed 
diagrams that illustrate how the different components communicate with one another. Although the document explains the client-server architecture and 
the responsibilities of the operating platform, additional visual representations would make it easier to understand how the web-based application, server
database, and network connections interact. I would also expand the explanation of how the system could handle increased numbers of players and simultaneous
game sessions. These improvements would make the document more useful for developers implementing the application and help the client better understand
how the recommended design supports future growth. 

### How did you interpret the user's needs to implement them into your software design? Why is it so important to consider the user's needs when designing?
I interpreted the user's needs by reviewing The Gaming Room's requirements and identifying how each requirement would influence the application's design.
For example, the client needed to support multiple games, teams, and players while preventing duplicate game and team names. I addressed these requirements
through the application's domain model and the Java implementation, which used the GameService class to manage game instances and validate unique names.
I also considered the client's need to expand beyond Android by recommending a web-based client-server architecture that would allow users to access the
game from different operating systems and devices. Security, scalability, and performance were additional considerations because the application needed to 
support multiple users while protecting game data. Considering the user's needs is important because a technically functional application may still fail
if it does not solve the client's actual problems or provide a reliable experience for its users. 

### How did you approach designing software? What techniques or strategies would you use in the future to analyze and design a similar software application?
My approach to designing software began with understanding the client's requirements and identifying the major components needed to support the application.
I used the domain model to establish relationships between classes and determine how games, teams, and players would be managed. I then considered how design
patters, such as the singleton and iterator patterns, could improve the organization and functionality of the Java application. When developing the software
design document, I compared operating platforms and evaluated factors such as scalability, security, performance, and cost before making recommendations.
In future projects, I would continue using requirements analysis, UML diagrams, and design patterns to establish a clear foundation before writing code.
I would also place greater emphasis on documenting system interaction and evlauating potential challenges early in the design process. These strategies would
help me develop software that is easier to maintain, expand, and adapt to changing client requirements. 

### Project Artifact
[View the Completed Software Design Document](CS-230-Operating-Platforms/CS%20230%20Project%20Software%20Design%20Template%20Project%20Three.docx) 
---

# CS 250 - Software Development Lifecycle
## Sprint Review and Retrospective 

### How do I interpret user needs and implement them into a program? How does creating user stories help with this? 
Interpreting user needs begins with understanding what the user wants the application to accomplish and translating those expectations into clear software 
requirements. Throughout the SNHU Travel project, I leanred how user stories help developers understand features from the user's perspective by identifying 
who needs a features, what they want to accomplish, and why is it important. For example, the requirement to display the top five travel destinations could 
be translated into a user story with specific acceptance criteria describing what information should appear and how the feature should function. These acceptance
criteria helped guide development and testing by providing measurable expecations for the completed future. I also learned that communicating with the Product 
Owner and tester is important when requirements change or additional clarification is needed. Creating user stories helps ensure that development remains 
focused on delivering functionality that meets the user's actual needs rather than simply implementing features based on assumptions. 

### How do I approach developing programs? What Agile processes do I hope to incorporate into my future development work?
My approach to developing programs begins with understanding requirements, identifying the major tasks, and organizing the work into manageable steps. Throughout
the SHNU Travel project, I learned how Agile development allows teams to deliver software incrementally while adapting to changing requirements and feedback.
Rather than attempting to complete an entire application at once, Scrum uses Sprints to focus on smaller amounts of work that can be developed, tested, 
and reviewed. I found that practices such as Daily Scrum meetings, Sprint Reviews, and Sprint Retrospectives help teams maintain communication, identify 
obstacles, and continuously improve their development processes. I also learned the importance of maintaining a prioritized product backlog and using acceptance
criteria to guide development and testing. In future projects, I would incorporate these Agile practices along with regular communication betweeen developers, 
testers, and the Product Owner. These stratagies would help me remain organized, respond effectively to changes, and deliver software that meets user expecations. 

### What does it mean to be a good team member in software development?
Being a good team member in software development means communicating effectively, taking responsibility for assigned work, and supporting others in achieving
shared project goals. Throughout CS 250, I gained a better understanding of how the Product Owner, Scrum Master, developers, and testers contribute to a 
successful Agile team. Each role has different responsibilities, but collaboration is necessary to ensure that requirements are understood, development 
stays on track, and completed features meet user expectations. I learned that providing clear updates during Daily Scrum meetings, asking questions when 
requirements are unclear, and responding constructively to feedback can help prevent misunderstanding and delays. I also recognize the importance of being
adaptable when priorities change and helping teammates overcome obstacles rather than focusing only on individual tasks. In future software development projects,
I would strive to be a dependable team member who communicates openly, shares knowledge, accepts feedback, and contributes to continuous improvement. These
qualities help build trust within a team and support the delivery of reliable, high-quality software. 

### Project Artifact

[View the Sprint Review and Retrospective](CS-250-Software-Development-Lifecycle/CS%20250%20Final%20Project%20Sprint%20Review%20and%20Retrospective.docx) 
