void func_00148108() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00148108: addiu $sp, $sp, -0x10
    v1 = 3;                                                     // 0x00148114: addiu $v1, $zero, 3
    a0 = *(int32_t*)((a3) + 0x40);                              // 0x00148118: lw $a0, 0x40($a3)
    v0 = *(int32_t*)((a0) + 0x18c);                             // 0x0014811c: lw $v0, 0x18c($a0)
    if (v0 == v1) goto label_0x148138;                          // 0x00148120: beq $v0, $v1, 0x148138
    /* nop */                                                   // 0x00148124: nop 
    func_001482c8();  // 0x148150                                // 0x00148128: jal 0x148150
    goto label_0x148144;                                        // 0x00148130: b 0x148144
label_0x148138:
    func_00148108();  // 0x147fe8                                // 0x00148138: jal 0x147fe8
label_0x148144:
    return;                                                     // 0x00148144: jr $ra
    sp = sp + 0x10;                                             // 0x00148148: addiu $sp, $sp, 0x10
}