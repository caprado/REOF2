void func_00173dd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00173dd8: addiu $sp, $sp, -0x20
    if (s1 == 0) goto label_0x173e44;                           // 0x00173df4: beqz $s1, 0x173e44
    if (s0 <= 0) goto label_0x173e48;                           // 0x00173dfc: blez $s0, 0x173e48
    func_00169af0();  // 169af0                                // 0x00173e04: jal 0x169af0
    /* nop */                                                   // 0x00173e08: nop 
    a1 = 0xff00 << 16;                                          // 0x00173e0c: lui $a1, 0xff00
    a1 = a1 | 0x165;                                            // 0x00173e14: ori $a1, $a1, 0x165
    if (v0 == 0) goto label_0x173e38;                           // 0x00173e18: beqz $v0, 0x173e38
    return func_00169940();  // Tail call                        // 0x00173e30: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00173e34: addiu $sp, $sp, 0x20
label_0x173e38:
    a0 = s2 + 0x11ec;                                           // 0x00173e38: addiu $a0, $s2, 0x11ec
    func_00173e60();  // 173e60                                // 0x00173e3c: jal 0x173e60
label_0x173e44:
label_0x173e48:
    return;                                                     // 0x00173e58: jr $ra
    sp = sp + 0x20;                                             // 0x00173e5c: addiu $sp, $sp, 0x20
}