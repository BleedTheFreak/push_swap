# push_swap
### Actions :

<ul>
  <li>sa : swap a - Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements).</li>
  <li>sb : swap b - Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements).</li>
  <li>ss : sa and sb at the same time.</li>
  <li>pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if B is empty.</li>
  <li>pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if A is empty.</li>
  <li>ra : rotate a - shift up all elements of stack A by 1. The first element becomes the last one.</li>
  <li>rb : rotate b - shift up all elements of stack B by 1. The first element becomes the last one.</li>
  <li>rr : ra and rb at the same time..</li>
  <li>rra : reverse rotate a - shift down all elements of stack A by 1. The last element becomes the first one.</li>
  <li>rrb : reverse rotate b - shift down all elements of stack B by 1. The last element becomes the first one.</li>
  <li>rrr : rra and rrb at the same time.</li>
  </ul>
  
  
Clone the project with : `git clone https://github.com/BleedTheFreak/push_swap.git` </br></br>
after that Use : `make` as in the img : </br></br>
<img src="https://github.com/BleedTheFreak/push_swap/blob/master/Screen%20Shot%202022-02-07%20at%205.30.51%20PM.png" alt="drawing" width="700"/>
</br></br>
### Example  : </br>
When program start there is two stacks stackA & stackB the StackA full with program arguments and stackB Empty : </br>

<img src="https://github.com/BleedTheFreak/push_swap/blob/master/Screen%20Shot%202022-02-07%20at%205.31.36%20PM.png" alt="drawing" width="700"/>
stackA : [3] [2] [1] </br>
sa : </br>
stackA : [2] [3] [1] </br>
rra : </br>
stackA : [1] [2] [3] </br>
