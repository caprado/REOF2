void func_001168c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (v0 >= 0) goto label_0x11690c;                           // 0x001168cc: bgez $v0, 0x11690c
    v1 = 0x7fff << 16;                                          // 0x001168d4: lui $v1, 0x7fff
    a1 = 0xc;                                                   // 0x001168d8: addiu $a1, $zero, 0xc
    v1 = v1 | 0xffff;                                           // 0x001168dc: ori $v1, $v1, 0xffff
    a0 = 0x25 << 16;                                            // 0x001168e0: lui $a0, 0x25
    v1 = v0 & v1;                                               // 0x001168e4: and $v1, $v0, $v1
    a0 = a0 + -0x38e8;                                          // 0x001168e8: addiu $a0, $a0, -0x38e8
    /* multiply: v1 * a1 -> hi:lo */                            // 0x001168ec: mult $ac3, $v1, $a1
    v0 = g_0024c724;  // Global at 0x0024c724                   // 0x001168f0: lw $v0, 0xc($a0)
    v0 = v1 + v0;                                               // 0x001168f4: addu $v0, $v1, $v0
    *(uint32_t*)((v0) + 4) = a2;                                // 0x001168f8: sw $a2, 4($v0)
    *(uint32_t*)(v0) = a3;                                      // 0x001168fc: sw $a3, 0($v0)
    goto label_0x116934;                                        // 0x00116904: b 0x116934
    v0 = g_0024c724;  // Global at 0x0024c724                   // 0x00116908: lw $v0, 0xc($a0)
label_0x11690c:
    v1 = 0xc;                                                   // 0x0011690c: addiu $v1, $zero, 0xc
    a0 = 0x25 << 16;                                            // 0x00116910: lui $a0, 0x25
    /* multiply: v0 * v1 -> hi:lo */                            // 0x00116914: mult $ac3, $v0, $v1
    a0 = a0 + -0x38e8;                                          // 0x00116918: addiu $a0, $a0, -0x38e8
    v0 = g_0024c72c;  // Global at 0x0024c72c                   // 0x0011691c: lw $v0, 0x14($a0)
    v0 = v1 + v0;                                               // 0x00116920: addu $v0, $v1, $v0
    *(uint32_t*)((v0) + 4) = a2;                                // 0x00116924: sw $a2, 4($v0)
    *(uint32_t*)(v0) = a3;                                      // 0x00116928: sw $a3, 0($v0)
    v0 = g_0024c72c;  // Global at 0x0024c72c                   // 0x00116930: lw $v0, 0x14($a0)
label_0x116934:
    v1 = v1 + v0;                                               // 0x00116934: addu $v1, $v1, $v0
    return;                                                     // 0x00116938: jr $ra
    g_7fff0008 = a1;  // Global at 0x7fff0008                   // 0x0011693c: sw $a1, 8($v1)
}