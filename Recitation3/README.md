# CDA3101 Recitation 3 Outline

Goals:
* Discuss project 2 requirements
* Discuss sample driver
* Discuss basic pipelining

## Test cases
test 1: Uses only load word. No stalls or hazards.
test 2: Uses only load word and store word. No stalls or hazards.
test 3: Uses only load word and add. No stalls or hazards.
test 4: Uses load word, add, and store word. No stalls or hazards.
test 5: Uses load word, add, and store word. Data hazard. Relies on forwarding, but no stalling required.
test 6: Uses load word, add, and store word. Data hazards. Relies on forwarding and stalling required.
test 7: Uses load word, add, sub, and store word. Data hazards. Relies on forwarding and stalling required.
test 8: Uses load word, sub, and branch. Data hazards and control hazards. Relies on forwarding, stalling, and branch prediction.
test 9: Uses load word, add, and branch. Data hazards and control hazards. Relies on forwarding, stalling, and branch prediction.