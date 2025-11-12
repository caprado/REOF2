void func_0016d288() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016d288: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((a0) + 0x1b38);                            // 0x0016d294: lw $a1, 0x1b38($a0)
    return func_00167308();  // Tail call                       // 0x0016d29c: j 0x167308
    sp = sp + 0x10;                                             // 0x0016d2a0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016d2a4: nop 
    sp = sp + -0x10;                                            // 0x0016d2a8: addiu $sp, $sp, -0x10
    v1 = 0x80;                                                  // 0x0016d2ac: addiu $v1, $zero, 0x80
    a1 = (a1 < 5) ? 1 : 0;                                      // 0x0016d2b4: slti $a1, $a1, 5
    if (a2 == v1) goto label_0x16d2e0;                          // 0x0016d2b8: beq $a2, $v1, 0x16d2e0
    v0 = 1;                                                     // 0x0016d2bc: addiu $v0, $zero, 1
    /* beqzl $a1, 0x16d2e0 */                                   // 0x0016d2c0: beqzl $a1, 0x16d2e0
    func_0016d308();  // 0x16d2f0                                // 0x0016d2c8: jal 0x16d2f0
    /* nop */                                                   // 0x0016d2cc: nop 
    v1 = 1;                                                     // 0x0016d2d0: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x16d2e4;                          // 0x0016d2d4: beq $v0, $v1, 0x16d2e4
label_0x16d2e0:
label_0x16d2e4:
    return;                                                     // 0x0016d2e4: jr $ra
    sp = sp + 0x10;                                             // 0x0016d2e8: addiu $sp, $sp, 0x10
}