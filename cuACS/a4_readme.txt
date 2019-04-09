COMP3004 Object Oriented Software Engineering
Team: Animal Farm
Deliverable 4 readme

Auhtors:
 - Azim Baghadiya - 101044100
 - Cameron Hawtin - 101047338
 - Nicolas Lalonde - 101031228
 - Nick Simone - 101034935

Description:
The Carleton University Animal Care System (cuACS) proposes to address this issue by providing a tool that automatically matches together, 
based on compatibility, shelter animals and the human clients who wish to adopt them. The goal of the cuACS system is to generate an optimal 
set of matches, where a match consists of an animal available for adoption and a human client who is well suited to adopt it. An optimal set 
of matches will take into account the best interests of all animals in the shelter, rather than producing a small subset of highly favourable 
matches and a large number of lesser compatible one.

Launching and operating:
Navigate to the correct diretory (cuACS) using the "cd" command appropriately.
1. To compile, write "make". This uses the commands in the Makefile to make an executable called "cuACS"
2. To run the cuACS system, run the exectuable using the command: "./cuACS".
3. To login as the shelter staff, enter "Staff" as username and hit 'OK' (Please note that "Staff" is case-sensitive)
4. To login as as a client, just use the client name -- for example: "Azim Baghadiya"
5. To run the ACM algorithm, login as Staff and click on "Generate Matches" button
6. Each of the matches will provide the rules that were used to rank that match - to view these    rules click on a match
7. To exit, hit the close window button on the top right corner

A client can:
- view their own profile
- edit their own profile
- view a list of all animals

A staff can:
- view all clients
- view all animals
- edit an animal (from within view animal)
- add a client
- add an animal
- run the ACM algorithm and generate/view the matches

GitHub Link for the codebase:
https://github.com/cameronhawtin/COMP-3004

As instructed by the professor, our course cordinator Sean should be able to access this private repository.

