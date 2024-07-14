# CLI-based-voting-system-in-C
# Voting System

This is a simple C program that simulates a voting system. Users can cast votes for candidates and view the voting results.

## Features

- Cast votes for candidates.
- View voting results and the winner.

## How It Works

1. **Enter the number of candidates.**
2. **Enter the name of each candidate.**
3. **Use the menu to cast votes or view results.**

## Menu Options

1. **Cast Vote:** Allows the user to vote for a candidate.
2. **View Results:** Displays the number of votes each candidate has received and announces the winner.
3. **Exit:** Exits the program.

## Code Overview

### Structures

- `Candidate`: Holds the candidate's ID, name, and number of votes.

### Functions

- `castVote(Candidate candidates[], int numCandidates)`: Prompts the user to cast a vote for a candidate.
- `printResults(Candidate candidates[], int numCandidates)`: Prints the voting results and announces the winner.

### Main Function

- **Input the number of candidates.**
- **Initialize candidate data.**
- **Dynamically allocate memory for candidates.**
- **Voting process menu:** Loop through menu options until the user chooses to exit.
- **Free dynamically allocated memory.**

## Usage

1. Compile the code using a C compiler:
    ```bash
    gcc voting_system.c -o voting_system
    ```
2. Run the executable:
    ```bash
    ./voting_system
    ```
3. Follow the on-screen prompts to enter candidate information, cast votes, and view results.

## Example

```
Enter the number of candidates: 3
Enter the name of candidate 1: Alice
Enter the name of candidate 2: Bob
Enter the name of candidate 3: Charlie

-- Voting System Menu --
1. Cast Vote
2. View Results
3. Exit
Enter your choice: 1
Candidates:
1. Alice
2. Bob
3. Charlie
Enter the candidate number to vote: 2
Vote cast successfully!

-- Voting System Menu --
1. Cast Vote
2. View Results
3. Exit
Enter your choice: 2
Voting Results:
1. Alice - Votes: 0
2. Bob - Votes: 1
3. Charlie - Votes: 0

Winner: Bob

-- Voting System Menu --
1. Cast Vote
2. View Results
3. Exit
Enter your choice: 3
Exiting the program.
```

## Notes

- Ensure valid candidate numbers when voting.
- The program dynamically allocates memory for the candidates; remember to free this memory at the end of the program.

Enjoy using the Voting System!
