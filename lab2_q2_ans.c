"addi t1,x0,8\n\t"//i=8
"addi %[flag],x0,0\n\t"//flag=0;
"vsetvli t2,t1,e16,ta,ma\n\t"//set vector
"vle16.v v0,(%[p_x])\n\t"//load vectoer
"loop3:\n\t"
"beqz t1,exit\n\t"
"lh t0,0(%[p_x])\n\t"//load element
"vadd.vx v0,v0,t0\n\t" // add
"vmseq.vx v1,v0,%[target]\n\t"
"vfirst.m t3,v1\n\t"
"vsub.vx v0,v0,t0\n\t"
"addi %[p_x],%[p_x],2\n\t"
"addi t1,t1,-1\n\t"
"bltz t3,loop3\n\t"
"addi %[flag],%[flag],1\n\t"
"exit:\n\t"
