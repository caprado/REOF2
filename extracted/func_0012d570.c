void func_0012d570() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012d570: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 4);                                 // 0x0012d578: lw $a0, 4($a0)
    return func_00124bf8();  // Tail call                       // 0x0012d580: j 0x124bf8
    sp = sp + 0x10;                                             // 0x0012d584: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0012d588: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 4);                                 // 0x0012d590: lw $a0, 4($a0)
    return func_00124c00();  // Tail call                       // 0x0012d598: j 0x124c00
    sp = sp + 0x10;                                             // 0x0012d59c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0012d5a0: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 4);                                 // 0x0012d5a8: lw $a0, 4($a0)
    return func_00124c10();  // Tail call                        // 0x0012d5b0: j 0x124c08
    sp = sp + 0x10;                                             // 0x0012d5b4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0012d5b8: addiu $sp, $sp, -0x10
    func_00124c08();  // 124c08                                // 0x0012d5c8: jal 0x124c08
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012d5cc: lw $a0, 4($s0)
    if (v0 <= 0) goto label_0x12d600;                           // 0x0012d5d0: blez $v0, 0x12d600
    v0 = *(uint8_t*)((s0) + 1);                                 // 0x0012d5d8: lbu $v0, 1($s0)
    v0 = v0 + -2;                                               // 0x0012d5dc: addiu $v0, $v0, -2
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0012d5e0: sltiu $v0, $v0, 2
    /* beqzl $v0, 0x12d600 */                                   // 0x0012d5e4: beqzl $v0, 0x12d600
    func_00124c10();  // 124c10                                // 0x0012d5ec: jal 0x124c10
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012d5f0: lw $a0, 4($s0)
    goto label_0x12d604;                                        // 0x0012d5f4: b 0x12d604
    /* nop */                                                   // 0x0012d5fc: nop 
label_0x12d600:
label_0x12d604:
    return;                                                     // 0x0012d608: jr $ra
    sp = sp + 0x10;                                             // 0x0012d60c: addiu $sp, $sp, 0x10
}