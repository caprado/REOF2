void func_0013ed40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013ed40: addiu $sp, $sp, -0x10
    v0 = 0x10;                                                  // 0x0013ed44: addiu $v0, $zero, 0x10
    if (a1 == v0) goto label_0x13ed68;                          // 0x0013ed48: beq $a1, $v0, 0x13ed68
    a0 = 0x22 << 16;                                            // 0x0013ed50: lui $a0, 0x22
    a0 = &str_00226160;  // "PS2RNA_GetStartSmpl: not implemented\n" // 0x0013ed58: addiu $a0, $a0, 0x6160
    return func_00116598();  // Tail call                        // 0x0013ed5c: j 0x116508
    sp = sp + 0x10;                                             // 0x0013ed60: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013ed64: nop 
label_0x13ed68:
    return;                                                     // 0x0013ed6c: jr $ra
    sp = sp + 0x10;                                             // 0x0013ed70: addiu $sp, $sp, 0x10
}