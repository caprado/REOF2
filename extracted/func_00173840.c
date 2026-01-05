void func_00173840() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00173840: addiu $sp, $sp, -0x20
    a1 = 1;                                                     // 0x00173844: addiu $a1, $zero, 1
    v1 = *(int32_t*)((s0) + 0x48);                              // 0x00173854: lw $v1, 0x48($s0)
    if (v1 == a1) goto label_0x1738a0;                          // 0x00173858: beq $v1, $a1, 0x1738a0
    func_001738d0();  // 1738d0                                // 0x00173860: jal 0x1738d0
    /* nop */                                                   // 0x00173864: nop 
    if (v0 != 0) goto label_0x1738a0;                           // 0x00173868: bnez $v0, 0x1738a0
    func_00169b88();  // 169b88                                // 0x00173870: jal 0x169b88
    /* nop */                                                   // 0x00173874: nop 
    func_001738b0();  // 1738b0                                // 0x00173878: jal 0x1738b0
    a0 = 1;                                                     // 0x0017387c: addiu $a0, $zero, 1
    func_00173930();  // 173930                                // 0x00173880: jal 0x173930
    func_001738b0();  // 1738b0                                // 0x0017388c: jal 0x1738b0
    func_00169ba0();  // 169ba0                                // 0x00173894: jal 0x169ba0
label_0x1738a0:
    return;                                                     // 0x001738a8: jr $ra
    sp = sp + 0x20;                                             // 0x001738ac: addiu $sp, $sp, 0x20
}