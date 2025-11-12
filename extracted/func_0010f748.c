void func_0010f748() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* multiply: v0 *  -> hi:lo */                              // 0x0010f75c: multu $v1, $v0
    /* mflo $a2 */                                              // 0x0010f760
    /* mfhi $t0 */                                              // 0x0010f764
    /* multiply: v1 * a1 -> hi:lo */                            // 0x0010f770: mult $ac3, $v1, $a1
    a1 = -1;                                                    // 0x0010f774: addiu $a1, $zero, -1
    t1 = t1 & a1;                                               // 0x0010f784: and $t1, $t1, $a1
    a3 = 0xffff << 16;                                          // 0x0010f788: lui $a3, 0xffff
    t1 = t1 | a2;                                               // 0x0010f790: or $t1, $t1, $a2
    t1 = t1 & a3;                                               // 0x0010f798: and $t1, $t1, $a3
    t1 = t1 | t0;                                               // 0x0010f79c: or $t1, $t1, $t0
    v1 = v1 + a0;                                               // 0x0010f7a0: addu $v1, $v1, $a0
    a3 = t1 & a3;                                               // 0x0010f7a8: and $a3, $t1, $a3
    v0 = v0 + v1;                                               // 0x0010f7ac: addu $v0, $v0, $v1
    return;                                                     // 0x0010f7b4: jr $ra
    v0 = a3 | v0;                                               // 0x0010f7b8: or $v0, $a3, $v0
}