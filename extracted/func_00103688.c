void func_00103688() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00103688: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x0010368c: addiu $v0, $zero, 1
    if (a2 != v0) goto label_0x1036a4;                          // 0x00103690: bne $a2, $v0, 0x1036a4
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x00103698: lw $v0, 0x10($a0)
    goto label_0x1036b0;                                        // 0x0010369c: b 0x1036b0
    v0 = ((unsigned)v0 < (unsigned)a1) ? 1 : 0;                 // 0x001036a0: sltu $v0, $v0, $a1
label_0x1036a4:
    func_00103020();  // 0x102f98                                // 0x001036a4: jal 0x102f98
label_0x1036b0:
    return;                                                     // 0x001036b4: jr $ra
    sp = sp + 0x10;                                             // 0x001036b8: addiu $sp, $sp, 0x10
}