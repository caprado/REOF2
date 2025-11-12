void func_00112900() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00112900: addiu $sp, $sp, -0x40
    a2 = a2 << 0x10;                                            // 0x00112904: sll $a2, $a2, 0x10
    s1 = a0 << 0x10;                                            // 0x00112910: sll $s1, $a0, 0x10
    s0 = a1 << 0x10;                                            // 0x00112918: sll $s0, $a1, 0x10
    s0 = s0 >> 0x10;                                            // 0x0011291c: sra $s0, $s0, 0x10
    s1 = s1 >> 0x10;                                            // 0x00112920: sra $s1, $s1, 0x10
    func_001123b0();  // 0x1123a0                                // 0x00112928: jal 0x1123a0
    s2 = a2 >> 0x10;                                            // 0x0011292c: sra $s2, $a2, 0x10
    v1 = s0 + 0x3f;                                             // 0x00112930: addiu $v1, $s0, 0x3f
    a0 = -1;                                                    // 0x00112938: addiu $a0, $zero, -1
    s0 = s0 + 0x7e;                                             // 0x0011293c: addiu $s0, $s0, 0x7e
    v0 = (a0 < v1) ? 1 : 0;                                     // 0x00112940: slt $v0, $a0, $v1
    s1 = s1 & 2;                                                // 0x00112944: andi $s1, $s1, 2
    if (v0 != 0) s0 = v1;                                       // 0x00112948: movn $s0, $v1, $v0
    if (s1 == 0) goto label_0x11296c;                           // 0x0011294c: beqz $s1, 0x11296c
    s0 = s0 >> 6;                                               // 0x00112950: sra $s0, $s0, 6
    v0 = s2 + 0x3f;                                             // 0x00112954: addiu $v0, $s2, 0x3f
    v1 = s2 + 0x7e;                                             // 0x00112958: addiu $v1, $s2, 0x7e
    a0 = (a0 < v0) ? 1 : 0;                                     // 0x0011295c: slt $a0, $a0, $v0
    if (a0 != 0) v1 = v0;                                       // 0x00112960: movn $v1, $v0, $a0
    goto label_0x112980;                                        // 0x00112964: b 0x112980
    a2 = v1 >> 6;                                               // 0x00112968: sra $a2, $v1, 6
label_0x11296c:
    v0 = s2 + 0x1f;                                             // 0x0011296c: addiu $v0, $s2, 0x1f
    v1 = s2 + 0x3e;                                             // 0x00112970: addiu $v1, $s2, 0x3e
    a0 = (a0 < v0) ? 1 : 0;                                     // 0x00112974: slt $a0, $a0, $v0
    if (a0 != 0) v1 = v0;                                       // 0x00112978: movn $v1, $v0, $a0
    a2 = v1 >> 5;                                               // 0x0011297c: sra $a2, $v1, 5
label_0x112980:
    v1 = 0 | 0xffff;                                            // 0x00112984: ori $v1, $zero, 0xffff
    v1 = v1 | 0xffff;                                           // 0x0011298c: ori $v1, $v1, 0xffff
    a0 = 1;                                                     // 0x00112990: addiu $a0, $zero, 1
    v0 = v0 & v1;                                               // 0x00112994: and $v0, $v0, $v1
    if (v0 != a0) goto label_0x1129a8;                          // 0x00112998: bne $v0, $a0, 0x1129a8
    /* multiply: s0 * a2 -> hi:lo */                            // 0x0011299c: mult $ac2, $s0, $a2
    goto label_0x1129ac;                                        // 0x001129a0: b 0x1129ac
    v0 = v0 << 0x10;                                            // 0x001129a4: sll $v0, $v0, 0x10
label_0x1129a8:
    v0 = v0 << 0x11;                                            // 0x001129a8: sll $v0, $v0, 0x11
label_0x1129ac:
    v0 = v0 >> 0x10;                                            // 0x001129ac: sra $v0, $v0, 0x10
    return;                                                     // 0x001129c0: jr $ra
    sp = sp + 0x40;                                             // 0x001129c4: addiu $sp, $sp, 0x40
}