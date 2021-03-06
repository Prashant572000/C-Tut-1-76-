//                                      Dynamic Memory Allocation (DMA)

/*
A var or arr has fixed size in memory.      Ex- char name[34];

DMA is a method we can allocate memory in runtime or free 

                Static MA                           Vs                  DMA
Allocation is done before program's execution       VS   Is done during program's execution
No resuability and memory allocated can't be free   Vs   reusability memory , can be free 
            Less efficient                          Vs              More effcient

MA in C - Memory assigned to prgram in 4 segments 
1. code              - Full program (Text program - where your code saved)
2. Static/Global var - 1. Data segment(initialized storage Ex- int a=3;) 
                       2. bss(block started by symbol) segment(uninitialized  Ex- int a;)
3. Stack             - jaise-2 program age bdta jata h  stack grows
4. Heap              - Heap grow when we DMA

*/