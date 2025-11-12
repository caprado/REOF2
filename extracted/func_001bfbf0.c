void func_001bfbf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bfbf0: addiu $sp, $sp, -0x10
    v1 = -1;                                                    // 0x001bfbf4: addiu $v1, $zero, -1
    a0 = *(int32_t*)((a0) + 0x24);                              // 0x001bfbfc: lw $a0, 0x24($a0)
    if (a0 == v1) goto label_0x1bfc10;                          // 0x001bfc00: beq $a0, $v1, 0x1bfc10
    /* nop */                                                   // 0x001bfc04: nop 
    func_001bfbf0();  // 0x1bfbc0                                // 0x001bfc08: jal 0x1bfbc0
    /* nop */                                                   // 0x001bfc0c: nop 
label_0x1bfc10:
    return;                                                     // 0x001bfc14: jr $ra
    sp = sp + 0x10;                                             // 0x001bfc18: addiu $sp, $sp, 0x10
}