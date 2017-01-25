# CDA3101 Recitation 1 Outline

Goals:
* Discuss project requirements
* Demonstrate sample translations
* Discuss recommended project approach
* Demonstrate sample sscanf and fgets usage

Check the most advanced programming courses taken by people in class.

## Outline

1. Cover project


## Recommended approach from Caitlin

```
typedef struct {
	char label[20];
	char instruction[30];
	int address;
} line_t;

line_t lines[512];



char assembly_line[50];   /* Assume no more than 50 characters per line */
char label[20]; /*generous size for temporary label and temporary instruction */
char instruction[30];  

/* Pick up a line from stdin, of at most 50 characters, and place it assembly_line  -- a temporary buffer for the line*/
while(fgets(assembly_line, 50, stdin) != NULL){

   /* You should try to accomplish three goals during the first pass: expand the la instructions, associate labels with instructions, and associate instructions with addresses */
   /* Use sscanf to break apart the lines you pick up with fgets. The sscanf formatting strings
      are tricky, so prepare to spend a little bit learning how they work and tweaking them */

   if(sscanf(assembly_line, "%[^:]:\t%[^\n]", label, instruction) == 2){
       /* Successfully found a label and an instruction */

   }
  else if(sscanf(assembly_line, "\t%[^\n]", instruction) == 1){
       /* Line does not contain a label */
   }

   /* Try to inspect the instruction here to see whether it's an la and also to calculate how the
       address for the next line should be calculated */
   /* At this point, you should have the instruction, label, and address, so fill in your next
      available lines[i] entry! */

}

/* SECOND PASS */
/* After you've gone through the file, noted the labels, and calculated addresses,
translate each instruction (loop through lines!) and print out each instruction, one by one */

```
