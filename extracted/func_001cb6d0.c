void func_001cb6d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cb6d0: addiu $sp, $sp, -0x10
    at = (a1 < 2) ? 1 : 0;                                      // 0x001cb6d4: slti $at, $a1, 2
    if (at != 0) goto label_0x1cb6ec;                           // 0x001cb6d8: bnez $at, 0x1cb6ec
    a2 = a1 + -1;                                               // 0x001cb6e0: addiu $a2, $a1, -1
    func_001cb700();  // 1cb700                                // 0x001cb6e4: jal 0x1cb700
label_0x1cb6ec:
    return;                                                     // 0x001cb6f0: jr $ra
    sp = sp + 0x10;                                             // 0x001cb6f4: addiu $sp, $sp, 0x10
}