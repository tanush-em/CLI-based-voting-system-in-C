#include <stdio.h>
#include <stdlib.h>

typedef struct candidate {
    int id;
    char name[20];
    int votes;
} Candidate;

void castVote(Candidate candidates[], int numCandidates) {
    int choice;
    printf("Candidates:\n");
    for (int i = 0; i < numCandidates; i++) {
        printf("%d. %s\n", candidates[i].id, candidates[i].name);
    }
    printf("Enter the candidate number to vote: ");
    scanf("%d", &choice);
    if (choice < 1 || choice > numCandidates) {
        printf("Invalid candidate number.\n");
        return;
    }
    candidates[choice - 1].votes++;
    printf("Vote cast successfully!\n");
}

void printResults(Candidate candidates[], int numCandidates) {
    printf("Voting Results:\n");
    int maxVotesIndex = 0;
    for (int i = 0; i < numCandidates; i++) {
        printf("%d. %s - Votes: %d\n", candidates[i].id, candidates[i].name, candidates[i].votes);
        if (candidates[i].votes > candidates[maxVotesIndex].votes) {
            maxVotesIndex = i;
        }
    }
    printf("\nWinner: %s\n", candidates[maxVotesIndex].name);
}

int main() {
    int numCandidates;
    printf("Enter the number of candidates: ");
    scanf("%d", &numCandidates);

    // Dynamically allocate memory for the candidates
    Candidate* candidates = (Candidate*)malloc(numCandidates * sizeof(Candidate));
    if (candidates == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize candidates' data
    for (int i = 0; i < numCandidates; i++) {
        candidates[i].id = i + 1;
        printf("Enter the name of candidate %d: ", i + 1);
        scanf("%s", candidates[i].name);
        candidates[i].votes = 0;
    }

    // Voting process
    char choice;
    do {
        printf("\n-- Voting System Menu --\n");
        printf("1. Cast Vote\n");
        printf("2. View Results\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                castVote(candidates, numCandidates);
                break;
            case '2':
                printResults(candidates, numCandidates);
                break;
            case '3':
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    } while (choice != '3');

    // Free dynamically allocated memory
    free(candidates);

    return 0;
}
