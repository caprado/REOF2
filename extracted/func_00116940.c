void func_00116940() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a2 >= 0) return;  // Branch to 0x116974                 // 0x00116944: bgez $a2, 0x116974
    v0 = 0xc;                                                   // 0x00116948: addiu $v0, $zero, 0xc
    v0 = 0x7fff << 16;                                          // 0x0011694c: lui $v0, 0x7fff
    a1 = 0xc;                                                   // 0x00116950: addiu $a1, $zero, 0xc
    v0 = v0 | 0xffff;                                           // 0x00116954: ori $v0, $v0, 0xffff
    v1 = 0x25 << 16;                                            // 0x00116958: lui $v1, 0x25
    v0 = a2 & v0;                                               // 0x0011695c: and $v0, $a2, $v0
    a0 = g_0024c724;  // Global at 0x0024c724                   // 0x00116960: lw $a0, -0x38dc($v1)
    /* multiply: v0 * a1 -> hi:lo */                            // 0x00116964: mult $ac2, $v0, $a1
    v0 = v0 + a0;                                               // 0x00116968: addu $v0, $v0, $a0
    return;                                                     // 0x0011696c: jr $ra
    g_7fff0000 = 0;  // Global at 0x7fff0000                    // 0x00116970: sw $zero, 0($v0)
}