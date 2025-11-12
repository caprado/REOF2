void func_00126138() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00126138: addiu $sp, $sp, -0x10
    v0 = 2;                                                     // 0x0012613c: addiu $v0, $zero, 2
    v1 = *(int16_t*)((a0) + 0x9a);                              // 0x00126144: lh $v1, 0x9a($a0)
    if (v1 != v0) goto label_0x126160;                          // 0x00126148: bne $v1, $v0, 0x126160
    v0 = 1;                                                     // 0x0012614c: addiu $v0, $zero, 1
    return func_001260d0();  // Tail call                        // 0x00126154: j 0x125f30
    sp = sp + 0x10;                                             // 0x00126158: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012615c: nop 
label_0x126160:
    if (v1 != v0) goto label_0x126170;                          // 0x00126160: bne $v1, $v0, 0x126170
    return func_00125f30();  // Tail call                        // 0x00126168: j 0x125d98
    sp = sp + 0x10;                                             // 0x0012616c: addiu $sp, $sp, 0x10
label_0x126170:
    if (v1 != 0) goto label_0x126188;                           // 0x00126170: bnez $v1, 0x126188
    /* nop */                                                   // 0x00126174: nop 
    return func_00125d98();  // Tail call                        // 0x0012617c: j 0x125c20
    sp = sp + 0x10;                                             // 0x00126180: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00126184: nop 
label_0x126188:
    return;                                                     // 0x00126188: jr $ra
    sp = sp + 0x10;                                             // 0x0012618c: addiu $sp, $sp, 0x10
}