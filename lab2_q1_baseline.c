"addi t0,x0,16\n\t"//i=16
"addi %[arith_cnt],%[arith_cnt],1\n\t"
"loop1:\n\t"//while
"lh t1,0(%[h])\n\t"//h
"lh t2,0(%[x])\n\t"//x
"addi %[lw_cnt],%[lw_cnt],2\n\t"
"add t3,t1,t2\n\t"//t=x+h
"addi %[arith_cnt],%[arith_cnt],1\n\t"
"sh t3,0(%[y])\n\t"//store y
"addi %[sw_cnt],%[sw_cnt],1\n\t"
"addi %[h],%[h],2\n\t"
"addi %[x],%[x],2\n\t"
"addi %[y],%[y],2\n\t"
"addi %[arith_cnt],%[arith_cnt],3\n\t"
"addi t0,t0,-1\n\t"
"addi %[arith_cnt],%[arith_cnt],1\n\t"
"addi %[others_cnt],%[others_cnt],1\n\t"
"bnez t0,loop1\n\t"


